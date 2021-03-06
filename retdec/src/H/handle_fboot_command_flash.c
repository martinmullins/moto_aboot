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

// Address range: 0x8f622f94 - 0x8f62308b
int32_t handle_fboot_command_flash(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g22; // 0x8f622f94
    int32_t v3 = g23; // 0x8f622f94
    int32_t v4 = g24; // 0x8f622f94
    int32_t v5 = g25; // 0x8f622f94
    int32_t v6 = g15; // 0x8f622f94
    int32_t v7 = *a1; // R4
    int32_t v8 = g13;
    int32_t str = *(int32_t *)(v1 + 12) + 1; // 0x8f622fa8
    int32_t v9 = *(int32_t *)(v1 + 8); // R6
    int32_t strcmp_rc = strcmp((char *)str, "motoboot"); // 0x8f622fbc
    if (strcmp_rc == 0) {
        // 0x8f622fc8
        if (v8 == g13) {
            // 0x8f622fd8
            return cmd_flash_mmc_motoboot_img(v7, v9, v8, v8, v2, v3, v4, v5, v6, a5, a6, a7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        // 0x8f623064
        __stack_chk_fail();
        return strcmp_rc;
    }
    int32_t strcmp_rc2 = strcmp((char *)str, "cid_prov"); // 0x8f622ff4
    if (strcmp_rc2 == 0) {
        // 0x8f623000
        if (v8 == g13) {
            // 0x8f623010
            return cmd_flash_mmc_cid_prov_img(v7, v9, v8, v8, v2, v3, v4, v5, v6, a5, a6, a7, 0);
        }
        // 0x8f623064
        __stack_chk_fail();
        return strcmp_rc2;
    }
    int32_t result = is_sparse_image(v7, (int32_t)"cid_prov", a3, v8); // 0x8f623028
    int32_t v10 = g13;
    if (result == 0) {
        // 0x8f62303c
        if (v8 == v10) {
            // 0x8f623044
            return cmd_flash_mmc_img(str, v7, v9, v8, v2, v3, v4, v5, v6, a5, a6);
        }
    } else {
        // 0x8f62305c
        if (v8 == v10) {
            // 0x8f623068
            g20 = v9;
            g22 = v2;
            g23 = v3;
            g24 = v4;
            g25 = v5;
            g15 = v6;
            return cmd_flash_mmc_sparse_img(str, v7);
        }
    }
    // 0x8f623064
    __stack_chk_fail();
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
