//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_exists(int32_t a1, int32_t a2);
int32_t __utag_is_protected(int32_t a1, int32_t a2);
int32_t board_get_ddr_subtype(void);
int32_t board_soc_version(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_set_gen_db_fields(char a1, char * a2, char * a3);
int32_t dbval_sigrsp_expected_length(uint32_t a1, int32_t a2);
int32_t enable_irq(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b39c(void);
void function_8f64b418(int32_t a1, int32_t a2, int32_t a3);
int32_t get_log_level_by_desc(char * a1, char * str2);
int32_t get_log_level_desc(int32_t a1, int32_t a2, int32_t a3);
int32_t get_next_panel(int32_t a1, int32_t a2);
int32_t invalidate_current_panel(int32_t a1);
int32_t is_flash_fail(int32_t a1, int32_t a2);
int32_t is_resin_n_asserted(void);
int32_t pll_vote_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t pll_vote_clk_is_enabled(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_gpio_set(int32_t a1, int32_t a2);
int32_t pm8x41_lvs_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t register_usb_connection_callback(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t resin_n_irq_handler(int32_t a1, int32_t a2);
int32_t SecMakeOutofFactory(int32_t a1, int32_t a2, int32_t a3);
int32_t SecSetModelID(int32_t a1, int32_t a2, int32_t a3);
int32_t set_ap_panic_flag(int32_t a1);
int32_t sh_recover(int32_t a1);
int32_t smb1359_init(int32_t a1, int32_t a2, int32_t a3);
int32_t sod_ramdump_clear(int32_t a1, int32_t a2);
int32_t userdata_stat(int32_t * a1, int32_t * a2, int32_t * a3);
int32_t validate_gpt_image(char * a1, int32_t a2);
int32_t validate_gpt_partition(char * a1, int32_t a2, int32_t a3, int32_t a4);

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
int32_t g1 = 0x65440030; // 0x8f69c66f
int32_t g2 = 0; // 0x8f6a3ea0
int32_t g3 = 0; // 0x8f6ac070
int32_t g4 = 1; // 0x8f6ac0f0
int32_t g5 = 0; // 0x8f6e06b0
int32_t g6 = 0; // 0x8f6e0724
int32_t g7 = 0; // 0x8f6e0740
int32_t g8 = 0; // 0x8f6e079c
int32_t g9 = 0; // 0x8f6e0bd4
int32_t g10 = 0; // 0x8f70f7a5
int32_t g11 = 0; // 0x8f70f7c5
int32_t g12 = 0; // 0x8f70f7c6
int32_t g13 = 0; // 0x8f70f7c7
int32_t g14 = 0; // 0x8f70f7c8
int32_t g15 = 0; // 0x8f70f7c9
int32_t g16 = 0; // 0x8f70f7ca
int32_t g17 = 0; // 0x8f70f7cb
int32_t g18 = 0; // 0x8f70f7cc
int32_t g19 = 0; // 0x8f70f7cd
int32_t g20 = 0; // 0x8f70f7ce
int32_t g21 = 0; // 0x8f70f7cf
int32_t g22 = 0; // 0x8f70f7d0
int32_t g23 = 0; // 0x8f70f7d1
int32_t g24 = 0; // 0x8f70f7d2
int32_t g25 = 0; // 0x8f70f7d3
int32_t g26 = 0; // 0x8f70f7d4
char g27 = 0; // 0x8f70f7d5
char g28 = 0; // 0x8f70f7d6
char * g29; // 0x8f70f7dd
int32_t g30 = 0; // 0x8f7112f4
int32_t g31 = 0; // 0x8f711550
int32_t g32 = 0; // 0x8f711554

// ------------------------ Functions -------------------------

// Address range: 0x8f6568d8 - 0x8f656967
int32_t get_log_level_by_desc(char * a1, char * str2) {
    // 0x8f6568d8
    int32_t v1; // R4
    int32_t v2; // 0x8f6569044
    int32_t v3; // 0x8f6568f8
    if (a1 == (char *)2) {
        // if_8f6568ec_0_true.critedge
        v1 = 6;
        v3 = g30;
        v2 = 6;
        // branch -> after_if_8f6568ec_0
    } else {
        // if_8f6568e4_0_true
        v1 = 1;
        v3 = g30;
        v2 = 1;
        // branch -> after_if_8f6568ec_0
    }
    // after_if_8f6568ec_0
    if (str2 != NULL) {
        int32_t v4 = v2; // 0x8f656904
        // branch -> 0x8f656904
        while (true) {
            int32_t str = *(int32_t *)(4 * v4 + (int32_t)&g2); // 0x8f656904
            int32_t str3 = str; // R5
            int32_t v5 = v4; // 0x8f656934
            if (str != 0) {
                int32_t len = strlen((char *)str); // 0x8f656914
                int32_t v6 = v1; // 0x8f65692c
                if (strncmp((char *)(int32_t)str2, (char *)str3, len) == 0) {
                    // if_8f65692c_0_true
                    // branch -> 0x8f656944
                    // 0x8f656944
                    if (v3 != g30) {
                        // 0x8f656954
                        __stack_chk_fail();
                        // branch -> 0x8f656958
                    }
                    // 0x8f656958
                    return v6 - 3;
                }
                v5 = v6;
            }
            int32_t v7 = v5 + 1; // 0x8f656934
            v1 = v7;
            if (v7 < 11) {
                // 0x8f656934
                v4 = v7;
                // branch -> 0x8f656904
                continue;
            }
        }
    }
    // 0x8f656944
    if (v3 != g30) {
        // 0x8f656954
        __stack_chk_fail();
        // branch -> 0x8f656958
    }
    // 0x8f656958
    return -10;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:33:19
