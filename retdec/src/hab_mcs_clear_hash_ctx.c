//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ----------------- Float Types Definitions ------------------

typedef float float32_t;

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int32_t __utags_is_protected(int32_t a1, int32_t a2);
int32_t __utags_unprotect(int32_t a1, int32_t a2);
int32_t backlight_off(int32_t a1, int32_t a2);
int32_t backlight_on(int32_t a1, int32_t a2);
int32_t bq24296_config_for_fact_cbl(void);
int32_t bq24296_ibuslim_set(int32_t result, int32_t a2, int32_t a3);
int32_t dbval_check_timer(int32_t a1, int32_t a2);
int32_t fdt_appendprop_str(int32_t a1, int32_t a2, int32_t a3, char * a4);
int32_t fdt_delprop(int32_t a1, int32_t a2, int32_t a3);
void function_8f64aee0(void);
void function_8f64af40(int32_t a1, int32_t a2, int32_t a3);
void function_8f67b488(void);
int32_t get_sp_block(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_mcs_clear_hash_ctx(char * a1, int32_t a2);
int32_t hab_mcs_hash_end(char * a1, int32_t a2);
int32_t is_validation_enabled(char * a1, int32_t a2);
char * lz4_decode(char * a1, uint32_t a2, int32_t a3, uint32_t a4);
int32_t mcs_array_unpadded_length(int32_t a1, int32_t a2);
int32_t qtimer_disable(int32_t result);
int32_t qtimer_get_frequency(void);
int32_t sdhci_clk_supply(int32_t * a1, uint32_t a2, int32_t a3);
int32_t sdhci_set_uhs_mode(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t sod_reason(int32_t a1, int32_t a2);
int32_t sod_timestamp(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_erase_content(int32_t a1, int32_t a2);
int32_t target_mmc_erase_group_size(int32_t a1, int32_t a2);
int32_t update_sp_block(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_sparse_partition(int32_t a1, int32_t a2);
int32_t XXH32_digest(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g17 = 0; // LR
int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R10
int32_t g21 = 0; // R11
int32_t g22 = 0; // R2
int32_t g23 = 0; // R3
int32_t g24 = 0; // R4
int32_t g25 = 0; // R5
int32_t g26 = 0; // R6
int32_t g27 = 0; // R7
int32_t g28 = 0; // R8
int32_t g29 = 0; // R9
int32_t g1 = -0x16d2b010; // 0x8f658270
int32_t g2 = 0x65440030; // 0x8f69c66f
char * g3 = "\x01"; // 0x8f6a4214
int32_t g4 = 0x746e6300; // 0x8f6a4e20
int32_t g5 = -0x7f7fbfc0; // 0x8f6a6b2d
int32_t g6 = -0x709918c4; // 0x8f6a6b38
int32_t g7 = 0x40302014; // 0x8f6a6b88
int32_t g8 = 0; // 0x8f6a6b8c
int32_t g9 = 0x1010000; // 0x8f6a6b9c
int32_t g10 = 1; // 0x8f6ac0f0
int32_t g11 = 0; // 0x8f6e0a88
int32_t g12 = 0; // 0x8f6e0aa0
int32_t g13 = 0; // 0x8f70dab0
int32_t g14 = 0; // 0x8f710c48
char * g15; // 0x8f710e74
int32_t g16 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f66e6e4 - 0x8f66e73b
int32_t hab_mcs_clear_hash_ctx(char * a1, int32_t a2) {
    int32_t result = g16;
    int32_t v1;
    if (a1 == NULL) {
        // after_if_8f66e6f8_0.thread
        v1 = result;
        // branch -> 0x8f66e71c
    } else {
        // 0x8f66e704
        memset(a1, 0, 216);
        *(char *)(int32_t)a1 = 24;
        v1 = g16;
        // branch -> 0x8f66e71c
    }
    // 0x8f66e71c
    if (result != v1) {
        // 0x8f66e72c
        __stack_chk_fail();
        // branch -> 0x8f66e730
    }
    // 0x8f66e730
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * asctime(const struct tm * tp);
// void free(void * ptr);
// struct tm * gmtime(const time_t * timer);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------- Instruction-Idiom Functions ----------------

// float32_t fabsf(float32_t a1);
// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:48:51
