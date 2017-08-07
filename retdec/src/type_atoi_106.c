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

int32_t __find_first_utag(int32_t a1, int32_t a2);
int32_t __utag_delete(int32_t a1, int32_t a2, int32_t a3);
int32_t __utag_gets_107(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t __utags_init(int32_t a1, int32_t a2, int32_t a3);
int32_t board_hardware_id(int32_t a1, int32_t a2, int32_t a3);
int32_t board_hardware_subtype(int32_t a1, int32_t a2, int32_t a3);
int32_t disable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t enable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t flash_utags(void);
int32_t free_tags(char * a1, int32_t a2);
void function_8f64aa3c(void);
void function_8f64aa80(char * str, char * format, int32_t a3, int32_t a4);
int32_t get_utags(int32_t a1, int32_t a2);
int32_t get_utags_name(int32_t a1, int32_t a2);
int32_t mcs_X509Certificate_getSignature(int32_t a1, int32_t * a2);
int32_t mcs_X509Certificate_getSubjectPublicKey(int32_t a1);
int32_t names_match(int32_t a1, int32_t a2);
int32_t on_utag_change(int32_t a1, int32_t a2);
int32_t sdhci_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t sdhci_int_handler(int32_t * a1, int32_t a2);
int32_t thaw_partition_isra_3(int32_t * a1, int32_t a2);
int32_t type_atoi_106(char * str, int32_t a2);

// --------------------- Global Variables ---------------------

bool g8 = false; // LR
int32_t g9 = 0; // R0
int32_t g10 = 0; // R1
int32_t g11 = 0; // R2
int32_t g12 = 0; // R3
int32_t g13 = 0; // R4
int32_t g14 = 0; // R5
int32_t g15 = 0; // R6
int32_t g16 = 0; // R7
int32_t g17 = 0; // R8
int32_t g18 = 0; // R9
int32_t g1 = -0x1a60cfc8; // 0x8f602dd0
int32_t g2 = 0x2020003a; // 0x8f686ac4
int32_t g3 = 0; // 0x8f6ac074
int32_t g4 = 0; // 0x8f6ac078
int32_t g5 = 1; // 0x8f6ac0f0
char * g6[3] = {
    "config",
    "utags",
    "utagsBackup"
}; // 0x8f6b009c
int32_t g7 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f678d14 - 0x8f678e17
int32_t type_atoi_106(char * str, int32_t a2) {
    int32_t str2 = (int32_t)str; // 0x8f678d14_0
    int32_t v1 = g7;
    int32_t v2;
    if (str == NULL) {
        // 0x8f678dd8
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return str2;
    }
    // 0x8f678d30
    if (strcmp(str, "bool") == 0) {
        // if_8f678d3c_0_true
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return 1;
    }
    // 0x8f678d44
    if (strcmp((char *)str2, "str") == 0) {
        // if_8f678d54_0_true
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return 2;
    }
    // 0x8f678d5c
    if (strcmp((char *)str2, "char") == 0) {
        // if_8f678d6c_0_true
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return 3;
    }
    // 0x8f678d74
    if (strcmp((char *)str2, "long") == 0) {
        // if_8f678d84_0_true
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return 4;
    }
    // 0x8f678d8c
    if (strcmp((char *)str2, "ulong") == 0) {
        // if_8f678d9c_0_true
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return 5;
    }
    // 0x8f678da4
    if (strcmp((char *)str2, "llong") == 0) {
        // if_8f678db4_0_true
        // branch -> 0x8f678ddc
        // 0x8f678ddc
        v2 = g7;
        g12 = v2;
        if (v1 != v2) {
            // 0x8f678dec
            __stack_chk_fail();
            // branch -> 0x8f678df0
        }
        // 0x8f678df0
        return 6;
    }
    // 0x8f678dbc
    int32_t v3; // R0
    int32_t v4; // 0x8f678df4_28
    if (strcmp((char *)str2, "ullong") == 0) {
        // if_8f678dd0_0_true
        v3 = 7;
        v4 = 7;
        // branch -> 0x8f678ddc
    } else {
        // if_8f678dcc_0_true
        v3 = 255;
        v4 = 255;
        // branch -> 0x8f678ddc
    }
    // 0x8f678ddc
    v2 = g7;
    g12 = v2;
    int32_t result; // 0x8f678df4_2
    if (v1 != v2) {
        // 0x8f678dec
        __stack_chk_fail();
        result = v3;
        // branch -> 0x8f678df0
    } else {
        result = v4;
    }
    // 0x8f678df0
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);
// int vsprintf(char * restrict s, const char * restrict format, _G_va_list arg);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:23
