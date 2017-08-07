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

int32_t backlight_get_brightness(int32_t * a1, int32_t a2);
int32_t backlight_set_brightness(int32_t a1, int32_t a2);
char * cid_verify_sig(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dsi_cmd_dma_trigger_for_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_multiflash_disable(int32_t a1, int32_t a2);
int32_t fboot_cmd_multiflash_post_validate(int32_t a1, int32_t a2, int32_t a3);
void function_8f64a234(void);
void function_8f64a270(int32_t a1, int32_t a2, int32_t a3);
void function_8f67bb18(void);
int32_t get_db_cid(void);
int32_t get_primary_gpt_partition(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_oem_command_get_unlock_data(void);
int32_t mcs_DER_decodeBitString(int32_t a1, uint32_t a2, int32_t a3);
int32_t mcs_DER_decodeInteger(int32_t a1, uint16_t a2, int32_t a3);
int32_t mcs_X509Certificate_finalize(int32_t a1, int32_t a2);
int32_t mcs_X509Certificate_initialize(int16_t * a1, int32_t a2);
int32_t mdss_dual_dsi_cmd_dma_trigger_for_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_enable_hw_reset(void);
int32_t mmc_get_wp_group_size(int32_t a1);
int32_t mot_sst_pal_gen_aes_cmac(char * a1, int32_t a2, int32_t a3);
int32_t ptn_stat(char * a1, int32_t * a2, int32_t * a3, int32_t * a4);
int32_t qtimer_get_phy_timer_cnt(void);
int32_t qtimer_set_physical_timer(int32_t a1, int32_t a2, int32_t a3);
int32_t rtc_alarm_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t rtc_get(void);
int32_t SecICTypeRead(void);
int32_t SecSetSVNum(uint32_t a1, uint32_t a2, int32_t a3);
int32_t ufs_erase(int32_t a1, int32_t a2, int32_t a3);
int32_t ufs_get_serial_num(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g33 = 0; // LR
int32_t g34 = 0; // R0
int32_t g35 = 0; // R1
int32_t g36 = 0; // R2
int32_t g37 = 0; // R3
int32_t g38 = 0; // R4
int32_t g39 = 0; // R5
int32_t g40 = 0; // R6
int32_t g41 = 0; // R7
int32_t g1 = -0x1a60cf90; // 0x8f60c6d8
char * g2 = "\x39\x02\x63\x69\x64\x5f\x67\x65\x74\x5f\x63\x69\x64\x5f\x64\x61\x74\x61\x20\x2d\x20\x53\x54\x41\x52\x54\x0a"; // 0x8f6a54e8
int32_t g3 = -0x79b779d6; // 0x8f6a6a2b
int16_t * g4 = (int16_t *)0xffff; // 0x8f6affa4
int32_t g5 = 0; // 0x8f6b8ac0
int32_t g6 = 0; // 0x8f6b8ac4
int32_t g7 = 0; // 0x8f6b8ac8
int32_t g8 = 0; // 0x8f6b8acc
int32_t g9 = 0; // 0x8f6e0a88
char * g10; // 0x8f70da9b
int32_t g11 = 0; // 0x8f70f725
int32_t g12 = 0; // 0x8f70f745
int32_t g13 = 0; // 0x8f70f746
int32_t g14 = 0; // 0x8f70f747
int32_t g15 = 0; // 0x8f70f748
int32_t g16 = 0; // 0x8f70f749
int32_t g17 = 0; // 0x8f70f74a
int32_t g18 = 0; // 0x8f70f74b
int32_t g19 = 0; // 0x8f70f74c
int32_t g20 = 0; // 0x8f70f74d
int32_t g21 = 0; // 0x8f70f74e
int32_t g22 = 0; // 0x8f70f74f
int32_t g23 = 0; // 0x8f70f750
int32_t g24 = 0; // 0x8f70f751
int32_t g25 = 0; // 0x8f70f752
int32_t g26 = 0; // 0x8f70f753
int32_t g27 = 0; // 0x8f70f754
char g28 = 0; // 0x8f70f755
char g29 = 0; // 0x8f70f756
char * g30; // 0x8f70f75d
int32_t g31 = 0; // 0x8f7112f4
int32_t g32 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f60b590 - 0x8f60b5c3
int32_t ufs_erase(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f60b590
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_ctlz_i32(int32_t a1, bool a2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:45:04
