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

int32_t arch_early_init(void);
int32_t boot_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t boot_linux(int32_t (*a1)(int32_t, int32_t, int32_t), int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t disable_charger_gone_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t enable_charger_gone_irq(int32_t a1, int32_t a2);
void function_8f64b730(void);
void function_8f64b7f0(char * str, char * delim, int32_t a3);
int32_t hab_policy_init(void);
int32_t init_barcodes(int32_t a1, int32_t a2, int32_t a3);
int32_t init_panels(void);
int32_t is_like_hab_signature(char * a1, int32_t a2, int32_t a3);
int32_t is_warranty_void(int32_t a1);
int32_t load_and_validate_logo(void);
int32_t LZ4_decompress_safe(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5);
int32_t LZ4_decompress_safe_withPrefix64k(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mcs_habp_rsa_crt_core(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t mcs_habp_rsa_crt_med(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_mot_get_manufacture_id(int32_t * a1, int32_t a2, int32_t a3);
int32_t mipi_mot_get_supplier_id(int32_t * a1, int32_t a2, int32_t a3);
char * mmc_sd_set_bus_width(char * a1, int32_t * a2, int32_t a3);
char * mmc_sd_set_hs(char * a1);
int32_t move_to_verified(int32_t a1, int32_t a2, int32_t a3);
int32_t qup_i2c_sec_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t qup_i2c_xfer(int32_t a1);
int32_t radio_from_utag(int32_t a1, int32_t a2, int32_t a3);
char * restore_secure_cfg(int32_t a1, int32_t a2);
int32_t scm_init(int32_t a1);
int32_t screen_manager_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t show(char * a1, int32_t a2, int32_t a3);
int32_t target_hwrev(void);

// --------------------- Global Variables ---------------------

int32_t g45 = 0; // LR
int32_t g46 = 0; // R0
int32_t g47 = 0; // R1
int32_t g48 = 0; // R11
int32_t g49 = 0; // R12
int32_t g50 = 0; // R2
int32_t g51 = 0; // R3
int32_t g52 = 0; // R4
int32_t g53 = 0; // R5
int32_t g54 = 0; // R6
int32_t g55 = 0; // R7
int32_t g56 = 0; // R8
int32_t g57 = 0; // R9
int32_t g1 = -0x15fffffa; // 0x8f600000
int32_t g2 = -0x1a60cef8; // 0x8f612228
int32_t g3 = -0x1a60ceec; // 0x8f6383f0
int32_t g4 = -0x16d2bfc9; // 0x8f6387c0
int32_t g5 = -0x16d2bc09; // 0x8f638ab0
int32_t g6 = -0x1a60ff98; // 0x8f638b94
int32_t g7 = -0x16d2bfc9; // 0x8f64587c
char * g8 = "\xff\xff\xff\xff\x6c\x6f\x61\x64\x5f\x61\x6e\x64\x5f\x76\x61\x6c\x69\x64\x61\x74\x65\x5f\x6b\x65\x72\x6e\x65\x6c\x5f\x69\x6d\x61\x67\x65"; // 0x8f6826be
int32_t g9 = 0x65440030; // 0x8f69c66f
int32_t g10 = 0; // 0x8f6a3f38
int32_t g11 = 1; // 0x8f6ac0f0
int32_t g12 = -0x709c73f8; // 0x8f6ac374
int32_t g13 = 0xffff; // 0x8f6acae4
int32_t g14 = 4; // 0x8f6acaf4
int32_t g15 = 0xffff; // 0x8f6acb2c
int32_t g16 = 4; // 0x8f6acb84
int32_t g17 = 0; // 0x8f6b0048
int32_t g18 = 0; // 0x8f6b004c
int32_t g19 = 0; // 0x8f6b0074
int32_t g20 = 0; // 0x8f6b0078
int32_t g21 = 0; // 0x8f6b015c
int32_t g22 = 0; // 0x8f6b1608
int32_t g23 = 0; // 0x8f6b7cc0
int32_t g24 = 0; // 0x8f6c0000
int32_t g25 = 0; // 0x8f6c02aa
int32_t g26 = 0; // 0x8f6c02ba
int32_t g27 = 0; // 0x8f6c02ca
int32_t g28 = 0; // 0x8f6c02e0
int32_t g29 = 0; // 0x8f6e082c
char * g30; // 0x8f6e0849
int32_t g31 = 0; // 0x8f6e0854
int32_t g32 = 0; // 0x8f6e0858
int32_t g33 = 0; // 0x8f6e085c
int32_t g34 = 0; // 0x8f6e0878
int32_t g35 = 0; // 0x8f6e0894
int32_t g36 = 0; // 0x8f6e08b0
int32_t g37 = 0; // 0x8f6e08b4
char ** g38 = NULL; // 0x8f6e0bf8
int32_t g39 = 0; // 0x8f710c30
int32_t g40 = 0; // 0x8f710c34
int16_t * g41 = NULL; // 0x8f7112f4
int32_t g42 = 0; // 0x8f7114b8
int32_t g43 = 0; // 0x8f71302c
int32_t g44 = 0; // 0x8f713044

// ------------------------ Functions -------------------------

// Address range: 0x8f657e68 - 0x8f65826f
int32_t LZ4_decompress_safe(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = (int32_t)a2;
    int32_t v3 = g52; // 0x8f657e68
    int32_t v4 = g54; // 0x8f657e68
    int32_t v5 = g55; // 0x8f657e68
    int32_t v6 = v2; // R8
    int16_t * v7 = g41;
    int32_t v8 = v1 + a3; // 0x8f657e8c
    g54 = v8;
    int32_t v9 = v2 + a4; // 0x8f657e90
    g55 = v9;
    g52 = &g10;
    int32_t result;
    if (a4 == 0) {
        // 0x8f657ee4
        if (a3 == 1) {
            char v10 = *a1; // 0x8f657eec
            result = v10 == 0 ? (int32_t)v10 : -1;
            // branch -> 0x8f658248
        } else {
            // 0x8f658244
            result = -1;
            // branch -> 0x8f658248
        }
        // 0x8f658248
        if (v7 != g41) {
            // 0x8f65825c
            __stack_chk_fail();
            // branch -> 0x8f658260
        }
        // 0x8f658260
        g52 = v3;
        g54 = v4;
        g55 = v5;
        return result;
    }
    uint32_t v11 = v9 - 12; // 0x8f657eb4
    int32_t v12 = v9 - 8; // R10
    int32_t v13;
    int32_t v14 = &v13; // 0x8f658004_0
    // branch -> 0x8f658110
    while (true) {
        int32_t v15 = (int32_t)*(char *)v1; // 0x8f658110
        int32_t v16 = v1 + 1; // 0x8f658114
        int32_t v17 = v16; // 0x8f65813c
        int32_t v18 = v15 / 16; // 0x8f658140
        uint32_t v19; // 0x8f657f18
        int32_t v20; // 0x8f657f20
        if ((v15 & -16) == 240) {
            // if_8f658120_0_true
            if (v16 < g54) {
                int32_t v21 = 15; // 0x8f657f08
                int32_t v22 = v16; // 0x8f657f04
                int32_t v23 = 255; // 0x8f657efc
                while (true) {
                    // 0x8f657efc
                    if (v23 == 255) {
                        int32_t v24 = v22 + 1; // 0x8f657f04
                        int32_t v25 = (int32_t)*(char *)v22; // 0x8f657f04
                        int32_t v26 = v25 + v21; // 0x8f657f08
                        if (v24 >= g54) {
                            v17 = v24;
                            v18 = v26;
                            // break -> 0x8f657f14
                            break;
                        }
                        v21 = v26;
                        v22 = v24;
                        v23 = v25;
                        // continue -> 0x8f657efc
                        continue;
                    } else {
                        v17 = v22;
                        v18 = v21;
                    }
                }
                // 0x8f657f14
                v19 = v18 + v2;
                g52 = v19;
                v20 = v18 + v17;
                if (v19 <= v11) {
                  lab_0x8f657f28:
                    // 0x8f657f28
                    if (v20 <= v8 - 8) {
                        int32_t v27 = v2; // 0x8f657f38
                        int32_t v28 = v17; // 0x8f657f3c
                        while (true) {
                            char v29 = *(char *)(v28 + 1); // 0x8f657f34
                            result = v27 + 8;
                            char v30 = *(char *)v28; // 0x8f657f3c
                            int32_t v31 = v28 + 8; // R12
                            char v32 = *(char *)(v28 + 2); // 0x8f657f48
                            char v33 = *(char *)(v28 + 3); // 0x8f657f50
                            int32_t v34 = 0x1000000 * (int32_t)v33 | 0x10000 * (int32_t)v32 | (int32_t)v30 | 256 * (int32_t)v29; // R3
                            *(char *)v27 = v30;
                            *(char *)(result - 7) = (char)(v34 / 256);
                            uint32_t v35 = v34; // 0x8f657f64
                            *(char *)(result - 6) = (char)(v35 / 0x10000);
                            *(char *)(result - 5) = (char)(v35 / 0x1000000);
                            int32_t v36 = v31; // 0x8f657f74
                            char v37 = *(char *)(v36 - 3); // 0x8f657f74
                            char v38 = *(char *)(v36 - 4); // 0x8f657f78
                            char v39 = *(char *)(v36 - 2); // 0x8f657f80
                            char v40 = *(char *)(v36 - 1); // 0x8f657f88
                            v34 = 0x1000000 * (int32_t)v40 | 0x10000 * (int32_t)v39 | (int32_t)v38 | 256 * (int32_t)v37;
                            *(char *)(result - 4) = v38;
                            *(char *)(result - 3) = (char)(v34 / 256);
                            uint32_t v41 = v34; // 0x8f657f9c
                            *(char *)(result - 2) = (char)(v41 / 0x10000);
                            *(char *)(result - 1) = (char)(v41 / 0x1000000);
                            uint32_t v42 = g52; // 0x8f657fac
                            int32_t v43 = result; // 0x8f657fac
                            if (v43 >= v42) {
                                int32_t v44 = v31 - (v43 - v42); // 0x8f657fb8
                                int32_t v45 = v44 + 2; // 0x8f657fbc
                                v31 = v45;
                                char v46 = *(char *)(v44 + 1); // 0x8f657fc0
                                int32_t v47 = (int32_t)*(char *)v44 | 256 * (int32_t)v46; // 0x8f657fc8
                                int32_t v48 = v42 - v47; // 0x8f657fcc
                                int32_t v49 = v48; // R2
                                if (v48 >= v6) {
                                    int32_t v50 = v15 % 16; // 0x8f657fd8
                                    int32_t v51 = v50; // R1
                                    if (v50 == 15) {
                                        // 0x8f65814c
                                        if (v45 >= v8 - 6) {
                                            // 0x8f657fe0
                                            v31 = v44 + 3;
                                            v51 = (int32_t)*(char *)v45 + 15;
                                            // branch -> 0x8f657fe4
                                        }
                                    }
                                    // 0x8f657fe4
                                    result = v42 + 4;
                                    char v52 = *(char *)v48; // 0x8f657ff0
                                    if (v47 > 3) {
                                        char v53 = *(char *)(v48 + 1); // 0x8f658168
                                        v49 = v48 + 4;
                                        char v54 = *(char *)(v48 + 2); // 0x8f658174
                                        char v55 = *(char *)(v48 + 3); // 0x8f65817c
                                        v34 = 0x1000000 * (int32_t)v55 | 0x10000 * (int32_t)v54 | 256 * (int32_t)v53 | (int32_t)v52;
                                        *(char *)v42 = v52;
                                        *(char *)(g52 + 1) = (char)(v34 / 256);
                                        uint32_t v56 = v34; // 0x8f658190
                                        *(char *)(g52 + 2) = (char)(v56 / 0x10000);
                                        *(char *)(g52 + 3) = (char)(v56 / 0x1000000);
                                        v34 = result;
                                        // branch -> 0x8f65806c
                                    } else {
                                        // 0x8f657ff8
                                        *(char *)v42 = v52;
                                        int32_t v57 = v49; // 0x8f657ffc
                                        int32_t v58 = v57 + 4; // R9
                                        *(char *)(g52 + 1) = *(char *)(v57 + 1);
                                        *(char *)(g52 + 2) = *(char *)(v49 + 2);
                                        *(char *)(g52 + 3) = *(char *)(v49 + 3);
                                        v34 = result;
                                        int32_t v59 = *(int32_t *)(4 * (result - v58) + v14 - 36); // 0x8f658028
                                        int32_t v60 = v58 - v59; // 0x8f658030
                                        v49 = v60;
                                        char v61 = *(char *)v60; // 0x8f658034
                                        char v62 = *(char *)(v60 + 1); // 0x8f658038
                                        char v63 = *(char *)(v60 + 2); // 0x8f658040
                                        char v64 = *(char *)(v60 + 3); // 0x8f658048
                                        v58 = 0x1000000 * (int32_t)v64 | 0x10000 * (int32_t)v63 | 256 * (int32_t)v62 | (int32_t)v61;
                                        *(char *)(g52 + 4) = v61;
                                        *(char *)(g52 + 5) = (char)(v58 / 256);
                                        *(char *)(g52 + 6) = (char)(v58 / 0x10000);
                                        *(char *)(g52 + 7) = (char)(v58 / 0x1000000);
                                        // branch -> 0x8f65806c
                                    }
                                    uint32_t v65 = v51 + result; // 0x8f65806c
                                    result = v65;
                                    if (v65 > v12) {
                                        // 0x8f658078
                                        if (v65 > v9 - 5) {
                                            // 0x8f658078
                                            // branch -> 0x8f658238
                                        } else {
                                            int32_t v66 = v34; // 0x8f658088
                                            int32_t v67 = v49; // 0x8f658084
                                            int32_t v68 = (int32_t)*(char *)(v67 + 1); // 0x8f658084
                                            g52 = v68;
                                            v34 = v66 + 8;
                                            char v69 = *(char *)v67; // 0x8f65808c
                                            v49 = v67 + 8;
                                            int32_t v70 = (int32_t)*(char *)(v67 + 2); // 0x8f658098
                                            g52 = v70;
                                            char v71 = *(char *)(v67 + 3); // 0x8f6580a0
                                            v51 = 0x1000000 * (int32_t)v71 | 0x10000 * v70 | (int32_t)v69 | 256 * v68;
                                            *(char *)v66 = v69;
                                            *(char *)(v34 - 7) = (char)(v51 / 256);
                                            uint32_t v72 = v51; // 0x8f6580b4
                                            uint32_t v73 = v72 / 0x10000; // 0x8f6580b4
                                            g52 = v73 % 256;
                                            *(char *)(v34 - 6) = (char)v73;
                                            *(char *)(v34 - 5) = (char)(v72 / 0x1000000);
                                            int32_t v74 = v49; // 0x8f6580c4
                                            int32_t v75 = (int32_t)*(char *)(v74 - 3); // 0x8f6580c4
                                            g52 = v75;
                                            char v76 = *(char *)(v74 - 4); // 0x8f6580c8
                                            int32_t v77 = (int32_t)*(char *)(v74 - 2); // 0x8f6580d0
                                            g52 = v77;
                                            char v78 = *(char *)(v74 - 1); // 0x8f6580d8
                                            v51 = 0x1000000 * (int32_t)v78 | 0x10000 * v77 | (int32_t)v76 | 256 * v75;
                                            *(char *)(v34 - 4) = v76;
                                            *(char *)(v34 - 3) = (char)(v51 / 256);
                                            uint32_t v79 = v51; // 0x8f6580ec
                                            uint32_t v80 = v79 / 0x10000; // 0x8f6580ec
                                            g52 = v80 % 256;
                                            *(char *)(v34 - 2) = (char)v80;
                                            *(char *)(v34 - 1) = (char)(v79 / 0x1000000);
                                            int32_t v81 = v34; // 0x8f6580fc
                                            // branch -> 0x8f658084
                                            while (v81 < v12) {
                                                // 0x8f658084
                                                v66 = v81;
                                                v67 = v49;
                                                v68 = (int32_t)*(char *)(v67 + 1);
                                                g52 = v68;
                                                v34 = v66 + 8;
                                                v69 = *(char *)v67;
                                                v49 = v67 + 8;
                                                v70 = (int32_t)*(char *)(v67 + 2);
                                                g52 = v70;
                                                v71 = *(char *)(v67 + 3);
                                                v51 = 0x1000000 * (int32_t)v71 | 0x10000 * v70 | (int32_t)v69 | 256 * v68;
                                                *(char *)v66 = v69;
                                                *(char *)(v34 - 7) = (char)(v51 / 256);
                                                v72 = v51;
                                                v73 = v72 / 0x10000;
                                                g52 = v73 % 256;
                                                *(char *)(v34 - 6) = (char)v73;
                                                *(char *)(v34 - 5) = (char)(v72 / 0x1000000);
                                                v74 = v49;
                                                v75 = (int32_t)*(char *)(v74 - 3);
                                                g52 = v75;
                                                v76 = *(char *)(v74 - 4);
                                                v77 = (int32_t)*(char *)(v74 - 2);
                                                g52 = v77;
                                                v78 = *(char *)(v74 - 1);
                                                v51 = 0x1000000 * (int32_t)v78 | 0x10000 * v77 | (int32_t)v76 | 256 * v75;
                                                *(char *)(v34 - 4) = v76;
                                                *(char *)(v34 - 3) = (char)(v51 / 256);
                                                v79 = v51;
                                                v80 = v79 / 0x10000;
                                                g52 = v80 % 256;
                                                *(char *)(v34 - 2) = (char)v80;
                                                *(char *)(v34 - 1) = (char)(v79 / 0x1000000);
                                                v81 = v34;
                                                // continue -> 0x8f658084
                                            }
                                            int32_t v82 = result; // 0x8f65810418
                                            if (v81 < v82) {
                                                int32_t v83; // 0x8f658104
                                                for (int32_t i = v81; i < v83; i++) {
                                                    int32_t v84 = v49; // 0x8f6581a8
                                                    v49 = v84 + 1;
                                                    *(char *)i = *(char *)v84;
                                                    v83 = result;
                                                    // continue -> 0x8f6581a8
                                                }
                                                // 0x8f65810c
                                                v2 = v83;
                                                // branch -> 0x8f658110
                                                break;
                                            }
                                            // 0x8f65810c
                                            v2 = v82;
                                            // branch -> 0x8f658110
                                            break;
                                        }
                                        // 0x8f658238
                                        // branch -> 0x8f658248
                                        // 0x8f658248
                                        if (v7 != g41) {
                                            // 0x8f65825c
                                            __stack_chk_fail();
                                            // branch -> 0x8f658260
                                        }
                                        // 0x8f658260
                                        g52 = v3;
                                        g54 = v4;
                                        g55 = v5;
                                        return v1 - v31 - 1;
                                    }
                                    int32_t v85 = v34; // 0x8f6581b8
                                    int32_t v86 = v49; // 0x8f6581b4
                                    int32_t v87 = (int32_t)*(char *)(v86 + 1); // 0x8f6581b4
                                    g52 = v87;
                                    v34 = v85 + 8;
                                    char v88 = *(char *)v86; // 0x8f6581bc
                                    v49 = v86 + 8;
                                    int32_t v89 = (int32_t)*(char *)(v86 + 2); // 0x8f6581c8
                                    g52 = v89;
                                    char v90 = *(char *)(v86 + 3); // 0x8f6581d0
                                    v51 = 0x1000000 * (int32_t)v90 | 0x10000 * v89 | (int32_t)v88 | 256 * v87;
                                    *(char *)v85 = v88;
                                    *(char *)(v34 - 7) = (char)(v51 / 256);
                                    uint32_t v91 = v51; // 0x8f6581e4
                                    uint32_t v92 = v91 / 0x10000; // 0x8f6581e4
                                    g52 = v92 % 256;
                                    *(char *)(v34 - 6) = (char)v92;
                                    *(char *)(v34 - 5) = (char)(v91 / 0x1000000);
                                    int32_t v93 = v49; // 0x8f6581f4
                                    int32_t v94 = (int32_t)*(char *)(v93 - 3); // 0x8f6581f4
                                    g52 = v94;
                                    char v95 = *(char *)(v93 - 4); // 0x8f6581f8
                                    int32_t v96 = (int32_t)*(char *)(v93 - 2); // 0x8f658200
                                    g52 = v96;
                                    char v97 = *(char *)(v93 - 1); // 0x8f658208
                                    v51 = 0x1000000 * (int32_t)v97 | 0x10000 * v96 | (int32_t)v95 | 256 * v94;
                                    *(char *)(v34 - 4) = v95;
                                    *(char *)(v34 - 3) = (char)(v51 / 256);
                                    uint32_t v98 = v51 / 0x10000; // 0x8f65821c
                                    g52 = v98 % 256;
                                    *(char *)(v34 - 2) = (char)v98;
                                    *(char *)(v34 - 1) = (char)(v51 / 0x1000000);
                                    int32_t v99 = result; // 0x8f65822c
                                    // branch -> 0x8f6581b4
                                    while (v34 < v99) {
                                        // 0x8f6581b4
                                        v85 = v34;
                                        v86 = v49;
                                        v87 = (int32_t)*(char *)(v86 + 1);
                                        g52 = v87;
                                        v34 = v85 + 8;
                                        v88 = *(char *)v86;
                                        v49 = v86 + 8;
                                        v89 = (int32_t)*(char *)(v86 + 2);
                                        g52 = v89;
                                        v90 = *(char *)(v86 + 3);
                                        v51 = 0x1000000 * (int32_t)v90 | 0x10000 * v89 | (int32_t)v88 | 256 * v87;
                                        *(char *)v85 = v88;
                                        *(char *)(v34 - 7) = (char)(v51 / 256);
                                        v91 = v51;
                                        v92 = v91 / 0x10000;
                                        g52 = v92 % 256;
                                        *(char *)(v34 - 6) = (char)v92;
                                        *(char *)(v34 - 5) = (char)(v91 / 0x1000000);
                                        v93 = v49;
                                        v94 = (int32_t)*(char *)(v93 - 3);
                                        g52 = v94;
                                        v95 = *(char *)(v93 - 4);
                                        v96 = (int32_t)*(char *)(v93 - 2);
                                        g52 = v96;
                                        v97 = *(char *)(v93 - 1);
                                        v51 = 0x1000000 * (int32_t)v97 | 0x10000 * v96 | (int32_t)v95 | 256 * v94;
                                        *(char *)(v34 - 4) = v95;
                                        *(char *)(v34 - 3) = (char)(v51 / 256);
                                        v98 = v51 / 0x10000;
                                        g52 = v98 % 256;
                                        *(char *)(v34 - 2) = (char)v98;
                                        *(char *)(v34 - 1) = (char)(v51 / 0x1000000);
                                        v99 = result;
                                        // continue -> 0x8f6581b4
                                    }
                                    // 0x8f65810c
                                    v2 = v99;
                                    // branch -> 0x8f658110
                                    break;
                                }
                                // 0x8f658238
                                // branch -> 0x8f658248
                                // 0x8f658248
                                if (v7 != g41) {
                                    // 0x8f65825c
                                    __stack_chk_fail();
                                    // branch -> 0x8f658260
                                }
                                // 0x8f658260
                                g52 = v3;
                                g54 = v4;
                                g55 = v5;
                                return v1 - v45 - 1;
                            }
                            // 0x8f657f34
                            v27 = v43;
                            v28 = v31;
                            // branch -> 0x8f657f34
                        }
                    }
                }
                // 0x8f65812c
                if (g54 != v20 || v19 > g55) {
                    // 0x8f658238
                    result = v1 - v17 - 1;
                    // branch -> 0x8f658248
                } else {
                    // 0x8f65813c
                    memcpy((char *)v2, (char *)v17, v18);
                    result = g52 - v6;
                    // branch -> 0x8f658248
                }
                // 0x8f658248
                if (v7 != g41) {
                    // 0x8f65825c
                    __stack_chk_fail();
                    // branch -> 0x8f658260
                }
                // 0x8f658260
                g52 = v3;
                g54 = v4;
                g55 = v5;
                return result;
            }
            v17 = v16;
            v18 = 15;
        }
        // 0x8f657f14
        v19 = v18 + v2;
        g52 = v19;
        v20 = v18 + v17;
        if (v19 <= v11) {
            goto lab_0x8f657f28;
        }
        // 0x8f65812c
        if (g54 != v20 || v19 > g55) {
            // 0x8f658238
            result = v1 - v17 - 1;
            // branch -> 0x8f658248
        } else {
            // 0x8f65813c
            memcpy((char *)v2, (char *)v17, v18);
            result = g52 - v6;
            // branch -> 0x8f658248
        }
        // 0x8f658248
        if (v7 != g41) {
            // 0x8f65825c
            __stack_chk_fail();
            // branch -> 0x8f658260
        }
        // 0x8f658260
        g52 = v3;
        g54 = v4;
        g55 = v5;
        return result;
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// void free(void * ptr);
// int isdigit(int c);
// int isxdigit(int c);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);
// int tolower(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:19:08
