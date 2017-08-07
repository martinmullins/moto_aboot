import os
import re
from pprint import pprint

rootdir = '.'
fn = 'aboot.c'
output_dir = 'outp'
ignore_dirs = ['snowman',output_dir]

protoSection = '// ------------------- Function Prototypes --------------------'
globalSection = '// --------------------- Global Variables ---------------------'

staticSection = '// --------------- Statically Linked Functions ----------------'
functionSection = '// ------------------------ Functions -------------------------'
functionStartComment = '// Address range:'

aboots = []
for subdir, dirs, files in os.walk(rootdir):
    for d in dirs:
        if d not in ignore_dirs:
            for ssdir, sdir, sfiles in os.walk(d):
                for f in sfiles:
                    if f.endswith('.c'):
                        aboots.append(ssdir)

for d in aboots:
    header = []
    proto = []
    glob = []
    functions = []
    footer = []
    print "Splitting", d
    with open(os.path.join(d,fn)) as f:
        section = header
        for line in f.readlines():
            if line.startswith(protoSection):
                section = proto
            elif line.startswith(globalSection):
                section = glob
            elif line.startswith(functionSection):
                section = functions
            elif line.startswith(staticSection):
                section = footer

            section.append(line)
            
    newFn = False
    sepFuncs = {}
    fnNameReg = re.compile('[A-Za-z_0-9]+(?=\()')
    fnName = ""
    funcHeader = []

    for line in functions:
        if line.startswith(functionStartComment):
            newFn = True
            funcHeader = []
            funcHeader.append(line)
            continue
        elif newFn and line.startswith('//'):
            funcHeader.append(line)
            continue
        elif newFn:
            newFn = False
            fnName = fnNameReg.search(line)
            assert fnName, line
            fnName = fnName.group()
            assert fnName in line.split('(',1)[0], line
            sepFuncs[fnName] = funcHeader

        if fnName:
            sepFuncs[fnName].append(line)

    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    for fnName in sepFuncs.keys():
        outf = os.path.join(output_dir,fnName+'.c')
        print "Writing",outf
        with open(outf,'w') as f:
            f.write(''.join(header))
            f.write(''.join(proto))
            f.write(''.join(glob))
            f.write(functionSection+'\n'*2)
            f.write(''.join(sepFuncs[fnName]))
            f.write(''.join(footer))
