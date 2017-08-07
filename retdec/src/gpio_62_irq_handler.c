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

int32_t _dputs(int32_t a1, int32_t a2, int32_t a3);
int32_t _dvprintf(char * format);
int32_t clear_flash_fail(int32_t a1, int32_t a2);
char * display_sw_version(void);
int32_t flash_sparse_data(char * a1, int64_t a2, int32_t a3, int32_t a4, uint32_t a5, uint32_t a6);
void function_8f67b3c0(int32_t a1);
int32_t get_backup_partition(void);
int32_t get_line_number(char * a1, int32_t a2, int32_t a3);
int32_t get_panel_ver(int32_t a1, int32_t * a2);
int32_t gpio_62_irq_handler(int32_t (*a1)(), int32_t a2);
int32_t gpio_set_intr_cfg_type(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_command_download(int32_t * a1);
int32_t is_always_on(char * a1, int32_t a2, int32_t a3);
int32_t load_partition_by_name(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t lp8556_read_reg(int32_t a1, int32_t a2);
int32_t lp8556_write_reg(int32_t a1, int32_t a2);
int32_t max17042_get_battery_temperature(void);
int32_t max17042_get_temp_thresholds(char * a1, int32_t a2, int32_t a3);
int32_t mcs_clear_rng_ctx(int32_t a1, int32_t a2);
int32_t mcs_mp_compare(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_mp_copy(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_return_rng_data(char * a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_panel_identify(int32_t a1);
int32_t set_flash_fail(void);
int32_t set_logger_max_log_len(int32_t a1, int32_t a2);
int32_t set_logger_status(int32_t a1, char a2);
int32_t smb1359_config_aicl(int32_t a1);
int32_t smb1359_is_hvdcp(int32_t a1);
int32_t store_partition(int32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t validate_gpt_partition(char * a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g30 = 0; // LR
int32_t g31 = 0; // R0
int32_t g32 = 0; // R1
int32_t g33 = 0; // R10
int32_t g34 = 0; // R11
int32_t g35 = 0; // R2
int32_t g36 = 0; // R3
int32_t g37 = 0; // R4
int32_t g38 = 0; // R5
int32_t g39 = 0; // R6
int32_t g40 = 0; // R7
int32_t g41 = 0; // R8
int32_t g42 = 0; // R9
int32_t g1 = 1; // 0x8f69c7cc
char * g2; // 0x8f6a4e20
int32_t g3; // 0x8f6afe74
char (*g4)[5] = "sbl1"; // 0x8f6affb4
int32_t g5 = 0; // 0x8f6e0a98
int32_t g6 = 0; // 0x8f6e0b38
int32_t g7 = 0; // 0x8f6e0b48
int32_t g8 = 0; // 0x8f70f7a5
int32_t g9 = 0; // 0x8f70f7c5
int32_t g10 = 0; // 0x8f70f7c6
int32_t g11 = 0; // 0x8f70f7c7
int32_t g12 = 0; // 0x8f70f7c8
int32_t g13 = 0; // 0x8f70f7c9
int32_t g14 = 0; // 0x8f70f7ca
int32_t g15 = 0; // 0x8f70f7cb
int32_t g16 = 0; // 0x8f70f7cc
int32_t g17 = 0; // 0x8f70f7cd
int32_t g18 = 0; // 0x8f70f7ce
int32_t g19 = 0; // 0x8f70f7cf
int32_t g20 = 0; // 0x8f70f7d0
int32_t g21 = 0; // 0x8f70f7d1
int32_t g22 = 0; // 0x8f70f7d2
int32_t g23 = 0; // 0x8f70f7d3
int32_t g24 = 0; // 0x8f70f7d4
char g25 = 0; // 0x8f70f7d5
char g26 = 0; // 0x8f70f7d6
char * g27; // 0x8f70f7dd
int32_t g28 = 0; // 0x8f7112f4
int32_t g29 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f602dd0 - 0x8f602e13
int32_t gpio_62_irq_handler(int32_t (*a1)(), int32_t a2) {
    // 0x8f602dd0
    g31 = (int32_t)a1;
    g32 = a2;
    g36 = &g28;
    int32_t v1 = g28;
    g35 = v1;
    g37 = &g28;
    int32_t v2 = v1;
    if (a1 != NULL) {
        // 0x8f602dec
        g30 = -0x709fd210;
        a1();
        v2 = g28;
        // branch -> 0x8f602df0
    }
    // 0x8f602df0
    if (v1 != v2) {
        // 0x8f602e04
        __stack_chk_fail();
        // branch -> 0x8f602e08
    }
    // 0x8f602e08
    return 0;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:18:51
