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

int32_t __utag_notify(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t __utags_invalidate(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t dbval_debug_print2(int32_t a1, int32_t a2);
char * dbval_read_cid_datablock_template(char * a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t fboot_cmd_flash_post_validate(int32_t * a1);
char * for_each_token(char * str, char * a2, int32_t (*a3)(int32_t), int32_t a4);
void function_8f67b468(void);
void function_8f67b488(int32_t a1);
int32_t generic_mmc_read_logical(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4);
int32_t generic_mmc_write_logical(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4);
char * get_storage(char * a1, int32_t a2);
int32_t get_temperature_setting(int32_t * a1, int32_t a2, int32_t a3);
int32_t get_temperature_thresholds(int32_t a1, char * a2, int32_t a3);
int32_t is_kpdpwr_n_asserted(int32_t a1);
int32_t is_write_protect_supported(int32_t a1, int32_t a2);
int32_t mcs_unit_modular_inverse(int64_t a1);
int32_t mcs_X509Certificate_decodeName(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mmc_erase_card(void);
int32_t mmc_wp(void);
int32_t mot_sst_is_feature_enabled(void);
int32_t mot_sst_is_locked(void);
int32_t resin_n_irq_handler(int32_t a1, int32_t a2);
int32_t smb1359_read_reg(int32_t a1, int32_t a2);
int32_t smb1359_write_reg(int32_t a1, int32_t a2);
int32_t strlcat(char * str, char * a2, int32_t max_len);
int32_t strlcpy(int32_t a1, char * str);
int32_t target_is_emmc_boot(int32_t a1, int32_t a2, int32_t a3);
int32_t target_is_ssd_enabled(void);
int32_t timer_set_oneshot(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t timer_set_periodic(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g12 = 0; // LR
int32_t g13 = 0; // R0
int32_t g14 = 0; // R1
int32_t g15 = 0; // R10
int32_t g16 = 0; // R11
int32_t g17 = 0; // R12
int32_t g18 = 0; // R2
int32_t g19 = 0; // R3
int32_t g20 = 0; // R4
int32_t g21 = 0; // R5
int32_t g22 = 0; // R6
int32_t g23 = 0; // R7
int32_t g24 = 0; // R8
int32_t g25 = 0; // R9
int32_t g1 = -0x1a60df84; // 0x8f654f64
char g2[2] = ":"; // 0x8f686ac4
char * g3 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
char g4[2] = " "; // 0x8f6a4f1e
int32_t g5 = 1; // 0x8f6ac0f0
char * g6; // 0x8f6c0690
char * g7; // 0x8f6e0698
int32_t g8 = 0; // 0x8f6e0bd4
char * g9; // 0x8f6e0c80
int32_t g10 = 0; // 0x8f7112f4
int32_t g11 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f67b468 - 0x8f67b487
void function_8f67b468(void) {
    // 0x8f67b468
    return;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strdup(const char * s);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:18:52
