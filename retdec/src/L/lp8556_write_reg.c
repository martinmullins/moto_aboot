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
#include <time.h>

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int32_t __utag_delete(int32_t a1, int32_t a2, int32_t a3);
int32_t __utags_clear(int32_t a1, int32_t a2);
int32_t backlight_config(char * a1, int32_t a2);
int32_t backlight_set_brightness_level(int32_t a1);
int32_t display_get_char_count_per_line(int32_t a1, int32_t a2);
int32_t display_get_logo_size(int32_t a1, int32_t a2);
int32_t display_get_screen_depth(int32_t a1, int32_t a2);
int32_t display_get_total_lines(int32_t a1, int32_t a2);
int32_t fboot_ack(char * str, char * format, int32_t a3);
int32_t fdt_move(char * a1, char * a2, int32_t a3);
int32_t fdt_next_node(int32_t a1, uint32_t a2);
void function_8f6787c8(void);
int32_t hab_code_hash_verification(uint32_t a1, int32_t a2, char * a3);
int32_t hab_write_to_register(int32_t a1, char * a2, int16_t * a3);
int32_t handle_fboot_command_reboot(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_prod_fuse(int32_t a1, int32_t a2);
int32_t is_backup_needed(int32_t a1, int32_t a2, int32_t a3);
int32_t is_moto_hab_signed(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t lp8556_write_reg(int32_t a1, int32_t a2);
int32_t mcs_array_bit_length(int32_t a1, int32_t a2);
int32_t mcs_array_factor_bit_length(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_DER_fieldLengths(int32_t a1, int16_t * a2);
int32_t mcs_DER_locate(int16_t a1, int16_t * a2, int32_t a3, int32_t a4);
char * mmc_put_card_to_sleep(char * a1);
int32_t names_match(int32_t a1, int32_t a2);
int32_t oem_lp8556(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_pmic(int32_t a1, int32_t a2, int32_t a3);
int32_t sdhci_mode_disable(int32_t a1);
char * sdhci_msm_execute_tuning(char * a1, int32_t a2, int32_t a3);
int32_t ufs_write(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g19 = 0; // LR
int32_t g20 = 0; // R1
int32_t g21 = 0; // R10
int32_t g22 = 0; // R11
int32_t g23 = 0; // R2
int32_t g24 = 0; // R3
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
int32_t g30 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f61c43c
int32_t g2 = -0x16d2bfed; // 0x8f61c478
int32_t g3 = -0x16d2bf10; // 0x8f61c4ac
int32_t g4 = -0x16d2bff0; // 0x8f61c534
int32_t g5 = -0x1a60cf20; // 0x8f61c5a8
int32_t g6 = -0x1a60cf68; // 0x8f6754d4
char * g7 = "\xff\xff"; // 0x8f67d950
int32_t g8 = 0xff0fff; // 0x8f67db7c
int32_t g9 = 1; // 0x8f6ac0f0
int32_t g10 = 100; // 0x8f6aca78
int32_t g11 = 1; // 0x8f6b0044
int32_t g12 = 0; // 0x8f6e0a98
int32_t g13 = 0; // 0x8f6e0c38
char * g14; // 0x8f70e724
int32_t g15 = 0; // 0x8f70f825
char * g16; // 0x8f70fa25
char * g17; // 0x8f710eb4
int32_t g18 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f640c14 - 0x8f640c7f
int32_t lp8556_write_reg(int32_t a1, int32_t a2) {
    int32_t v1 = g18;
    int32_t v2 = g12; // R0
    int32_t v3; // 0x8f640c74_22
    if (g12 == 0) {
        // 0x8f640c58
        v2 = -3;
        v3 = -3;
        // branch -> 0x8f640c5c
    } else {
        // 0x8f640c40
        int32_t v4;
        qup_i2c_write_byte(g12, 44, a1, a2, a1, v1, g25, g19, v4, 0, 0);
        int32_t v5 = v2; // 0x8f640c48
        int32_t v6 = v5; // 0x8f640c74_23
        if (v5 > -1) {
            // if_8f640c4c_0_true
            v2 = 0;
            v6 = 0;
            // branch -> after_if_8f640c4c_0
        }
        // after_if_8f640c4c_0
        if (v5 < 0) {
            // if_8f640c50_0_true
            v2 = -20;
            v3 = -20;
            // branch -> 0x8f640c5c
        } else {
            v3 = v6;
        }
    }
    // 0x8f640c5c
    int32_t result; // 0x8f640c74_2
    if (v1 != g18) {
        // 0x8f640c6c
        __stack_chk_fail();
        result = v2;
        // branch -> 0x8f640c70
    } else {
        result = v3;
    }
    // 0x8f640c70
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * asctime_r(const struct tm * restrict tp, char * restrict buf);
// long int atol(const char * nptr);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:08:29
