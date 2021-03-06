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

int32_t board_get_ddr_subtype(void);
int32_t board_init(void);
int32_t charger_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_rcg_set_rate_hid(int32_t * a1, int32_t a2, int32_t a3);
int32_t clock_lib2_vote_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t get_partition_by_index(uint32_t a1, int32_t a2);
int32_t hab_mcs_hashSHA(int32_t a1, int32_t * a2, int32_t * a3);
int32_t hab_sw_rsa(char * str, char * str2, uint32_t n, int32_t a4, uint32_t a5);
int32_t is_dev_diag_mode(void);
int32_t is_factory_cable(void);
int32_t is_usb_attached(int32_t a1);
int32_t is_usb_attached_cdp(int32_t a1, int32_t a2);
int32_t mcs_multi_multiply(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_multi_sub(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_dsi_cmd_mode_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t mipi_dsi_on(int32_t a1, int32_t a2);
char * mmc_sd_card_init(char * a1, int32_t * a2);
int32_t mmc_set_drv_type(char * a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t msm_gpio_int_disable(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t msm_gpio_interrupt(int32_t a1, int32_t a2, int32_t a3);
int32_t partition_get_name(uint32_t a1, int32_t a2);
int32_t pm8x41_get_batt_voltage(int32_t a1, int32_t a2, int32_t a3);
int32_t pmic_get_extra_reset_info(int32_t a1, int32_t a2);
int32_t pmic_set_extra_reset_info(uint32_t result2, uint32_t a2);
int32_t scm_dload_mode(int32_t a1);
int32_t trigger_to_power_off(int32_t a1, int32_t a2);
int32_t turn_off_backlight(int32_t a1, int32_t a2, int32_t a3);
int32_t update_fastchg_status(int32_t a1, int32_t a2, int32_t a3);
int32_t update_mmi_panel_find_node(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t update_mmi_panel_props(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g48 = 0; // LR
int32_t g49 = 0; // R0
int32_t g50 = 0; // R1
int32_t g51 = 0; // R2
int32_t g52 = 0; // R3
int32_t g53 = 0; // R4
int32_t g54 = 0; // R5
int32_t g55 = 0; // R6
int32_t g56 = 0; // R7
int32_t g57 = 0; // R8
int32_t g58 = 0; // R9
int32_t g1 = 0x65440030; // 0x8f69c66f
int32_t g2 = 0; // 0x8f6ac068
int32_t g3 = 0; // 0x8f6ac06c
int32_t g4 = 0; // 0x8f6ac070
int32_t g5 = 0; // 0x8f6ac074
int32_t g6 = 0; // 0x8f6ac078
int32_t g7 = 0; // 0x8f6ac07c
int32_t g8 = 0x7fffffff; // 0x8f6ac084
int32_t g9 = 0; // 0x8f6ac088
int32_t g10 = 1; // 0x8f6ac0a8
int32_t g11 = -1; // 0x8f6ac0c0
int32_t g12 = -1; // 0x8f6ac0cc
char * g13 = "\n"; // 0x8f6ac1b0
int32_t g14 = 2560; // 0x8f6afdff
int32_t g15 = 0; // 0x8f6b505c
int32_t g16 = 0; // 0x8f6b5060
int32_t g17 = 0; // 0x8f6b8c84
int32_t (*g18)() = NULL; // 0x8f6b8c90
int32_t g19 = 0; // 0x8f6e06c0
int32_t g20 = 0; // 0x8f6e1310
int32_t g21 = 0; // 0x8f6e1318
int32_t g22 = 0; // 0x8f6e9400
char g23 = 0; // 0x8f70dad8
int32_t g24 = 0; // 0x8f70dcf4
int32_t g25 = 0; // 0x8f70ddf8
int32_t g26 = 0; // 0x8f70ddfc
int32_t g27 = 0; // 0x8f70dff4
int32_t g28 = 0; // 0x8f70dff8
char * g29; // 0x8f70dffc
int32_t g30 = 0; // 0x8f70e3fc
char g31 = 0; // 0x8f70e500
char g32 = 0; // 0x8f70e604
char * g33; // 0x8f70e708
char g34 = 0; // 0x8f70e709
char g35 = 0; // 0x8f70e70a
char g36 = 0; // 0x8f70e70b
char g37 = 0; // 0x8f70e70c
char g38 = 0; // 0x8f70e70d
int32_t g39 = 0; // 0x8f70e718
int32_t g40 = 0; // 0x8f70e719
int32_t g41 = 0; // 0x8f70e71a
int32_t g42 = 0; // 0x8f70e71b
char g43 = 0; // 0x8f70e71c
char g44 = 0; // 0x8f70e71d
char g45 = 0; // 0x8f70e71e
char g46 = 0; // 0x8f70e71f
int32_t g47 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f634528 - 0x8f634567
int32_t trigger_to_power_off(int32_t a1, int32_t a2) {
    int32_t v1 = g47;
    int32_t v2;
    int32_t result = event_signal((int32_t)&g19, 1, v1, v1, g48, v2, 0, 0); // 0x8f63455c
    g49 = result;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void bzero(void * s, size_t n);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:21:18
