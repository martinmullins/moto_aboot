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

int32_t __aeabi_unwind_cpp_pr0(int32_t a1, int32_t a2, int32_t a3);
int32_t cache_state_to_sp(void);
int32_t function_8f64ac84(int32_t a1, int32_t result, int32_t a3);
int32_t gcd(void);
int32_t get_bar_length(int32_t a1, char * str);
int32_t get_battery_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
char * get_hw_id_by_rev(char * a1, int32_t a2);
int32_t get_line_width(int32_t a1, int32_t a2, int32_t a3);
char * get_partition_by_name(char * a1);
int32_t get_product_id_by_name(char * a1, int32_t a2);
int32_t hab_health_state_check(int32_t a1, int32_t a2);
int32_t hab_sahara_operation(int32_t * a1);
int32_t handle_fboot_command_reboot_bl(int32_t a1, int32_t a2);
int32_t init_gpt(void);
int32_t is_kung_pow_enabled(int32_t a1);
int32_t is_moto_hab_signed(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t lcm(int32_t a1, int32_t a2, int32_t a3);
int32_t mbm_fdt_get_int(int32_t a1, int32_t a2, int32_t a3);
int32_t mbm_fdt_get_variant(int32_t a1);
int32_t mdss_dsi_host_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_dsi_panel_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_phy_contention_detection(int32_t a1, int32_t a2);
int32_t mdss_dsi_v2_phy_init(int32_t a1, int32_t a2);
int32_t panel_power_off(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t partition_get_index(int32_t a1, int32_t a2);
int32_t platform_init(int32_t a1, int32_t a2);
int32_t platform_uninit(char * a1, int32_t a2, int32_t a3);
int32_t reboot_bootloader(int32_t a1, int32_t a2, int32_t a3);
int32_t set_power_supply_list(int32_t a1, int32_t a2, int32_t a3);
int32_t uninit_gpt(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g33 = 0; // LR
int32_t g34 = 0; // R0
int32_t g35 = 0; // R1
int32_t g36 = 0; // R10
int32_t g37 = 0; // R2
int32_t g38 = 0; // R4
int32_t g39 = 0; // R5
int32_t g40 = 0; // R6
int32_t g41 = 0; // R7
int32_t g42 = 0; // R8
int32_t g43 = 0; // R9
char * g1; // 0x8f623ee8
int32_t g2 = -0x1a60cf68; // 0x8f6754d4
int32_t g3 = 0x6d0f0703; // 0x8f67f558
char * g4 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g5 = -1; // 0x8f6ac0d0
int32_t g6 = -1; // 0x8f6ac0d8
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = -1; // 0x8f6ac1ec
int32_t g9 = -1; // 0x8f6ac214
int32_t g10 = 3; // 0x8f6afe18
int32_t g11 = 1; // 0x8f6b0044
int32_t g12 = 0; // 0x8f6b8c94
char * g13; // 0x8f6e06a0
char * g14; // 0x8f6e06a6
char * g15; // 0x8f6e06ab
int32_t g16 = 0; // 0x8f6e130c
int32_t g17 = 0; // 0x8f6e1310
char * g18; // 0x8f6e1318
char * g19; // 0x8f6e131c
char * g20; // 0x8f6e1320
char * g21; // 0x8f6e1328
char * g22; // 0x8f6e1400
char g23 = 0; // 0x8f6e15c2
int32_t g24 = 0; // 0x8f6e5800
char * g25; // 0x8f6e9400
char * g26; // 0x8f6e9600
int32_t g27 = 0; // 0x8f6ed600
int32_t g28 = 0; // 0x8f70f825
int32_t g29 = 0; // 0x8f7112f4
int32_t g30 = 0; // 0x8f7112fc
int32_t g31 = 0; // 0x8f711374
int32_t g32 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f6513b4 - 0x8f6513ef
int32_t get_line_width(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f6513b4
    return g10;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void free(void * ptr);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:16:19
