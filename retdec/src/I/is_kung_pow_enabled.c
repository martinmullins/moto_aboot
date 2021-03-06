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

// Address range: 0x8f632f68 - 0x8f63302f
int32_t is_kung_pow_enabled(int32_t a1) {
    int32_t v1 = a1; // bp-24
    int32_t v2 = g31; // 0x8f632f6c
    int32_t v3 = g32; // 0x8f632f6c
    int32_t v4 = g33; // 0x8f632f6c
    int32_t v5 = &v1; // 0x8f632f6c_1
    int32_t v6 = g25;
    char v7 = *(char *)&g20; // 0x8f632f84
    if (v7 == 0) {
        uint32_t v8 = get_device_setting_offset((int32_t)"kung_pow", (int32_t)v7, (int32_t)&g25, (int32_t)&g20, a1, v6, v2, v3); // 0x8f632f98
        if (v8 >= 0) {
            int32_t v9 = get_int_prop((int32_t)"enabled", v8, v5, (int32_t)&g20, v1, v6, v2); // 0x8f632fac
            if (v9 == 0) {
                // 0x8f632fb8
                *(char *)(int32_t)&g19 = (char)(v1 == 1);
                // branch -> 0x8f632fcc
            }
        }
        // 0x8f632fcc
        *(char *)(int32_t)&g20 = 1;
        // branch -> 0x8f632fd4
    }
    int32_t v10 = (int32_t)"disabled"; // 0x8f632ff0
    if (*(char *)&g19 != 0) {
        // if_8f632fec_0_true
        v10 = (int32_t)"enabled";
        // branch -> after_if_8f632fec_0
    }
    // after_if_8f632fec_0
    int32_t v11;
    print_log(2, (int32_t)"KUNG_POW is %s\n", v10, (int32_t)"enabled", v1, v6, v2, v3, v4, g26, v11, 0, 0);
    int32_t result = (int32_t)*(char *)&g19; // 0x8f632ffc
    g27 = result;
    if (v6 != g25) {
        // 0x8f633008
        __stack_chk_fail();
        // branch -> 0x8f63300c
    }
    // 0x8f63300c
    g31 = v2;
    g32 = v3;
    g33 = v4;
    return result;
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
