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

int32_t dt_entry_list_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt32_to_cpu(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_8f60e20c(int32_t a1, int32_t * a2, int32_t * a3, int32_t a4, int32_t a5, int32_t a6);
int32_t mdp_set_revision(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_panel_commands_send_part_1(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_panel_identify(int32_t a1);
int32_t mdss_dsi_panel_power_on_reset(int32_t a1, int32_t a2);
int32_t mdss_dual_dsi_cmd_dma_trigger_for_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_mdp_set_flush_isra_1(int32_t a1, int32_t * a2);
int32_t mdss_smp_setup(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_vbif_setup(int32_t a1, int32_t a2);
int32_t mipi_dsi_calibration(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_cmds_rx(int32_t * a1, int32_t result);
int32_t mipi_dsi_panel_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_phy_init(int32_t a1, int32_t a2);
int32_t qup_i2c_interrupt(int32_t a1, int32_t a2, int32_t a3);
int32_t qup_i2c_poll_state_isra_4(int32_t * a1, int32_t a2);
int32_t qup_i2c_xfer(int32_t a1);
int32_t qup_set_read_mode(int32_t a1, int32_t a2);
int32_t qup_update_state(int32_t a1, int32_t a2, int32_t a3);
int32_t read_rdata_into_array(int32_t a1, int32_t a2, int32_t a3, char * a4);
int32_t spmi_init(int32_t result2, int32_t a2, int32_t a3);
int32_t update_cached_node_offset(char * a1, int32_t a2, int32_t a3);
int32_t write_wdata_from_array(int32_t a1, int32_t a2, int32_t a3, char * a4);

// --------------------- Global Variables ---------------------

int32_t g19 = 0; // LR
int32_t g20 = 0; // R0
int32_t g21 = 0; // R1
int32_t g22 = 0; // R12
int32_t g23 = 0; // R2
int32_t g24 = 0; // R3
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
int32_t g30 = 0; // R9
bool g1 = false; // flagz
int32_t g2 = 0x6d0f0703; // 0x8f67f1bd
int32_t g3 = 0; // 0x8f67f620
int32_t g4 = 8; // 0x8f67f624
int32_t g5 = 255; // 0x8f67f630
char * g6; // 0x8f67f640
int32_t g7 = 0x65440030; // 0x8f69c66f
int32_t g8; // 0x8f6ac0ac
int32_t g9 = -1; // 0x8f6ac0bc
int32_t g10 = -1; // 0x8f6ac0c0
int32_t g11 = 0; // 0x8f6b8af8
int32_t g12 = 0; // 0x8f6b8afc
int32_t g13 = 0; // 0x8f6b8b00
int32_t g14 = 0; // 0x8f6b8b04
int32_t g15 = 0; // 0x8f6b8b08
int32_t g16 = 0; // 0x8f6b8b0c
int32_t g17 = 0; // 0x8f6b8b10
int16_t * g18 = NULL; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f60e5d4 - 0x8f60e60f
int32_t mdp_set_revision(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f60e5d4
    g11 = a1;
    return (int32_t)g18;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 24
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:34:23
