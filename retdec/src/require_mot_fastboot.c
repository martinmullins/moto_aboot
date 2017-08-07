//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t cmd_flash_mmc_cid_prov_img(int32_t a1, int32_t a2);
int32_t fastboot_handler(int32_t a1, int32_t a2);
int32_t fboot_info(char * str, char * format, int32_t a3, int32_t a4);
int32_t flash_sparse_data(char * a1, int64_t a2, int32_t a3, int32_t a4, uint32_t a5, uint32_t a6);
int32_t gpt_notifier(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_command_boot(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t oem_backlight_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_display_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_led_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_logo_usage(int32_t a1);
int32_t oem_pmic_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_regex_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_test_sp_usage(int32_t a1);
int32_t oem_usb_tune_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_wptest_usage(int32_t a1);
int32_t on_confirm_timeout(int32_t a1, int32_t a2, char * a3);
int32_t print_bs_line(int32_t * a1, int32_t a2, int32_t a3);
int32_t require_mot_fastboot(int32_t a1, int32_t a2, int32_t a3);
int32_t uh_oh_not_for_sdd(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g23 = 0; // LR
int32_t g24 = 0; // R0
int32_t g25 = 0; // R10
int32_t g26 = 0; // R11
int32_t g27 = 0; // R2
int32_t g28 = 0; // R3
int32_t g29 = 0; // R4
int32_t g30 = 0; // R5
int32_t g31 = 0; // R6
int32_t g32 = 0; // R7
int32_t g33 = 0; // R8
int32_t g34 = 0; // R9
int32_t g1 = -0x16d2bf10; // 0x8f621a7c
int32_t g2 = -0x16d2bf09; // 0x8f622f94
int32_t g3 = -0x16d2bc10; // 0x8f623c30
int32_t g4 = -0x16d2bf8d; // 0x8f623db0
int32_t g5 = -0x16d2b010; // 0x8f62d370
int32_t g6 = -0x16d2bfed; // 0x8f638714
int32_t g7 = -0x16d2bc09; // 0x8f638ab0
int32_t g9 = 0x746e6300; // 0x8f6a4e20
int32_t g10 = -0x709c73f8; // 0x8f6ac374
int32_t g11 = 0; // 0x8f6c0390
int32_t g12 = 0; // 0x8f6c0398
int32_t g13 = 0; // 0x8f6c03d0
int32_t g14 = 0; // 0x8f7112f4
int32_t g15 = 0; // 0x8f7114f4
int32_t g16 = 0; // 0x8f7114f8
int32_t g17 = 0; // 0x8f7114fc
int32_t g18 = 0; // 0x8f711508
int32_t g19 = 0; // 0x8f71150c
int32_t g20 = 0; // 0x8f711510
int32_t g21 = 0; // 0x8f711534
int32_t g22 = 0; // 0x8f7125ec
char * g8[11] = {
    "download",
    (char *)&g1,
    "flash",
    (char *)&g2,
    "multiflash",
    (char *)&g3,
    "getvar",
    (char *)&g5,
    "erase",
    (char *)&g4,
    "boot"
}; // 0x8f68422c

// ------------------------ Functions -------------------------

// Address range: 0x8f624814 - 0x8f624867
int32_t require_mot_fastboot(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g29; // 0x8f624814
    g29 = &g14;
    int32_t v2 = g14;
    int32_t result = fboot_info("INFO", "Latest Motorola fastboot required, download from: http://goo.gl/Qyzg2L", a3, v2); // 0x8f62482c
    if (v2 != g14) {
        // 0x8f624840
        __stack_chk_fail();
        return result;
    }
    // 0x8f624844
    g29 = v1;
    return fboot_info("INFO", (char *)&g9, v2, v2);
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// int isspace(int c);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 19
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:36:16
