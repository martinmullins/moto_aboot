//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t backlight_turn_off(int32_t a1, int32_t a2, int32_t a3);
int32_t display_draw_image_center(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_draw_image_left(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_turn_off(int32_t a1, int32_t a2);
int32_t fdt_open_into(int32_t a1, char * a2, int32_t a3);
int32_t fdt_pack(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b4dc(void);
void function_8f64b57c(char * a1, int32_t a2);
int32_t get_block_size(int32_t a1, int32_t a2, int32_t a3);
int32_t get_db_channelid_feature_flag_byte(void);
int32_t get_db_cid_feature_flag_byte(int32_t a1);
int32_t get_policy_executor(char * a1);
int32_t hab_add_verified_blocks(char * a1, int32_t a2, int32_t a3);
int32_t hab_digest(int32_t a1, char * a2, int32_t a3);
int32_t hab_hash_decision(char * a1, int32_t a2);
int32_t hab_parse_certificate(int32_t a1, char * a2, int32_t * a3, int16_t * a4, int32_t * a5);
int32_t hab_rsa_init(void);
int32_t is_battery_max17058(void);
int32_t is_bootloader_partition(char * str, int32_t a2, int32_t a3);
int32_t is_charger_bq24296(int32_t a1, int32_t a2);
int32_t pmic_write_reg(int32_t a1, uint32_t a2);
int32_t SecSetSSTState(uint32_t a1, int32_t a2);
int32_t SecWriteFuse(int32_t a1, uint32_t a2);
int32_t set_ap_panic_flag(int32_t a1);
int32_t set_reboot_bl_flag(int32_t a1);
int32_t target_disable_cont_splash_screen(int32_t a1);
int32_t target_enable_cont_splash_screen(int32_t a1);
int32_t timer_init(int32_t a1, int32_t a2);
int32_t udc_descriptor_alloc(char a1, uint32_t a2, int16_t a3);
int32_t udc_descriptor_register(int32_t * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g41 = 0; // LR
int32_t g42 = 0; // R0
int32_t g43 = 0; // R1
int32_t g44 = 0; // R10
int32_t g45 = 0; // R11
int32_t g46 = 0; // R2
int32_t g47 = 0; // R4
int32_t g48 = 0; // R5
int32_t g49 = 0; // R6
int32_t g50 = 0; // R7
int32_t g51 = 0; // R8
int32_t g52 = 0; // R9
int32_t g1 = -0x1a60cf24; // 0x8f61c060
int32_t g2 = 0; // 0x8f69eef0
char * g3 = "\x01"; // 0x8f6a84ee
int32_t g5 = 1; // 0x8f6ac0dc
int32_t g6 = 2; // 0x8f6afe0c
int32_t g7 = 2; // 0x8f6afe14
char (*g8)[5] = "sbl1"; // 0x8f6affb4
int32_t g9 = 1; // 0x8f6b0044
int32_t g10 = 0; // 0x8f6b0070
int32_t g11 = 0; // 0x8f6b7948
int32_t g12 = 0; // 0x8f6c01d0
int32_t g13 = 0; // 0x8f6c01d4
char * g14; // 0x8f6e0699
char * g15; // 0x8f6e069e
char * g16; // 0x8f6e06a7
char * g17; // 0x8f6e06a9
int32_t g18 = 0; // 0x8f6e0c38
int32_t g19 = 0; // 0x8f6e0c3c
char * g20; // 0x8f6e0c40
char * g21; // 0x8f70da99
char g22 = 0; // 0x8f70da9a
int32_t g23 = 0; // 0x8f710c28
int32_t g24 = 0; // 0x8f710c2c
int32_t g25 = 0; // 0x8f710c30
int32_t g26 = 0; // 0x8f710c34
int32_t g27 = 0; // 0x8f7112f4
int32_t g28 = 0; // 0x8f712f2c
char * g29; // 0x8f71302c
int32_t g30 = 0; // 0x8f713030
int32_t g31 = 0; // 0x8f713034
int32_t g32 = 0; // 0x8f713036
int32_t g33 = 0; // 0x8f713038
int32_t g34 = 0; // 0x8f71303c
int32_t g35 = 0; // 0x8f713040
char * g36; // 0x8f713044
int32_t g37 = 0; // 0x8f713048
int32_t g38 = 0; // 0x8f71304c
int32_t g39 = 0; // 0x8f71304e
int32_t g40 = 0; // 0x8f713050
int32_t * g4 = &g2; // 0x8f6a9eec

// ------------------------ Functions -------------------------

// Address range: 0x8f61a064 - 0x8f61a0a3
int32_t target_disable_cont_splash_screen(int32_t a1) {
    // 0x8f61a064
    g5 = 0;
    return g27;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);
// int tolower(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:48:50
