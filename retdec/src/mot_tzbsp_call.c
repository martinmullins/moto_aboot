//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t cache_inv_range(int32_t a1, int32_t a2, int32_t a3);
char * mot_tzbsp_call(int32_t a1, int32_t a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x8f606d48 - 0x8f606df7
char * mot_tzbsp_call(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1;
    char * v2 = (char *)v1; // bp-92
    int32_t v3 = (int32_t)&v2;
    memset((char *)&v2, 0, 64);
    int32_t v4;
    memset((char *)&v4, 0, 12);
    v2 = (char *)2570;
    if (scm_call2(v3, (int32_t)&v4, 12, 3, v4, 0) != 0) {
        print_log(-1, (int32_t)"SCM call fail %d %d\n", v3, v4, v4, 0, 0, (int32_t)v2, 3, a1, a2, a3, 0);
        // branch -> 0x8f606dcc
    }
    // 0x8f606de4
    return (char *)&v2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 06:13:49
