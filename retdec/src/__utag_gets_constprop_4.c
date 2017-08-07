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

// Address range: 0x8f619de0 - 0x8f619f7f
int32_t __utag_gets_constprop_4(char * a1, int32_t a2, int32_t a3) {
    // 0x8f619de0
    int32_t v1;
    int32_t str = v1; // bp-68
    int32_t str2 = (int32_t)a1; // 0x8f619de0_0
    int32_t v2 = g2; // R3
    int32_t v3;
    uint32_t v4 = __utag_sizeof(NULL, str2, a3, g2, v3, v1, 0, 0, 0); // 0x8f619e08
    if (v4 == 0) {
        // after_if_8f619e20_0.thread
        // branch -> 0x8f619f30
        // 0x8f619f30
        if (v4 > a3) {
            // 0x8f619f38
            // branch -> 0x8f619eec
            // 0x8f619eec
            print_log(-1, (int32_t)"!!! Cannot get utag %s: payload overflow\n", str2, v2, v3, v1, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f619f48
        }
        // 0x8f619f5c
        return 0;
    }
    // after_if_8f619e20_0
    if (v4 > a3) {
        // 0x8f619f30
        if (v4 > a3) {
            // 0x8f619f38
            // branch -> 0x8f619eec
            // 0x8f619eec
            print_log(-1, (int32_t)"!!! Cannot get utag %s: payload overflow\n", str2, v2, v3, v1, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f619f48
        }
        // 0x8f619f5c
        return 0;
    }
    // 0x8f619e2c
    if (__utag_read(NULL, str2, a2, v4, v3, v1, 0, 0, 0, 0, 0, 0, 0) == 0) {
        // 0x8f619f5c
        return 0;
    }
    int32_t v5 = a2 + v4; // 0x8f619e48
    int32_t v6; // 0x8f619e70_0
    char * found_char_pos; // 0x8f619e88
    int32_t v7; // 0x8f619e94
    char * found_char_pos2; // 0x8f619ec8
    int32_t v8; // 0x8f619ed4
    int32_t v9; // 0x8f619f08
    int32_t result;
    int32_t v10; // 0x8f619ed8
    if (*(char *)(v5 - 1) == 0) {
        // 0x8f619e68
        v6 = &str;
        v2 = 0;
        strncpy((char *)&str, (char *)str2, 31);
        found_char_pos = strrchr((char *)&str, 58);
        v7 = type_atoi_2((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos, 58, 31, v2, v3, str, 0);
        v10 = v7;
        if (v7 == 0) {
            // 0x8f619ea0
            strlcat(v6, (int32_t)&g1, 31, v2, v3, str, 0, 0, 0, 0, 0, 0);
            strlcat(v6, (int32_t)"str", 31, v2, v3, str, 0, 0, 0, 0, 0, 0);
            found_char_pos2 = strrchr((char *)&str, 58);
            v8 = type_atoi_2((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2, 58, 31, v2, v3, str, 0);
            v10 = v8;
            // branch -> 0x8f619ed8
        }
        // 0x8f619ed8
        if (v10 == 255) {
            // 0x8f619ee0
            // branch -> 0x8f619eec
            // 0x8f619eec
            print_log(-1, (int32_t)"Error: not a string type: %s\n", (int32_t)"<invalid>", v2, v3, str, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f619f48
            // 0x8f619f5c
            return 0;
        }
        // 0x8f619ef8
        v9 = __utag_validate(NULL, v6, a2, v4, v3, str, 0, 0, 0, 0, 0, 0, 0, g2);
        if (v9 == 0) {
            // 0x8f619f18
            print_log(-1, (int32_t)"!!! utag_validation FAIL for %s:%s\n", str2, a2, v3, str, 0, 0, 0, 0, 0, 0, 0);
            result = 0;
            // branch -> 0x8f619f48
        } else {
            // if_8f619f10_0_true
            result = a2;
            // branch -> 0x8f619f48
        }
        // 0x8f619f5c
        return result;
    }
    // 0x8f619e58
    if (v4 == a3) {
        // 0x8f619f5c
        return 0;
    }
    // if_8f619e5c_0_true
    *(char *)v5 = 0;
    // branch -> 0x8f619e68
    // 0x8f619e68
    v6 = &str;
    v2 = 0;
    strncpy((char *)&str, (char *)str2, 31);
    found_char_pos = strrchr((char *)&str, 58);
    v7 = type_atoi_2((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos, 58, 31, v2, v3, str, 0);
    v10 = v7;
    if (v7 == 0) {
        // 0x8f619ea0
        strlcat(v6, (int32_t)&g1, 31, v2, v3, str, 0, 0, 0, 0, 0, 0);
        strlcat(v6, (int32_t)"str", 31, v2, v3, str, 0, 0, 0, 0, 0, 0);
        found_char_pos2 = strrchr((char *)&str, 58);
        v8 = type_atoi_2((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2, 58, 31, v2, v3, str, 0);
        v10 = v8;
        // branch -> 0x8f619ed8
    }
    // 0x8f619ed8
    if (v10 == 255) {
        // 0x8f619ee0
        // branch -> 0x8f619eec
        // 0x8f619eec
        print_log(-1, (int32_t)"Error: not a string type: %s\n", (int32_t)"<invalid>", v2, v3, str, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f619f48
        // 0x8f619f5c
        return 0;
    }
    // 0x8f619ef8
    v9 = __utag_validate(NULL, v6, a2, v4, v3, str, 0, 0, 0, 0, 0, 0, 0, g2);
    if (v9 == 0) {
        // 0x8f619f18
        print_log(-1, (int32_t)"!!! utag_validation FAIL for %s:%s\n", str2, a2, v3, str, 0, 0, 0, 0, 0, 0, 0);
        result = 0;
        // branch -> 0x8f619f48
    } else {
        // if_8f619f10_0_true
        result = a2;
        // branch -> 0x8f619f48
    }
    // 0x8f619f5c
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
// Decompilation date: 2017-08-06 08:04:47
