//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t bs_to_str(int32_t * a1, int32_t * a2);
int32_t type_atoi_1(char * str, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x5b28002e; // 0x8f688719
int32_t g2 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f61387c - 0x8f61397f
int32_t type_atoi_1(char * str, int32_t a2, int32_t a3) {
    int32_t str2 = (int32_t)str;
    int32_t v1 = g2;
    if (str == NULL) {
        // 0x8f613940
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return str2;
    }
    // 0x8f613898
    if (strcmp(str, "bool") == 0) {
        // if_8f6138a4_0_true
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return 1;
    }
    // 0x8f6138ac
    if (strcmp((char *)str2, "str") == 0) {
        // if_8f6138bc_0_true
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return 2;
    }
    // 0x8f6138c4
    if (strcmp((char *)str2, "char") == 0) {
        // if_8f6138d4_0_true
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return 3;
    }
    // 0x8f6138dc
    if (strcmp((char *)str2, "long") == 0) {
        // if_8f6138ec_0_true
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return 4;
    }
    // 0x8f6138f4
    if (strcmp((char *)str2, "ulong") == 0) {
        // if_8f613904_0_true
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return 5;
    }
    // 0x8f61390c
    if (strcmp((char *)str2, "llong") == 0) {
        // if_8f61391c_0_true
        // branch -> 0x8f613944
        // 0x8f613944
        if (v1 != g2) {
            // 0x8f613954
            __stack_chk_fail();
            // branch -> 0x8f613958
        }
        // 0x8f613958
        return 6;
    }
    // 0x8f613924
    int32_t v2; // R0
    int32_t v3; // 0x8f61395c_28
    if (strcmp((char *)str2, "ullong") == 0) {
        // if_8f613938_0_true
        v2 = 7;
        v3 = 7;
        // branch -> 0x8f613944
    } else {
        // if_8f613934_0_true
        v2 = 255;
        v3 = 255;
        // branch -> 0x8f613944
    }
    // 0x8f613944
    int32_t result; // 0x8f61395c_2
    if (v1 != g2) {
        // 0x8f613954
        __stack_chk_fail();
        result = v2;
        // branch -> 0x8f613958
    } else {
        result = v3;
    }
    // 0x8f613958
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int strcmp(const char * s1, const char * s2);
// char * strncat(char * restrict dest, const char * restrict src, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:18:25