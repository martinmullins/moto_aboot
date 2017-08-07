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

// Address range: 0x8f6137d0 - 0x8f61387b
int32_t bs_to_str(int32_t * a1, int32_t * a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = (int32_t)a2;
    int32_t v3 = (bool)false ? (int32_t)&g2 : 0; // 0x8f6137d0
    int32_t v4 = g2;
    if (a2 == NULL) {
        // 0x8f61386c
        return &g2;
    }
    int32_t str2 = *a2; // 0x8f6137f0
    if (str2 == 0) {
        // 0x8f61386c
        return &g2;
    }
    int32_t str = *(int32_t *)(v2 + 4); // 0x8f6137fc
    if (str == 0) {
        // 0x8f61386c
        return &g2;
    }
    // 0x8f613808
    strncpy((char *)str, (char *)str2, 72);
    int32_t v5 = *(int32_t *)(v2 + 4); // 0x8f613814
    *(char *)(v5 + 71) = 0;
    int32_t v6 = *(int32_t *)(v2 + 4); // 0x8f613828
    int32_t v7;
    int32_t result = strlcat(v6, (int32_t)&g1, 173, v5, v1, v4, 0, v3, 0, 0, v7, 0); // 0x8f61382c
    if (v4 != g2) {
        // 0x8f613868
        __stack_chk_fail();
        // branch -> 0x8f61386c
        // 0x8f61386c
        return result;
    }
    int32_t str3 = *(int32_t *)(v2 + 4); // 0x8f613840
    int32_t str4 = *(int32_t *)v1; // 0x8f613848
    return (int32_t)strncat((char *)str3, (char *)str4, 173);
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
