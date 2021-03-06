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

int32_t cid_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
char * cid_verify_sig(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t clk_enable(int32_t a1, int32_t a2);
int32_t clk_set_rate(int32_t a1);
int32_t dbval_memcmp_value(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_validate_datablock(int32_t a1, int32_t a2, int32_t a3, char * a4);
int32_t disable_gpio_107_irq(int32_t a1);
int32_t display_draw_horizontal_line(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_draw_screen_line_alignment(int32_t a1);
int32_t fan54046_chg_enable(int32_t result, int32_t a2, int32_t a3);
int32_t fan54046_init(void);
int32_t fdt_add_subnode(int32_t a1, int32_t a2, char * str, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t fdt_open_into(int32_t a1, char * a2, int32_t a3);
void function_8f64b418(void);
void function_8f64b470(int32_t a1, int32_t a2, int32_t a3);
void function_8f67b2cc(int32_t a1, char * a2, int32_t a3);
int32_t get_canary(int32_t a1);
int32_t get_ddr_start(void);
int32_t mcs_DER_locate(int16_t a1, int16_t * a2, int32_t a3, int32_t a4);
int32_t mcs_DER_recordLength(int32_t a1);
int32_t mcs_habp_rsa(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t mcs_habp_rsa_crt_core(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t mdp_disable(int32_t a1);
int32_t mdss_dsi_panel_power_on_reset(int32_t a1, int32_t a2);
int32_t mdss_dual_dsi_cmds_tx(int32_t a1, int32_t a2);
int32_t mipi_dsi_cmds_tx(int32_t a1, int32_t a2);
int32_t msm_gpio_int_uninit(int32_t a1);
int32_t platform_get_smem_base_addr(void);
char * scm_xpu_err_fatal_init(int32_t a1);
int32_t store_partition(int32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);

// --------------------- Global Variables ---------------------

int32_t g17 = 0; // LR
int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R10
int32_t g21 = 0; // R11
int32_t g22 = 0; // R12
int32_t g23 = 0; // R2
int32_t g24 = 0; // R3
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
int32_t g30 = 0; // R9
int32_t g1 = -0x16d2bff0; // 0x8f6663f0
int32_t g2 = -0x16d2bff0; // 0x8f666470
int32_t g3 = -0x16d2bfd0; // 0x8f6664f4
char * g4 = "\x39\x02\x63\x69\x64\x5f\x67\x65\x74\x5f\x63\x69\x64\x5f\x64\x61\x74\x61\x20\x2d\x20\x53\x54\x41\x52\x54\x0a"; // 0x8f6a54e8
char * g5 = "\x06"; // 0x8f6acab0
int16_t * g6 = (int16_t *)0xffff; // 0x8f6affa4
int32_t g7 = 0; // 0x8f6e0aac
int32_t g8 = 0; // 0x8f6e0c00
int32_t g9 = 0; // 0x8f6e0c08
int32_t g10 = 0; // 0x8f6e0c38
char * g11; // 0x8f6e0c40
char * g12; // 0x8f70da9b
int32_t g13 = 0; // 0x8f710ed4
int32_t g14 = 0; // 0x8f710ed8
int32_t g15 = 0; // 0x8f7112f4
int32_t g16 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f664f8c - 0x8f665107
int32_t mcs_DER_locate(int16_t a1, int16_t * a2, int32_t a3, int32_t a4) {
    int32_t v1 = a1;
    int32_t v2 = (int32_t)a2;
    int32_t v3 = g26; // 0x8f664f8c
    int32_t v4 = g27; // 0x8f664f8c
    int32_t v5 = g28; // 0x8f664f8c
    int32_t v6 = g29; // 0x8f664f8c
    int32_t v7 = g30; // 0x8f664f8c
    int32_t v8 = g20; // 0x8f664f8c
    int32_t v9 = g21; // 0x8f664f8c
    g29 = a4;
    g30 = &g15;
    g21 = v1;
    g27 = v2;
    g28 = a3;
    int32_t v10;
    g26 = v10;
    int32_t v11 = g15;
    int32_t v12 = 0; // bp-50
    int32_t v13 = 0; // bp-48
    int32_t v14 = 0; // bp-46
    if (a1 == 0) {
        // 0x8f6650cc
        // branch -> 0x8f6650d0
        // 0x8f6650d0
        // branch -> 0x8f6650e4
        // 0x8f6650e4
        *(int16_t *)g27 = (int16_t)v1;
        if (v11 != g15) {
            // 0x8f6650f8
            __stack_chk_fail();
            // branch -> 0x8f6650fc
        }
        // 0x8f6650fc
        g26 = v3;
        g27 = v4;
        g28 = v5;
        g29 = v6;
        g30 = v7;
        g20 = v8;
        g21 = v9;
        return 3;
    }
    uint16_t v15 = *a2; // 0x8f664fc8
    if (v15 == 0) {
        // 0x8f6650d0
        // branch -> 0x8f6650e4
        // 0x8f6650e4
        *(int16_t *)g27 = (int16_t)(int32_t)v15;
        if (v11 != g15) {
            // 0x8f6650f8
            __stack_chk_fail();
            // branch -> 0x8f6650fc
        }
        // 0x8f6650fc
        g26 = v3;
        g27 = v4;
        g28 = v5;
        g29 = v6;
        g30 = v7;
        g20 = v8;
        g21 = v9;
        return 3;
    }
    int32_t v16 = 0; // R4
    g20 = (a4 + 255) % 256;
    if (*a2 != 0) {
        int32_t v17 = &v12; // 0x8f665004_0
        int32_t v18 = &v13; // 0x8f665008_0
        int32_t v19 = &v14; // 0x8f665014_0
        int32_t v20 = 0; // 0x8f664fec
        int32_t v21 = v1; // 0x8f664ff0
        // branch -> 0x8f664fec
        while (true) {
            int32_t v22 = v21 + v20; // 0x8f664fec
            int32_t v23 = v22; // R12
            int32_t v24; // 0x8f66501c
            int32_t v25;
            if ((int32_t)*(char *)v22 != a3) {
                v23 = v22;
                // 0x8f664ffc
                v12 = 0x10000 * ((int32_t)*(int16_t *)v2 - v20) / 0x10000;
                v24 = mcs_DER_fieldLengths(v23, v17, v18, v19, v25, 0, 0, v23, 0, 0, v13, v11);
                if (v24 == 0) {
                    goto lab_0x8f665054;
                }
                // 0x8f6650d8
                // branch -> 0x8f6650e4
                // 0x8f6650e4
                *(int16_t *)g27 = (int16_t)v16;
                if (v11 != g15) {
                    // 0x8f6650f8
                    __stack_chk_fail();
                    // branch -> 0x8f6650fc
                }
                // 0x8f6650fc
                g26 = v3;
                g27 = v4;
                g28 = v5;
                g29 = v6;
                g30 = v7;
                g20 = v8;
                g21 = v9;
                return 1;
            }
            int32_t v26 = g26; // 0x8f665030
            int32_t result; // R0
            if (v26 == 0) {
                // 0x8f6650e0
                result = 0;
                // branch -> 0x8f6650e4
            } else {
                char * v27 = (char *)v26; // 0x8f665038_0
                uint32_t v28 = (int32_t)*v27 - 1; // 0x8f66503c
                result = v28 % 256;
                *v27 = (char)v28;
                if (result != 0) {
                    // branch -> 0x8f664ffc
                    // 0x8f664ffc
                    v12 = 0x10000 * ((int32_t)*(int16_t *)g27 - v16) / 0x10000;
                    v24 = mcs_DER_fieldLengths(v23, v17, v18, v19, v25, 0, 0, v23, 0, 0, v13, v11);
                    if (v24 == 0) {
                      lab_0x8f665054:;
                        int32_t v29 = v25; // 0x8f66507010
                        int32_t v30; // 0x8f664fe0
                        int32_t v31; // 0x8f6650c4
                        if (g29 != 0) {
                            // 0x8f66505c
                            if (((int32_t)*(char *)v23 & 32) != 0) {
                                int32_t v32 = g26; // 0x8f665070
                                int32_t v33 = (v13 + 1 + v16) % 0x10000; // 0x8f665084
                                g25 = v33;
                                v12 = 0x10000 * v14 / 0x10000;
                                int32_t v34 = mcs_DER_locate((int16_t)(g21 + v33), (int16_t *)&v12, g28, g20); // 0x8f665094
                                result = v34;
                                switch (v34) {
                                    default: {
                                        // 0x8f6650a8
                                        // branch -> after_if_8f6650b0_0
                                        // after_if_8f6650b0_0
                                        // branch -> 0x8f6650e4
                                        // 0x8f6650e4
                                        *(int16_t *)g27 = (int16_t)(v16 % 0x10000);
                                        if (v11 != g15) {
                                            // 0x8f6650f8
                                            __stack_chk_fail();
                                            // branch -> 0x8f6650fc
                                        }
                                        // 0x8f6650fc
                                        g26 = v3;
                                        g27 = v4;
                                        g28 = v5;
                                        g29 = v6;
                                        g30 = v7;
                                        g20 = v8;
                                        g21 = v9;
                                        return result;
                                    }
                                    case 3: {
                                        // if_8f66509c_0_true
                                        v12 = 0x10000 * v14 / 0x10000;
                                        v29 = v32;
                                        // branch -> 0x8f6650bc
                                        break;
                                    }
                                    case 0: {
                                        // if_8f6650ac_0_true
                                        // branch -> after_if_8f6650b0_0
                                        // after_if_8f6650b0_0
                                        // branch -> 0x8f6650e4
                                        // 0x8f6650e4
                                        *(int16_t *)g27 = (int16_t)((v16 + v12 % 0x10000) % 0x10000);
                                        if (v11 != g15) {
                                            // 0x8f6650f8
                                            __stack_chk_fail();
                                            // branch -> 0x8f6650fc
                                        }
                                        // 0x8f6650fc
                                        g26 = v3;
                                        g27 = v4;
                                        g28 = v5;
                                        g29 = v6;
                                        g30 = v7;
                                        g20 = v8;
                                        g21 = v9;
                                        return result;
                                    }
                                }
                                // 0x8f6650bc
                                v31 = (v16 + v12) % 0x10000;
                                v16 = v31;
                                v30 = g27;
                                if ((int32_t)*(int16_t *)v30 <= v31) {
                                    // 0x8f6650d0
                                    // branch -> 0x8f6650e4
                                    // 0x8f6650e4
                                    *(int16_t *)g27 = (int16_t)v16;
                                    if (v11 != g15) {
                                        // 0x8f6650f8
                                        __stack_chk_fail();
                                        // branch -> 0x8f6650fc
                                    }
                                    // 0x8f6650fc
                                    g26 = v3;
                                    g27 = v4;
                                    g28 = v5;
                                    g29 = v6;
                                    g30 = v7;
                                    g20 = v8;
                                    g21 = v9;
                                    return 3;
                                }
                              lab_0x8f6650bc:
                                // 0x8f6650bc
                                v2 = v30;
                                a3 = g28;
                                v20 = v31;
                                v21 = g21;
                                v25 = v29;
                                // branch -> 0x8f664fec
                                continue;
                            } else {
                                v29 = v25;
                            }
                        }
                        // 0x8f6650bc
                        v31 = (v16 + v12) % 0x10000;
                        v16 = v31;
                        v30 = g27;
                        if ((int32_t)*(int16_t *)v30 > v31) {
                            goto lab_0x8f6650bc;
                        }
                        // 0x8f6650d0
                        result = 3;
                        // branch -> 0x8f6650e4
                    } else {
                        // 0x8f6650d8
                        result = 1;
                        // branch -> 0x8f6650e4
                    }
                    // 0x8f6650e4
                    *(int16_t *)g27 = (int16_t)v16;
                    if (v11 != g15) {
                        // 0x8f6650f8
                        __stack_chk_fail();
                        // branch -> 0x8f6650fc
                    }
                    // 0x8f6650fc
                    g26 = v3;
                    g27 = v4;
                    g28 = v5;
                    g29 = v6;
                    g30 = v7;
                    g20 = v8;
                    g21 = v9;
                    return result;
                }
            }
            // 0x8f6650e4
            *(int16_t *)g27 = (int16_t)v16;
            if (v11 != g15) {
                // 0x8f6650f8
                __stack_chk_fail();
                // branch -> 0x8f6650fc
            }
            // 0x8f6650fc
            g26 = v3;
            g27 = v4;
            g28 = v5;
            g29 = v6;
            g30 = v7;
            g20 = v8;
            g21 = v9;
            return result;
        }
    }
    // 0x8f6650d0
    // branch -> 0x8f6650e4
    // 0x8f6650e4
    *(int16_t *)g27 = (int16_t)v16;
    if (v11 != g15) {
        // 0x8f6650f8
        __stack_chk_fail();
        // branch -> 0x8f6650fc
    }
    // 0x8f6650fc
    g26 = v3;
    g27 = v4;
    g28 = v5;
    g29 = v6;
    g30 = v7;
    g20 = v8;
    g21 = v9;
    return 3;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int rand(void);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strcat(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:29:08
