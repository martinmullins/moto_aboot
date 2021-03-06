//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_gets_constprop_4(char * a1, int32_t a2, int32_t a3);
int32_t target_ram_info(void);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x2020003a; // 0x8f686ac4
int32_t g2 = 0; // 0x8f6c0004
int32_t g3 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f619d7c - 0x8f619ddf
int32_t target_ram_info(void) {
    int32_t v1 = 0; // R4
    int32_t v2 = 0; // 0x8f619d7c
    int32_t v3;
    int32_t v4 = smem_read_alloc_entry(135, (int32_t)&g2, 20, g3, v2, g3, v1, 0, v3); // 0x8f619d98
    int32_t result = &g2;
    if (v4 != 0) {
        // 0x8f619da8
        print_log(0, (int32_t)"ERROR: unable to read shared memory for mem info\n", 20, g3, v2, g3, v1, 0, v3, 0, 0, 0, 0);
        result = 0;
        // branch -> 0x8f619db8
    }
    // 0x8f619dcc
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 08:03:10
