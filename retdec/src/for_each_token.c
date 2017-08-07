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

int32_t board_pmic_target(uint32_t a1, int32_t a2, int32_t a3);
int32_t board_soc_version(int32_t a1, int32_t a2, int32_t a3);
char * dbval_memcpy(char * a1, char * a2, int32_t a3);
int32_t dbval_read_flash_uid(char * a1, int32_t * a2, int32_t a3);
char * for_each_token(char * str, char * a2, int32_t (*a3)(int32_t), int32_t a4);
int32_t get_hw_radio(int32_t a1, int32_t a2, int32_t a3);
int32_t get_uart_setting(int32_t * a1);
int32_t get_verified_enabled(void);
int32_t gic_mask_interrupt(uint32_t a1);
void gic_platform_fiq(int32_t a1);
int32_t is_fastboot_screen(int32_t a1, int32_t a2, int32_t a3);
int32_t is_screen(char * str);
int32_t mipi_detect(int32_t a1, int32_t a2);
int32_t mipi_dsi_panel_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_get_device_blocksize(void);
int32_t mmc_get_psn(int32_t a1, int32_t a2);
char * mmc_sd_card_init(char * a1, int32_t * a2);
char * mmc_sd_set_bus_width(char * a1, int32_t * a2, int32_t a3);
int32_t mp_subb(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t platform_get_phys_to_virt_mapping(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_get_virt_to_phys_mapping(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_is_msm8929(int32_t a1, int32_t a2);
int32_t platform_is_msm8939(int32_t a1, int32_t a2);
int32_t smb1359_config_apsd(int32_t a1, int32_t a2);
int32_t smb1359_config_fastchg_current(int32_t a1, int32_t a2);
char * smem_get_ram_ptable_entry(char * a1, int32_t a2, int32_t a3);
int32_t smem_ram_ptable_init_v1(void);
int32_t unit_modular_inverse(int64_t a1);
int32_t usb_cable_is_charger(int32_t a1, int32_t a2);
int32_t utags_set_cmdline(char * a1, char * a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g17 = 0; // LR
int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g1 = -0x16d2b810; // 0x8f6554ac
int32_t g2 = 0x6d0f0703; // 0x8f67f1bd
int32_t g3 = 0x65440030; // 0x8f69c66f
int32_t g4 = 0; // 0x8f6ac068
int32_t g5 = 0; // 0x8f6ac070
int32_t g6 = -1; // 0x8f6ac1f0
int32_t g7 = -1; // 0x8f6ac1f4
int32_t g8 = -1; // 0x8f6ac200
int32_t g9 = -1; // 0x8f6ac214
int32_t g10 = 0; // 0x8f6b50a8
int32_t g11 = 0; // 0x8f6b58c0
int32_t g12 = 0; // 0x8f6b58c4
int32_t g13 = 0; // 0x8f6b58c8
int32_t g14 = 0; // 0x8f6b58d0
int32_t g15 = 0; // 0x8f6e0854
int32_t g16 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f655770 - 0x8f655803
char * for_each_token(char * str, char * a2, int32_t (*a3)(int32_t), int32_t a4) {
    char * saveptr = str; // bp-40
    int32_t v1 = (int32_t)&saveptr;
    g22 = &g16;
    g23 = (int32_t)a2;
    int32_t v2 = g16;
    g21 = v2;
    g24 = &g16;
    char * str2 = strdup(str); // 0x8f655790
    g20 = v1;
    g25 = (int32_t)str2;
    int32_t v3 = (int32_t)strtok_r(str2, (char *)g23, &saveptr); // 0x8f6557a0_7
    g18 = v3;
    // branch -> 0x8f6557a4
    while (true) {
        // 0x8f6557a4
        if (v3 == 0) {
            // 0x8f6557d4
            g22 = 0;
            // branch -> 0x8f6557d8
        } else {
            // 0x8f6557ac
            g19 = a4;
            g17 = -0x709aa84c;
            ((int32_t (*)(int32_t))(int32_t)a3)(a4);
            g20 = v1;
            g22 = g18;
            int32_t v4 = (int32_t)strtok_r(NULL, (char *)g23, &saveptr); // 0x8f6557c4_7
            g18 = v4;
            if (g22 != 0) {
                // break -> 0x8f6557d8
                break;
            }
            v3 = v4;
            // continue -> 0x8f6557a4
            continue;
        }
        // 0x8f6557d8
        free((char *)g25);
        if (v2 != g16) {
            // 0x8f6557f4
            __stack_chk_fail();
            // branch -> 0x8f6557f8
        }
        // 0x8f6557f8
        return (char *)g22;
    }
    // 0x8f6557d8
    free((char *)g25);
    if (v2 != g16) {
        // 0x8f6557f4
        __stack_chk_fail();
        // branch -> 0x8f6557f8
    }
    // 0x8f6557f8
    return (char *)g22;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// char * strdup(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:44:26
