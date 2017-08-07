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

int32_t bq24296_chg_enable(int32_t result, int32_t a2, int32_t a3);
int32_t bq24296_config_for_fact_cbl(void);
int32_t clk_disable(int32_t a1, int32_t a2);
int32_t clk_enable(int32_t a1, int32_t a2);
int32_t dbval_pal_get_serial_num_type(char * a1, int32_t a2, int32_t a3);
int32_t dbval_pal_rand(char * a1, int32_t a2);
int32_t fboot_oem_early_init(void);
int32_t fboot_oem_init(void);
void function_8f64b0ac(void);
void function_8f64b108(int32_t a1, int32_t a2, int32_t a3);
int32_t get_barcode_scale(int32_t a1, int32_t a2);
int32_t get_barcode_width(void);
int32_t get_product_id_by_name(char * a1, int32_t a2);
int32_t get_ui_coordinates(int32_t a1, int32_t a2);
int32_t is_kung_pow_enabled(int32_t a1);
int32_t is_recovery_mode(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mbm_fdt_find_node(int32_t a1, int32_t a2);
char * mbm_fdt_init(void);
int32_t mcs_cert_get_rsa_public_key(char * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t mcs_clear_cert_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_habp_rsa_med_window(int32_t a1);
int32_t mcs_habp_rsa_small_window(int32_t a1);
int32_t mot_sst_pal_get_flash_uid_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_processor_uid(int32_t a1, int32_t a2);
int32_t mp_compare(int32_t a1, int32_t a2, int32_t a3);
int32_t mp_copy(int32_t a1, int32_t a2, int32_t a3);
char * platform_early_init(char * result);
int32_t recovery_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t set_show_battery_fn(char * a1, int32_t a2, int32_t a3);
int32_t target_display_init(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g26 = 0; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R2
int32_t g30 = 0; // R3
int32_t g31 = 0; // R4
int32_t g32 = 0; // R5
int32_t g33 = 0; // R6
int32_t g34 = 0; // R7
int32_t g1 = -0x16d2bfed; // 0x8f626204
int32_t g2 = -0x16d2be0d; // 0x8f627388
int32_t g3 = -0x1a60cf3c; // 0x8f627420
int32_t g4 = -0x1a60df7c; // 0x8f627e38
int32_t g5 = 0x5b5e0029; // 0x8f687c45
char * g6 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
char * g7 = "\n"; // 0x8f6ac1b0
int32_t g8 = -1; // 0x8f6ac1e8
int32_t g9 = -1; // 0x8f6ac1f4
int32_t g10 = -1; // 0x8f6ac1f8
int32_t g11 = -1; // 0x8f6ac1fc
int32_t g12 = -1; // 0x8f6ac200
int32_t g13 = -1; // 0x8f6ac204
int32_t g14 = -1; // 0x8f6ac208
int32_t g15 = -1; // 0x8f6ac20c
int32_t g16 = -1; // 0x8f6ac214
int32_t g17 = -1; // 0x8f6acaac
char * g18; // 0x8f6e06a0
char * g19; // 0x8f6e06a6
char * g20; // 0x8f6e06ab
char * g21; // 0x8f6e0848
int32_t g22 = 0; // 0x8f6e0850
int32_t g23 = 0; // 0x8f6e0aa0
int32_t g24 = 0; // 0x8f6e0aa4
int32_t g25 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6018fc - 0x8f601937
int32_t target_display_init(int32_t a1, int32_t a2) {
    int32_t v1 = g25;
    display_set_mdp_version(13, a2);
    if (v1 == g25) {
        // 0x8f601928
        int32_t v2;
        return display_init(13, a2, v1, v1, g31, g26, v2);
    }
    // 0x8f601924
    __stack_chk_fail();
    return 13;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:08:11
