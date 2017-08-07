//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t check_mbm_addr_range_overlap(uint32_t a1, uint32_t a2, int32_t a3);
int32_t clock_ce_disable(int32_t a1);
int32_t clock_config_blsp_i2c(int32_t a1, int32_t a2);
int32_t cxo_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t display_set_mdp_version(int32_t a1);
int32_t display_shutdown(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt_reserveprop(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt_setprop(int32_t a1, int32_t a2, int32_t a3, char * a4);
void function_8f648514(void);
int32_t get_barcode_scale(int32_t a1, int32_t a2);
int32_t get_bool_prop(int32_t a1, int32_t a2);
int32_t get_current_path(int32_t a1, int32_t a2);
int32_t get_hw_rel(char * a1, int32_t a2, int32_t a3);
int32_t get_int_array_prop(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_panel_name_strings(void);
void hexdump(int32_t * a1, int32_t a2);
int32_t load_and_validate_kernel_image(int32_t a1);
int32_t mcs_DER_decodeBitString(int32_t a1, uint32_t a2, int32_t a3);
int32_t mcs_DER_decodeBoolean(char * a1, int16_t a2, int32_t a3);
int32_t mdp_clk_gating_ctrl(int32_t a1, int32_t a2);
int32_t mdss_mdp_intf_offset(int32_t a1);
int32_t mot_sst_pal_get_sbd_en_otp_bit(char * a1);
int32_t mot_sst_pal_set_sbd_en_otp_bit(int32_t a1, int32_t a2);
int32_t pll_vote_clk_is_enabled(int32_t a1, int32_t a2, int32_t a3);
int32_t set_current_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t set_logger_capacity(int32_t a1, int32_t a2);
int32_t set_logger_max_log_len(int32_t a1, int32_t a2);
int32_t target_baseband(char * a1, int32_t a2, int32_t a3);
int32_t target_baseband_detect(int32_t * a1);
int32_t utags_early_init(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g27 = false; // LR
int32_t g28 = 0; // R0
int32_t g29 = 0; // R1
int32_t g30 = 0; // R10
int32_t g31 = 0; // R2
int32_t g32 = 0; // R3
int32_t g33 = 0; // R4
int32_t g34 = 0; // R5
int32_t g35 = 0; // R6
int32_t g36 = 0; // R7
int32_t g37 = 0; // R8
int32_t g38 = 0; // R9
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
char g2[2] = "."; // 0x8f688719
int32_t g3 = -0x1201f230; // 0x8f68ac00
int32_t g4 = 0x65440030; // 0x8f69c66f
int32_t g5 = -1; // 0x8f6ac1f4
int32_t g6 = -1; // 0x8f6ac1fc
int32_t g7 = 2; // 0x8f6afe0c
int32_t g8; // 0x8f6afe74
int32_t g9 = 0; // 0x8f6b00b0
int32_t g10 = 0; // 0x8f6b00cc
int32_t g11 = 0; // 0x8f6b00d0
int32_t g12 = 0; // 0x8f6b00d4
int32_t g13 = 0; // 0x8f6b00d8
int32_t g14 = 0; // 0x8f6b0110
int32_t g15 = 0; // 0x8f6b012c
int32_t g16 = 0; // 0x8f6b0130
int32_t g17 = 0; // 0x8f6b0134
int32_t g18 = 0; // 0x8f6b0138
int32_t g19 = 0; // 0x8f6e06b0
int32_t g20 = 0; // 0x8f6e0bfc
int32_t g21 = 0; // 0x8f6e0c30
int32_t g22 = 0; // 0x8f6e0c38
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114d4
char * g25; // 0x8f7114f0
int32_t g26 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f672af8 - 0x8f672b53
int32_t mot_sst_pal_get_sbd_en_otp_bit(char * a1) {
    int32_t v1 = g23;
    int32_t v2 = v1;
    int32_t result = 255;
    if (a1 != NULL) {
        int32_t v3 = SecReadFuse(109, g29, v1, (int32_t)&g23); // 0x8f672b1c
        *(char *)(int32_t)a1 = (char)(v3 == 1);
        v2 = g23;
        result = 0;
        // branch -> 0x8f672b34
    }
    // 0x8f672b34
    if (v1 != v2) {
        // 0x8f672b44
        __stack_chk_fail();
        // branch -> 0x8f672b48
    }
    // 0x8f672b48
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int isprint(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int printf(const char * restrict format, ...);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:53:26
