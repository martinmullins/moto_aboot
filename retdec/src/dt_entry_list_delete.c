//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int32_t dt_entry_list_delete(char * a1, int32_t a2, int32_t a3);
int32_t update_dtb_entry_node(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g2 = 0; // R1
int32_t g3 = 0; // R2
int32_t g4 = 0; // R3
int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f613148 - 0x8f6131d7
int32_t dt_entry_list_delete(char * a1, int32_t a2, int32_t a3) {
    int32_t result2 = (int32_t)a1;
    int32_t result = result2; // R4
    int32_t v1 = *(int32_t *)a1; // 0x8f613154
    g2 = v1;
    int32_t v2 = *(int32_t *)(result2 + 4); // 0x8f613168
    if ((v2 || v1) == 0) {
        // 0x8f6131b8
        g3 = g1;
        g4 = g1;
        // branch -> 0x8f6131cc
    } else {
        // 0x8f613178
        *(int32_t *)v2 = v1;
        int32_t v3 = *(int32_t *)(result + 8); // R0
        *(int32_t *)(*(int32_t *)result + 4) = v2;
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        free((char *)v3);
        g3 = g1;
        g4 = g1;
        // 0x8f6131a8
        free((char *)result);
        return result;
        // 0x8f6131c8
        __stack_chk_fail();
        result2 = v3;
        // branch -> 0x8f6131cc
    }
    // 0x8f6131cc
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:12:22
