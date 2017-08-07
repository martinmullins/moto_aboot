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

int32_t __utag_describe(int32_t a1, int32_t a2, int32_t a3);
int32_t __utag_format(char * a1, int32_t a2, char * a3, int32_t a4, int32_t a5);
int32_t cmd_multiflash_mmc_img(char * str, char * a2, int32_t a3, int32_t a4);
int32_t cmd_multiflash_mmc_sparse_img(int32_t a1, char * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
int32_t dbval_provision_store(char * a1, int32_t * a2, char * a3);
int32_t dbval_validate_datablock(int32_t a1, int32_t a2, int32_t a3, char * a4);
int32_t disable_charger_mode(int32_t a1, int32_t a2);
int32_t fastboot_init_validators(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fboot_cmd_multiflash_validate(int32_t a1, int32_t a2);
int32_t get_delay_abs_time(int32_t a1, int32_t a2, int32_t a3);
int32_t get_offset_ui_setting(int32_t a1, int32_t a2);
int32_t get_schedule_abs_time(int32_t a1);
int32_t is_recovery_mode(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_clear_rsa_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_hashSHA(int32_t a1, int32_t * a2, int32_t * a3);
int32_t mcs_mp_mont_prod(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_mp_mont_reduce(int32_t * a1, int32_t a2, int32_t a3);
int32_t mutex_acquire(int32_t a1, int32_t a2);
int32_t mutex_release(int32_t a1);
int32_t recovery_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t start_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t stop_charging(int32_t a1, int32_t a2);
int32_t stop_usb_detection(int32_t a1, int32_t a2);
int32_t target_display_pre_on(int32_t a1, int32_t a2, int32_t a3);
int32_t target_reboot_device(int32_t a1);
int32_t thread_preempt(void);
int32_t thread_resume(int32_t a1, int32_t a2);
int32_t wififlash_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t XXH32_intermediateDigest(void);
int32_t XXH32_update(char * a1, char * a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g43 = 0; // LR
int32_t g44 = 0; // R0
int32_t g45 = 0; // R1
int32_t g46 = 0; // R10
int32_t g47 = 0; // R11
int32_t g48 = 0; // R2
int32_t g49 = 0; // R4
int32_t g50 = 0; // R5
int32_t g51 = 0; // R6
int32_t g52 = 0; // R7
int32_t g53 = 0; // R8
int32_t g54 = 0; // R9
int32_t g1 = -0x1a60cfd8; // 0x8f62dd14
int32_t g2 = -0x1a60cfd8; // 0x8f62dd48
int32_t g3 = -0x16d2bfed; // 0x8f62dd7c
int32_t g4 = -0x16d2bf09; // 0x8f62dee0
int32_t g5 = -0x16d2bf8d; // 0x8f62e0bc
int32_t g6 = -0x16d2bfc9; // 0x8f62e21c
int32_t g7 = -0x16d2bf8d; // 0x8f62e284
int32_t g8 = -0x16d2bfc9; // 0x8f62e74c
int32_t g9 = -0x16d2b010; // 0x8f62e900
int32_t g10 = -0x16d2bc10; // 0x8f62eb6c
int32_t g11 = -0x1a60c1d8; // 0x8f62f18c
int32_t g12 = -0x16d2bf8d; // 0x8f630638
int32_t g13 = -0x16d2bf09; // 0x8f634ac0
char * g14 = "\x01"; // 0x8f6a3f48
int32_t g15 = 1; // 0x8f6ac0f0
char * g16 = "\n"; // 0x8f6ac1b0
int32_t g17 = -1; // 0x8f6ac1c4
char * g18 = "\xf1"; // 0x8f6affa8
int32_t g19 = 0; // 0x8f6c0378
int32_t g20 = 0; // 0x8f6c037c
int64_t g21 = 0; // 0x8f6c0380
int32_t g22 = 0; // 0x8f6c0384
int32_t g23 = 0; // 0x8f6c0388
int32_t g24 = 0; // 0x8f6c038c
char * g25; // 0x8f6c0394
char * g26; // 0x8f6c03b8
int32_t g27 = 0; // 0x8f6c03c8
int32_t g28 = 0; // 0x8f6c03cc
char * g29; // 0x8f6c03d4
int32_t g30 = 0; // 0x8f6c03dc
char * g31; // 0x8f6c03e0
int32_t g32 = 0; // 0x8f6e07ec
int32_t g33 = 0; // 0x8f6e07f4
int32_t g34 = 0; // 0x8f6e0828
int16_t * g35 = NULL; // 0x8f70da9c
int32_t g36 = 0; // 0x8f70da9e
int32_t g37 = 0; // 0x8f7112f4
int32_t g38 = 0; // 0x8f7114ac
int32_t g39 = 0; // 0x8f7114f4
int32_t g40 = 0; // 0x8f7114f8
int32_t g41 = 0; // 0x8f71150c
int32_t g42 = 0; // 0x8f711510

// ------------------------ Functions -------------------------

// Address range: 0x8f61a900 - 0x8f61a92f
int32_t target_reboot_device(int32_t a1) {
    // 0x8f61a900
    return g37;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:49:15
