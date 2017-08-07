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

int32_t check_reboot_mode(char * a1, int32_t a2, int32_t a3);
int32_t cmd_flash_mmc_sparse_img(int32_t a1, int32_t a2);
int32_t current_abs_time(void);
int32_t dbval_free(char * a1, int32_t a2, int32_t a3);
char * dbval_malloc(char * size);
void function_8f67b584(void);
int32_t get_char_array_prop(char a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_code128(int32_t a1, int32_t a2, int32_t a3);
int32_t get_current_boot_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t get_entry_index(void);
int32_t get_partition_by_index(uint32_t a1, int32_t a2);
int32_t get_product_name(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_command_flash(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t is_like_hab_signature(char * a1, int32_t a2, int32_t a3);
int32_t is_most_like_hab_image(int32_t a1, int32_t a2, int32_t a3);
int32_t max17050_get_battery_capacity(int32_t a1, int32_t a2);
int32_t max17050_get_battery_voltage(int32_t a1, int32_t a2);
int32_t mcs_DER_advanceBuffer(int32_t a1, int16_t * a2, int16_t a3);
int32_t mcs_DER_decodeRaw(int32_t a1, int16_t a2, int32_t a3);
int32_t mcs_multi_convert_from_multi_digit_byte_len(int32_t * a1, int32_t a2, uint32_t a3);
int32_t mcs_multi_convert_to_multi_digit_byte_len(int32_t a1, int32_t * a2, uint32_t a3);
int32_t mp_compare(int32_t a1, int32_t a2, int32_t a3);
int32_t mp_subb(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t partition_get_offset(uint32_t a1, int32_t a2);
int32_t partition_get_size(uint32_t a1, int32_t a2);
int32_t qtimer_current_time(int32_t a1);
int32_t reboot_device(char * a1);
int32_t set_current_boot_mode(char a1, int32_t a2, int32_t a3);
int32_t set_line_width(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g15 = 0; // LR
int32_t g16 = 0; // R0
int32_t g17 = 0; // R1
int32_t g18 = 0; // R10
int32_t g19 = 0; // R11
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g27 = 0; // R9
int32_t g1 = -0x1201f230; // 0x8f68ac00
int32_t g2 = 0x66c06cc; // 0x8f6a28d8
char * g3 = "\n"; // 0x8f6ac1b0
int32_t g4 = -1; // 0x8f6ac214
int32_t g5 = 3; // 0x8f6afe18
int32_t g6 = 0; // 0x8f6b8abc
int32_t g7 = 0; // 0x8f6b8af0
char * g8; // 0x8f6b8af4
char * g9; // 0x8f6c03bc
int32_t g10 = 0; // 0x8f6e0b48
int32_t g11 = 0; // 0x8f6e1310
int32_t g12 = 0; // 0x8f6e1318
int32_t g13 = 0; // 0x8f7112f4
char * g14; // 0x8f7114b0

// ------------------------ Functions -------------------------

// Address range: 0x8f653a28 - 0x8f653b1f
int32_t partition_get_size(uint32_t a1, int32_t a2) {
    int32_t v1 = g13;
    int32_t result; // 0x8f653b10_2
    int32_t v2;
    if (a1 == -1 || g11 > a1) {
        // 0x8f653af0
        g16 = 0;
        v2 = v1;
        // branch -> 0x8f653af8
        // 0x8f653af8
        g17 = 0;
        g20 = v1;
        g21 = v2;
        if (v1 != v2) {
            // 0x8f653b08
            __stack_chk_fail();
            result = g16;
            // branch -> 0x8f653b0c
        } else {
            result = 0;
        }
        // 0x8f653b0c
        return result;
    }
    int32_t v3 = g12 + 128 * a1; // 0x8f653a5c
    char v4 = *(char *)(v3 + 41); // 0x8f653a60
    char v5 = *(char *)(v3 + 40); // 0x8f653a64
    char v6 = *(char *)(v3 + 33); // 0x8f653a68
    char v7 = *(char *)(v3 + 42); // 0x8f653a70
    char v8 = *(char *)(v3 + 43); // 0x8f653a78
    int32_t v9 = 0x1000000 * (int32_t)v8 | 0x10000 * (int32_t)v7 | (int32_t)v5 | 256 * (int32_t)v4; // 0x8f653a7c
    char v10 = *(char *)(v3 + 45); // 0x8f653a80
    char v11 = *(char *)(v3 + 44); // 0x8f653a84
    uint32_t v12 = v9 + 1; // 0x8f653a88
    char v13 = *(char *)(v3 + 46); // 0x8f653a90
    char v14 = *(char *)(v3 + 47); // 0x8f653a98
    char v15 = *(char *)(v3 + 32); // 0x8f653aa0
    char v16 = *(char *)(v3 + 34); // 0x8f653aac
    char v17 = *(char *)(v3 + 35); // 0x8f653ab4
    uint32_t v18 = 0x1000000 * (int32_t)v17 | 0x10000 * (int32_t)v16 | (int32_t)v15 | 256 * (int32_t)v6; // 0x8f653ab8
    char v19 = *(char *)(v3 + 37); // 0x8f653abc
    char v20 = *(char *)(v3 + 36); // 0x8f653ac0
    char v21 = *(char *)(v3 + 38); // 0x8f653ac8
    char v22 = *(char *)(v3 + 39); // 0x8f653acc
    uint32_t v23 = v12 - v18; // 0x8f653ad8
    int32_t v24 = 512 * v23; // 0x8f653ae4
    g16 = v24;
    int32_t v25 = 512 * ((0x1000000 * (int32_t)v14 | 0x10000 * (int32_t)v13 | (int32_t)v11 | 256 * (int32_t)v10) + (int32_t)(v9 == -1) - (0x10000 * (int32_t)v21 | (int32_t)v20 | 256 * (int32_t)v19 | 0x1000000 * (int32_t)v22) + (int32_t)(v12 < v18)) | v23 / 0x800000; // 0x8f653ae8
    v2 = g13;
    // branch -> 0x8f653af8
    // 0x8f653af8
    g17 = v25;
    g20 = v1;
    g21 = v2;
    if (v1 != v2) {
        // 0x8f653b08
        __stack_chk_fail();
        result = g16;
        // branch -> 0x8f653b0c
    } else {
        result = v24;
    }
    // 0x8f653b0c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:23:08
