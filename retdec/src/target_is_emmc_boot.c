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
int32_t target_is_emmc_boot(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x2020003a; // 0x8f686ac4
int32_t g2 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f619f80 - 0x8f619fb3
int32_t target_is_emmc_boot(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f619f80
    return 1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 08:04:47