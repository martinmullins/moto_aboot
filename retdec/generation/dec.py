#!/usr/bin/python
import os
from pprint import pprint

INAROW=15
atatime = []

with open('symbols','r') as f:
    syms = eval(f.read())
    temp = []
    for i,s in enumerate(syms):
        if i%INAROW == 0 and i > 0:
            atatime.append(temp)
            temp =[]
        start,end,name = s
        start = int('0x'+start,16)
        end += start
        start = "0x%X" % start 
        end = "0x%X" % end
        dirname = "./"+name
        if not os.path.exists(dirname):
            os.makedirs(dirname)
        #print "./decompiler -k $KEY --only-range",start+"-"+end,"-o",dirname,"$FILE"
        temp.append((start,end,dirname))

for t in atatime:
    ranges =  ""
    dirname = t[0][2]
    for r in t:
        ranges+=r[0]+"-"+r[1]+","

    assert ranges, "Invalid ranges"
        
    ranges=ranges[:-1]

    print "./decompiler -k $KEY --only-range",ranges,"-o",dirname,"$FILE"
    
#pprint(atatime)
