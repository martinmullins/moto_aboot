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

// Address range: 0x8f6153f0 - 0x8f6155db
int32_t update_mmi_panel_props(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g53; // 0x8f6153f0
    int32_t v2 = g54; // 0x8f6153f0
    int32_t v3 = g56; // 0x8f6153f0
    g54 = a1;
    g53 = a2;
    int32_t v4 = g47;
    g56 = &g47;
    int32_t v5 = *(int32_t *)(a2 + 584); // 0x8f61540c
    if (v5 == 0) {
        // 0x8f615418
        // branch -> 0x8f615580
        // 0x8f615580
        if (v4 != g47) {
            // 0x8f615590
            __stack_chk_fail();
            // branch -> 0x8f615594
        }
        // 0x8f615594
        return 0;
    }
    int32_t v6 = update_cached_node_offset(a1, 3, v5, (int32_t)&g47, a1, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f615424
    int32_t result; // 0x8f615598_2
    if (v6 == -1) {
        // 0x8f615580
        if (v4 != g47) {
            // 0x8f615590
            __stack_chk_fail();
            result = v6;
            // branch -> 0x8f615594
        } else {
            result = -1;
        }
        // 0x8f615594
        return result;
    }
    int32_t v7 = *(int32_t *)(g53 + 96); // 0x8f615438
    int32_t v8 = update_mmi_panel_find_node(g54, g12, (char *)v7, (int32_t)&g11); // 0x8f615440
    if (v8 < 0) {
        int32_t v9 = *(int32_t *)(g53 + 96); // 0x8f615574
        print_log(-1, (int32_t)"Failed to find node %s\n", v9, (int32_t)&g11, a1, a2, a3, v4, v1, v2, g55, v3, g57);
        // branch -> 0x8f61557c
        // 0x8f61557c
        // branch -> 0x8f615580
        // 0x8f615580
        if (v4 != g47) {
            // 0x8f615590
            __stack_chk_fail();
            // branch -> 0x8f615594
        }
        // 0x8f615594
        return -1;
    }
    // 0x8f61544c
    print_log(1, (int32_t)"%s: modifying the dsi mipi freq info\n", (int32_t)"update_mmi_panel_props", (int32_t)&g11, a1, a2, a3, v4, v1, v2, g55, v3, g57);
    char v10 = *(char *)(g53 + 76); // 0x8f615468
    int32_t v11 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-t-clk-pre", (int32_t)v10, a1, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f61546c
    char v12 = *(char *)(g53 + 77); // 0x8f615478
    int32_t v13 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-t-clk-post", (int32_t)v12, a1, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f615484
    int32_t v14 = *(int32_t *)(g53 + 48); // 0x8f615490
    int32_t v15 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-panel-clockrate", v14, a1, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f61549c
    int32_t v16;
    int32_t v17 = fdt_setprop(g54, v8, (int32_t)"qcom,mdss-dsi-panel-timings", g53 + 78, 12, a2, a3, v4, v1, v2, g55, v3, g57, g48, v16, 0, 0); // 0x8f6154bc
    int32_t v18 = *(int32_t *)(g53 + 52); // 0x8f6154c8
    int32_t v19 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-h-front-porch", v18, 12, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f6154d4
    int32_t v20 = *(int32_t *)(g53 + 56); // 0x8f6154e0
    int32_t v21 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-h-back-porch", v20, 12, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f6154ec
    int32_t v22 = *(int32_t *)(g53 + 60); // 0x8f6154f8
    int32_t v23 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-h-pulse-width", v22, 12, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f615504
    int32_t v24 = *(int32_t *)(g53 + 64); // 0x8f615510
    int32_t v25 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-v-front-porch", v24, 12, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f61551c
    int32_t v26 = *(int32_t *)(g53 + 68); // 0x8f615528
    int32_t v27 = fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-v-back-porch", v26, 12, a2, a3, v4, v1, v2, g55, v3, g57); // 0x8f615534
    int32_t v28 = *(int32_t *)(g53 + 72); // 0x8f615540
    int32_t v29; // R0
    int32_t v30; // 0x8f615598_22
    if (fdt_setprop_u32(g54, v8, (int32_t)"qcom,mdss-dsi-v-pulse-width", v28, 12, a2, a3, v4, v1, v2, g55, v3, g57) + v27 + v25 + v23 + v21 + v19 + v17 + v15 + v13 + v11 == 0) {
        // 0x8f615418
        v29 = 0;
        v30 = 0;
        // branch -> 0x8f615580
    } else {
        // 0x8f61555c
        print_log(-1, (int32_t)"Failed to set node\n", (int32_t)"qcom,mdss-dsi-v-pulse-width", v28, 12, a2, a3, v4, v1, v2, g55, v3, g57);
        // branch -> 0x8f61557c
        // 0x8f61557c
        v29 = -1;
        v30 = -1;
        // branch -> 0x8f615580
    }
    // 0x8f615580
    if (v4 != g47) {
        // 0x8f615590
        __stack_chk_fail();
        result = v29;
        // branch -> 0x8f615594
    } else {
        result = v30;
    }
    // 0x8f615594
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