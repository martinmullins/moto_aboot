//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int32_t free_scm_command(char * a1, int32_t a2);
int32_t is_scm_arm_support(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x8f6163c8 - 0x8f616413
int32_t free_scm_command(char * a1, int32_t a2) {
    int32_t result = *(int32_t *)-0x708eed0c; // 0x8f6163e0
    free(a1);
    if (result != *(int32_t *)-0x708eed0c) {
        // 0x8f616408
        __stack_chk_fail();
        // branch -> 0x8f61640c
    }
    // 0x8f61640c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:32:06
