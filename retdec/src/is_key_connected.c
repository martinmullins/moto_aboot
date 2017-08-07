//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int32_t __utag_define(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t __utag_format(char * a1, int32_t a2, char * a3, int32_t a4, int32_t a5);
int32_t charger_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t cid_get_cid_data(char * a1);
int32_t dbval_pal_get_primary_serial_number(int32_t a1, int32_t a2);
char * dbval_read_cid_datablock_template(char * a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t dbval_read_processor_uid(char * a1, int32_t * a2, int32_t a3);
int32_t dbval_write_datablock(int32_t a1, int32_t a2, uint32_t a3);
int32_t dpc_queue(int32_t a1, int32_t a2, int32_t a3);
int32_t event_init(int32_t * a1, char a2, int32_t a3);
int32_t fdt_getprop(int32_t a1, int32_t a2, char * str);
int32_t fdt_getprop_namelen(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
void function_8f64b6a0(void);
void function_8f64b730(char * a1, char * a2, int32_t * a3);
int32_t is_charger_mode(char * a1, int32_t a2);
int32_t is_ever_unlocked(int32_t a1, int32_t a2);
int32_t is_key_connected(int32_t a1);
int32_t isl98611_read_reg(int32_t a1, int32_t a2);
int32_t isl98611_write_reg(int32_t a1, int32_t a2);
int32_t max17050_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_ctx_init_hash(char a1, char * a2);
int32_t mcs_habp_rsa_large_window(int32_t a1);
int32_t mdss_fbc_cfg(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_layer_mixer_setup(int32_t a1, int32_t a2);
int32_t pm8x41_kpdpwr_s2_reset_disable(int32_t a1, int32_t a2);
int32_t pm8x41_lvs_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t regex_match(char * regex, char * str);
int32_t set_state_values_for_nonhlos(int32_t a1, int32_t a2);
int32_t sod_ramdump_disable(void);
int32_t sod_share(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g16 = 0; // LR
int32_t g17 = 0; // R0
int32_t g18 = 0; // R1
int32_t g19 = 0; // R10
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g27 = 0; // R9
char * g1 = "\x45\x23\x01\xef\xcd\xab\x89\x98\xba\xdc\xfe\x10\x32\x54\x76\xc3\xd2\xe1\xf0"; // 0x8f6a69eb
int32_t g2 = 0x45230100; // 0x8f6a69ff
int32_t g3; // 0x8f6ac0e8
int32_t g4 = 1; // 0x8f6ac0f0
char * g5 = "\n"; // 0x8f6ac1b0
int32_t g6 = 0; // 0x8f6c0044
int32_t g7 = 0; // 0x8f6e0ae8
char * g8; // 0x8f6e0aec
char * g9; // 0x8f6e0b34
int32_t g10 = 0; // 0x8f6e0b48
char * g11; // 0x8f70da97
int32_t g12 = 0; // 0x8f70da98
char * g13; // 0x8f70da99
int32_t g14 = 0; // 0x8f70da9a
int32_t g15 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6431c0 - 0x8f6431fb
int32_t is_key_connected(int32_t a1) {
    // 0x8f6431c0
    return (int32_t)*(char *)&g9;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int regcomp(regex_t * restrict preg, const char * restrict pattern, int cflags);
// int regexec(const regex_t * restrict preg, const char * restrict string, size_t nmatch, regmatch_t pmatch[__restrict_arr], int eflags);
// void regfree(regex_t * preg);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:18:50
