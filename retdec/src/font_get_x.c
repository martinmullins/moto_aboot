//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_is_protected(int32_t a1, int32_t a2);
int32_t __utag_unprotect(int32_t a1, int32_t a2, int32_t a3);
int32_t bq24296_get_ibuslim(int32_t a1, int32_t a2);
int32_t dbval_memcmp_value(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_sigreq_create_outer(char * a1, int32_t a2, int32_t a3);
int32_t display_get_left_lines(int32_t a1);
int32_t display_get_total_lines(int32_t a1, int32_t a2);
int32_t fan54046_modify(int32_t a1, int32_t a2, int32_t a3);
int32_t font_draw_char(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t font_draw_char_horizontal(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t font_get_x(int32_t a1, int32_t a2, int32_t a3);
int32_t font_get_y(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b000(void);
void function_8f64b05c(char * a1, uint32_t a2, int32_t a3);
int32_t mcs_ctx_init_rng(int32_t a1, int32_t a2, int32_t a3, char * a4);
int32_t mcs_return_rng_data(char * a1, int32_t a2, int32_t a3);
int32_t mdp_get_revision(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_mdp_intf_offset(int32_t a1);
int32_t mipi_cmd_trigger(int32_t a1, int32_t a2);
int32_t mipi_dsi_cmdmode_enable(void);
int32_t panel_manager_get_panel_hbm_feat(void);
int32_t panel_manager_set_panel_hbm_feat(char a1, int32_t a2, int32_t a3);
int32_t sod_ramdump_enable(void);
int32_t sod_ramdump_pending_pull(int32_t a1, int32_t a2, int32_t a3);
int32_t tps65132_config(int32_t a1, int32_t a2, int32_t a3);
int32_t tps65132_init(int32_t a1);
int32_t ufs_get_page_size(int32_t a1);
int32_t ufs_get_serial_num(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g12 = 0; // LR
int32_t g13 = 0; // R0
int32_t g14 = 0; // R1
int32_t g15 = 0; // R12
int32_t g16 = 0; // R2
int32_t g17 = 0; // R3
int32_t g18 = 0; // R4
int32_t g19 = 0; // R5
int32_t g20 = 0; // R6
int32_t g21 = 0; // R7
int32_t g22 = 0; // R8
int32_t g23 = 0; // R9
int32_t g1 = 1; // 0x8f6ac0f0
char * g2 = "\x01"; // 0x8f6ac21c
int32_t g3 = 0; // 0x8f6b8af8
char * g4; // 0x8f6e0794
int32_t g5 = 0; // 0x8f6e0aa0
int32_t g6 = 0; // 0x8f6e0aac
int32_t g7 = 0; // 0x8f6e0bd8
int32_t g8 = 0; // 0x8f6e0bdc
int32_t g9 = 0; // 0x8f6e0be0
int32_t g10 = 0; // 0x8f6e0be4
int32_t g11 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f648ad4 - 0x8f648b17
int32_t font_get_x(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f648ad4
    int32_t result; // 0x8f648b0c_22
    if (g10 != 0) {
        // if_8f648af8_0_true
        result = *(int32_t *)(g10 + 20);
        // branch -> 0x8f648b08
    } else {
        result = 0;
    }
    // 0x8f648b08
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 28
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:20:53
