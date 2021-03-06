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

// Address range: 0x8f62d21c - 0x8f62d307
int32_t read_root_status(void) {
    char v1 = *(char *)&g5; // 0x8f62d22c
    int32_t v2 = v1; // 0x8f62d22c
    int32_t v3 = g9;
    if (v1 != 0) {
        // 0x8f62d2d8
        if (v3 != g9) {
            // 0x8f62d2ec
            __stack_chk_fail();
            // branch -> 0x8f62d2f0
        }
        // 0x8f62d2f0
        return (int32_t)&g4;
    }
    // 0x8f62d244
    memset((char *)&g4, v2, 33);
    int32_t v4;
    int32_t v5 = &v4; // 0x8f62d25c_0
    memset((char *)&v4, v2, 512);
    int32_t v6;
    char * v7 = get_partition_by_name((int32_t)"misc", v2, 512, (int32_t)&g9, v6, v4, 0, 0, 0, 0, 0); // 0x8f62d268
    int32_t v8 = (int32_t)v7; // 0x8f62d268_12
    if (v7 == NULL) {
        // 0x8f62d2d8
        if (v3 != g9) {
            // 0x8f62d2ec
            __stack_chk_fail();
            // branch -> 0x8f62d2f0
        }
        // 0x8f62d2f0
        return (int32_t)&g4;
    }
    char v9 = *(char *)(v8 + 33); // 0x8f62d274
    char v10 = *(char *)(v8 + 32); // 0x8f62d278
    char v11 = *(char *)(v8 + 34); // 0x8f62d280
    int32_t v12 = 0x10000 * (int32_t)v11 | (int32_t)v10 | 256 * (int32_t)v9; // 0x8f62d288
    int32_t v13 = 0x1000000 * (int32_t)*(char *)(v8 + 35); // 0x8f62d28c
    int32_t v14 = v12 | v13; // 0x8f62d28c
    if (v12 != v13) {
        // 0x8f62d294
        if (generic_mmc_read_sector(v14 + 10, 1, v5, v12, v6, v4, 0, 0, 0, 0) == 0) {
            // 0x8f62d2ac
            *(char *)(int32_t)&g5 = 1;
            int32_t v15;
            uint32_t v16 = (v15 + 255) % 256; // 0x8f62d2bc
            if (v16 <= 253) {
                // 0x8f62d2c8
                strlcpy((int32_t)&g4, (int32_t)&v15, 33, v16, v6);
                // branch -> 0x8f62d2d8
            }
            // 0x8f62d2d8
            if (v3 != g9) {
                // 0x8f62d2ec
                __stack_chk_fail();
                // branch -> 0x8f62d2f0
            }
            // 0x8f62d2f0
            return (int32_t)&g4;
        }
    }
    // 0x8f62d2d8
    if (v3 != g9) {
        // 0x8f62d2ec
        __stack_chk_fail();
        // branch -> 0x8f62d2f0
    }
    // 0x8f62d2f0
    return (int32_t)&g4;
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
