//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_gets_constprop_16(char * a1, int32_t a2);
int32_t fastboot_notify(int32_t result, int32_t a2, int32_t a3, int32_t a4);
int32_t fboot_cmd_erase_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_build_fp(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_build_ver(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_channelid(char * a1, int32_t a2, int32_t a3);
int32_t getvar_handler_root_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_kernel_ver(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_qcom_build_id(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_ro_carrier(int32_t a1, int32_t a2);
int32_t getvar_secure(char * a1, int32_t a2, int32_t a3);
int32_t getvar_utag_str(int32_t a1, int32_t a2);
char * handle_fboot_command_getvar(int32_t a1);
int32_t is_partition_erasable(int32_t a1, int32_t a2);
int32_t read_root_status(void);
int32_t read_version(char * a1, char * a2, int32_t a3);
int32_t req_complete(int32_t result, int32_t a2, int32_t a3);
int32_t show_locked_command_restriction(int32_t a1);
int32_t type_atoi_11(char * str, int32_t a2, int32_t a3);
int32_t validate_sparse_data(int32_t a1, int32_t * a2, char * a3);
int32_t validate_sparse_filled_data_isra_3(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g12 = 0; // LR
int32_t g13 = 0; // R0
int32_t g14 = 0; // R1
int32_t g15 = 0; // R10
int32_t g16 = 0; // R11
int32_t g17 = 0; // R2
int32_t g18 = 0; // R3
int32_t g19 = 0; // R4
int32_t g20 = 0; // R5
int32_t g21 = 0; // R6
int32_t g22 = 0; // R7
int32_t g23 = 0; // R8
int32_t g24 = 0; // R9
int32_t g1 = 0x2020003a; // 0x8f686ac4
char * g2 = "\x01"; // 0x8f688c94
int32_t g3 = 0x746e6300; // 0x8f6a4e20
char * g4; // 0x8f6c0628
char * g5; // 0x8f6c0649
int32_t g6 = 0; // 0x8f6c0658
int32_t g7 = 0; // 0x8f6c0660
int32_t g8 = 0; // 0x8f6c066c
int32_t g9 = 0; // 0x8f7112f4
int32_t g10 = 0; // 0x8f711534
int32_t g11 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f62cc64 - 0x8f62ce03
int32_t __utag_gets_constprop_16(char * a1, int32_t a2) {
    // 0x8f62cc64
    int32_t v1;
    int32_t str = v1; // bp-68
    int32_t str2 = (int32_t)a1;
    int32_t v2 = g9;
    int32_t v3 = v2; // R3
    int32_t v4;
    uint32_t v5 = __utag_sizeof(NULL, str2, g17, v2, v4, v1, 0, 0, 0); // 0x8f62cc8c
    if (v5 == 0) {
        // after_if_8f62cca4_0.thread
        // branch -> 0x8f62cdb4
        // 0x8f62cdb4
        if (v5 > g17) {
            // 0x8f62cdbc
            // branch -> 0x8f62cd70
            // 0x8f62cd70
            print_log(-1, (int32_t)"!!! Cannot get utag %s: payload overflow\n", str2, v3, v4, v1, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62cdcc
        }
        // 0x8f62cdcc
        if (v2 != g9) {
            // 0x8f62cddc
            __stack_chk_fail();
            // branch -> 0x8f62cde0
        }
        // 0x8f62cde0
        return 0;
    }
    // after_if_8f62cca4_0
    if (v5 > g17) {
        // 0x8f62cdb4
        if (v5 > g17) {
            // 0x8f62cdbc
            // branch -> 0x8f62cd70
            // 0x8f62cd70
            print_log(-1, (int32_t)"!!! Cannot get utag %s: payload overflow\n", str2, v3, v4, v1, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62cdcc
        }
        // 0x8f62cdcc
        if (v2 != g9) {
            // 0x8f62cddc
            __stack_chk_fail();
            // branch -> 0x8f62cde0
        }
        // 0x8f62cde0
        return 0;
    }
    // 0x8f62ccb0
    if (__utag_read(NULL, str2, a2, v5, v4, v1, 0, 0, 0, 0, 0, 0, 0) == 0) {
        // 0x8f62cdcc
        if (v2 != g9) {
            // 0x8f62cddc
            __stack_chk_fail();
            // branch -> 0x8f62cde0
        }
        // 0x8f62cde0
        return 0;
    }
    int32_t v6 = a2 + v5; // 0x8f62cccc
    int32_t v7; // 0x8f62ccf4_0
    char * found_char_pos; // 0x8f62cd0c
    int32_t v8; // 0x8f62cd18
    char * found_char_pos2; // 0x8f62cd4c
    int32_t v9; // 0x8f62cd58
    int32_t v10; // 0x8f62cd8c
    int32_t result;
    int32_t v11; // 0x8f62cd5c
    if (*(char *)(v6 - 1) == 0) {
        // 0x8f62ccec
        v7 = &str;
        v3 = 0;
        strncpy((char *)&str, (char *)str2, 31);
        found_char_pos = strrchr((char *)&str, 58);
        v8 = type_atoi_10((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos, 58, 31, v3, v4, str, 0);
        v11 = v8;
        if (v8 == 0) {
            // 0x8f62cd24
            strlcat(v7, (int32_t)&g1, 31, v3, v4, str, 0, 0, 0, 0, 0, 0);
            strlcat(v7, (int32_t)"str", 31, v3, v4, str, 0, 0, 0, 0, 0, 0);
            found_char_pos2 = strrchr((char *)&str, 58);
            v9 = type_atoi_10((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2, 58, 31, v3, v4, str, 0);
            v11 = v9;
            // branch -> 0x8f62cd5c
        }
        // 0x8f62cd5c
        if (v11 == 255) {
            // 0x8f62cd64
            // branch -> 0x8f62cd70
            // 0x8f62cd70
            print_log(-1, (int32_t)"Error: not a string type: %s\n", (int32_t)"<invalid>", v3, v4, str, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f62cdcc
            // 0x8f62cdcc
            if (v2 != g9) {
                // 0x8f62cddc
                __stack_chk_fail();
                // branch -> 0x8f62cde0
            }
            // 0x8f62cde0
            return 0;
        }
        // 0x8f62cd7c
        v10 = __utag_validate(NULL, v7, a2, v5, v4, str, 0, 0, 0, 0, 0, 0, 0, v2);
        if (v10 == 0) {
            // 0x8f62cd9c
            print_log(-1, (int32_t)"!!! utag_validation FAIL for %s:%s\n", str2, a2, v4, str, 0, 0, 0, 0, 0, 0, 0);
            result = 0;
            // branch -> 0x8f62cdcc
        } else {
            // if_8f62cd94_0_true
            result = a2;
            // branch -> 0x8f62cdcc
        }
        // 0x8f62cdcc
        if (v2 != g9) {
            // 0x8f62cddc
            __stack_chk_fail();
            // branch -> 0x8f62cde0
        }
        // 0x8f62cde0
        return result;
    }
    // 0x8f62ccdc
    if (v5 == g17) {
        // 0x8f62cdcc
        if (v2 != g9) {
            // 0x8f62cddc
            __stack_chk_fail();
            // branch -> 0x8f62cde0
        }
        // 0x8f62cde0
        return 0;
    }
    // if_8f62cce0_0_true
    *(char *)v6 = 0;
    // branch -> 0x8f62ccec
    // 0x8f62ccec
    v7 = &str;
    v3 = 0;
    strncpy((char *)&str, (char *)str2, 31);
    found_char_pos = strrchr((char *)&str, 58);
    v8 = type_atoi_10((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos, 58, 31, v3, v4, str, 0);
    v11 = v8;
    if (v8 == 0) {
        // 0x8f62cd24
        strlcat(v7, (int32_t)&g1, 31, v3, v4, str, 0, 0, 0, 0, 0, 0);
        strlcat(v7, (int32_t)"str", 31, v3, v4, str, 0, 0, 0, 0, 0, 0);
        found_char_pos2 = strrchr((char *)&str, 58);
        v9 = type_atoi_10((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2, 58, 31, v3, v4, str, 0);
        v11 = v9;
        // branch -> 0x8f62cd5c
    }
    // 0x8f62cd5c
    if (v11 == 255) {
        // 0x8f62cd64
        // branch -> 0x8f62cd70
        // 0x8f62cd70
        print_log(-1, (int32_t)"Error: not a string type: %s\n", (int32_t)"<invalid>", v3, v4, str, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f62cdcc
        // 0x8f62cdcc
        if (v2 != g9) {
            // 0x8f62cddc
            __stack_chk_fail();
            // branch -> 0x8f62cde0
        }
        // 0x8f62cde0
        return 0;
    }
    // 0x8f62cd7c
    v10 = __utag_validate(NULL, v7, a2, v5, v4, str, 0, 0, 0, 0, 0, 0, 0, v2);
    if (v10 == 0) {
        // 0x8f62cd9c
        print_log(-1, (int32_t)"!!! utag_validation FAIL for %s:%s\n", str2, a2, v4, str, 0, 0, 0, 0, 0, 0, 0);
        result = 0;
        // branch -> 0x8f62cdcc
    } else {
        // if_8f62cd94_0_true
        result = a2;
        // branch -> 0x8f62cdcc
    }
    // 0x8f62cdcc
    if (v2 != g9) {
        // 0x8f62cddc
        __stack_chk_fail();
        // branch -> 0x8f62cde0
    }
    // 0x8f62cde0
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchrnul(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// char * strncat(char * restrict dest, const char * restrict src, size_t n);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:40:37
