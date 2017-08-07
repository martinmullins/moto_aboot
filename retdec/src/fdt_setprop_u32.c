//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t fdt_setprop_u32(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
char * platform_dt_absolute_compat_match(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g2 = 0; // R4
int32_t g3 = 0; // R5
int32_t g4 = 0; // R7
int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f613764 - 0x8f6137cf
int32_t fdt_setprop_u32(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g2; // 0x8f613764
    int32_t v2 = g4; // 0x8f613764
    g2 = &g1;
    g4 = a2;
    int32_t v3 = g1;
    int32_t v4;
    int32_t v5 = fdt32_to_cpu(a4, a2, v3, a4, v4, 0, 0, a4, 0); // 0x8f61378c
    int32_t v6 = v5; // bp-36
    int32_t v7;
    int32_t v8;
    int32_t result = fdt_setprop(a1, a2, a3, (int32_t)&v6, 4, 0, 0, v5, 0, v3, v8, v1, g3, 0, v2, 0, v7); // 0x8f6137ac
    if (v3 != g1) {
        // 0x8f6137c0
        __stack_chk_fail();
        // branch -> 0x8f6137c4
    }
    // 0x8f6137c4
    g2 = v1;
    g4 = v2;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:15:23
