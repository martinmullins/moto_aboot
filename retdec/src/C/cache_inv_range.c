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

// Address range: 0x8f606ce8 - 0x8f606d47
int32_t cache_inv_range(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result = a1 & -64; // 0x8f606d04
    if (result < (a1 - 1 + a2 || 63) + 1) {
        // 0x8f606d3c
        return result;
    }
    int32_t result2 = result + 64; // 0x8f606d18
    while (result2 >= (a1 - 1 + a2 | 63) + 1) {
        // 0x8f606d14
        result2 += 64;
        // continue -> 0x8f606d14
    }
    // 0x8f606d3c
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 06:13:49
