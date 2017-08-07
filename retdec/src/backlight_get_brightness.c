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

int32_t backlight_config(char * a1, int32_t a2);
int32_t backlight_get_brightness(int32_t * a1, int32_t a2);
int32_t backlight_off(int32_t a1, int32_t a2);
int32_t board_hlos_subtype(int32_t a1);
int32_t clk_get(char * str2);
int32_t clk_init(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_multiflash_disable(int32_t a1, int32_t a2);
int32_t get_verified_enabled(void);
int32_t gpio_set_dir(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_tlmm_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t init_sp_partition(char * a1, int32_t a2);
int32_t max17058_is_batt_temp_ok(void);
int32_t mcs_cert_get_rsa_public_key(char * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t mcs_ctx_init_cert(int16_t * a1);
int32_t mcs_multi_bit_length(int32_t a1, uint32_t a2);
int32_t mcs_multi_shift_right(int32_t a1, int32_t a2, uint32_t a3);
int32_t mmc_sdhci_enable_hw_reset(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_sdhci_get_wp_status(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t panel_common_init(void);
int32_t pm8x41_chgr_led_enable(int32_t a1, int32_t a2);
int32_t pm8x41_get_is_cold_boot(void);
int32_t secure_allow_console(int32_t a1, int32_t a2);
int32_t set_backlight_dev(int32_t a1, int32_t a2, int32_t a3);
int32_t set_logger_capacity(int32_t a1, int32_t a2);
int32_t set_logger_ops(int32_t a1, int32_t * a2);
int32_t set_restart_reason(int32_t a1);
int32_t show_locked_command_restriction(int32_t a1);
int32_t sp_init(void);
int32_t udc_endpoint_alloc(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_endpoint_free(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g32 = 0; // LR
int32_t g33 = 0; // R0
int32_t g34 = 0; // R1
int32_t g35 = 0; // R2
int32_t g36 = 0; // R3
int32_t g37 = 0; // R4
int32_t g38 = 0; // R5
int32_t g39 = 0; // R6
int32_t g40 = 0; // R7
int32_t g41 = 0; // R8
int32_t g1 = 0x10001; // 0x8f6ac04c
int32_t g2 = 1; // 0x8f6ac0a8
int32_t g3 = -1; // 0x8f6ac1f0
int32_t g4 = -1; // 0x8f6ac214
int32_t g5 = 768; // 0x8f6acab7
char * g6 = "\x03"; // 0x8f6acab8
int32_t g7 = 0xffff; // 0x8f6acae4
int32_t g8 = 0xffff; // 0x8f6acaec
int32_t g9 = 0xffff; // 0x8f6acb2c
int32_t g10 = 0xffff; // 0x8f6acb6c
int32_t g11; // 0x8f6afe74
char * g12; // 0x8f6b7d40
char g13 = 0; // 0x8f6b7d41
int32_t g14 = 0; // 0x8f6b8ad0
int32_t g15 = 0; // 0x8f6b8ad4
int32_t g16 = 0; // 0x8f6e0a88
int32_t g17 = 0; // 0x8f6e0b4c
int32_t g18 = 0; // 0x8f6e0b54
int32_t g19 = 0; // 0x8f710c40
int32_t g20 = 0; // 0x8f710c44
char * g21; // 0x8f710c48
char * g22; // 0x8f710c50
int32_t g23 = 0; // 0x8f710c60
int32_t g24 = 0; // 0x8f710c64
char g25 = 0; // 0x8f710c68
char * g26; // 0x8f710c70
int32_t g27 = 0; // 0x8f710e70
char * g28; // 0x8f710e74
int32_t g29 = 0; // 0x8f710e78
int32_t g30 = 0; // 0x8f710e7c
int32_t g31 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f63f870 - 0x8f63f8d3
int32_t backlight_get_brightness(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g33 = v1;
    g34 = a2;
    g38 = v1;
    g35 = &g31;
    int32_t v2 = g31;
    g37 = &g31;
    int32_t v3 = g16;
    int32_t v4 = v2;
    int32_t result = -1;
    if (v3 != 0) {
        int32_t v5 = *(int32_t *)(v3 + 32); // 0x8f63f898
        g36 = v5;
        g32 = -0x709c0760;
        ((int32_t (*)(int32_t))v5)(v5);
        *(int32_t *)g38 = v1;
        v4 = g31;
        result = 0;
        // branch -> 0x8f63f8b0
    }
    // 0x8f63f8b0
    if (v2 != v4) {
        // 0x8f63f8c0
        __stack_chk_fail();
        // branch -> 0x8f63f8c4
    }
    // 0x8f63f8c4
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:46:49
