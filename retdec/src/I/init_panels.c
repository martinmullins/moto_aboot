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

// Address range: 0x8f618908 - 0x8f6190e7
int32_t init_panels(void) {
    int32_t v1 = g52; // 0x8f61890c
    int32_t v2 = g54; // 0x8f61890c
    int32_t v3 = g55; // 0x8f61890c
    int16_t * v4 = g41;
    int32_t result = (int32_t)v4;
    int32_t v5 = mbm_fdt_find_node((int32_t)"panels", g47, g50); // 0x8f618920
    int32_t v6 = v5; // R8
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    if (v5 > -1) {
        int32_t v15 = get_int_prop((int32_t)"panel_count", v5, (int32_t)&v7, result, v9, v8, 0); // 0x8f618948
        if (v15 == 0) {
            int32_t v16 = get_int_prop((int32_t)"auto_detect", v6, (int32_t)&v14, result, v9, v8, 0); // 0x8f618960
            if (v16 == 0) {
                int32_t v17 = v7; // 0x8f61896c
                int32_t v18 = v17; // R2
                if (v17 > 0) {
                    uint32_t v19 = v14; // 0x8f618988
                    int32_t v20 = v17; // 0x8f6189a0
                    if (v19 >= 1) {
                        int32_t v21 = panel_manager_auto_detect_on(0, v6, v17, v19); // 0x8f618994
                        v18 = v21;
                        v20 = v21;
                        // branch -> 0x8f618998
                    }
                    // 0x8f618998
                    g55 = 0;
                    int32_t v22 = panel_manager_set_cont_splash(get_bool_prop((int32_t)"cont-splash-enabled", v6, v20), v6, v18, v19); // 0x8f6189a8
                    int32_t v23 = panel_manager_set_panel_hbm_feat(get_bool_prop((int32_t)"hbm-disabled", v6, v22) % 256 ^ 1, v6, v22, v19); // 0x8f6189c0
                    int32_t v24 = &v13; // 0x8f618a60_0
                    int32_t v25 = g55;
                    int32_t v26 = v7; // 0x8f6189c460
                    int32_t v27 = v26; // R3
                    if (v25 < v26) {
                        int32_t v28 = v8; // 0x8f618f7c1263
                        while (true) {
                            int32_t v29 = get_panel_offset_by_index(v6, v25, v23, v26, v9, v28, 0, v26, v14); // 0x8f6189d8
                            int32_t v30; // 0x8f618f7c10
                            int32_t v31;
                            if (v29 == -1) {
                                // if_8f6189e4_0_true
                                // branch -> 0x8f618f90
                            } else {
                                int32_t str = get_string_prop((int32_t)"type", v29, v23, v27, v9, v28, 0, v7); // 0x8f6189f8
                                g54 = str;
                                if (str == 0) {
                                    // 0x8f618a08
                                    // branch -> 0x8f618f90
                                } else {
                                    // 0x8f618a18
                                    g52 = &g21;
                                    v27 = &g22;
                                    int32_t strcmp_rc = strcmp((char *)str, (char *)((int32_t)&g21 + 8)); // 0x8f618a2055
                                    int32_t v32 = strcmp_rc; // R10
                                    if (strcmp_rc != 0) {
                                        while (true) {
                                            int32_t v33 = g52; // 0x8f618a2c
                                            int32_t v34 = v33 + 588; // 0x8f618a2c
                                            g52 = v34;
                                            v27 = &g22;
                                            if (v34 == (int32_t)&g22) {
                                                int32_t v35 = (int32_t)"Not support panel type %s\n"; // 0x8f618f90
                                                // branch -> 0x8f618f90
                                              lab_0x8f618f90:
                                                // 0x8f618f90
                                                print_log(1, v35, g54, v27, v31, 0, 0, 0, 0, 0, 0, 0, 0);
                                                v30 = v28;
                                                // branch -> 0x8f618f94
                                              lab_0x8f618f94_3:;
                                                int32_t v36 = g55 + 1; // 0x8f618f94
                                                g55 = v36;
                                                int32_t v37 = v7; // 0x8f6189c4
                                                v27 = v37;
                                                if (v36 < v37) {
                                                  lab_0x8f618f94_4:
                                                    // 0x8f618f94
                                                    v28 = v30;
                                                    // branch -> 0x8f6189d0
                                                    break;
                                                }
                                                // 0x8f618f9c
                                                if (v4 != g41) {
                                                    // 0x8f618fb0
                                                    __stack_chk_fail();
                                                    // branch -> 0x8f618fb4
                                                }
                                                // 0x8f618fb4
                                                g52 = v1;
                                                g54 = v2;
                                                g55 = v3;
                                                return result;
                                            }
                                            int32_t strcmp_rc2 = strcmp((char *)g54, (char *)(v33 + 596)); // 0x8f618a20
                                            v32 = strcmp_rc2;
                                            if (strcmp_rc2 == 0) {
                                                // break -> 0x8f618a40
                                                break;
                                            }
                                            // continue -> 0x8f618a2c
                                            continue;
                                        }
                                    }
                                    // 0x8f618a40
                                    print_log(1, (int32_t)"create panel for %s...\n", g54, v27, v9, v28, 0, v7, v14, v13, v12, v11, v10);
                                    int32_t v38 = v32; // 0x8f618a60
                                    v13 = v38;
                                    print_log(2, (int32_t)"%s is called\n", (int32_t)"create_mipi_mot_panel", v27, v9, v28, 0, v7, v14, v38, v12, v11, v10);
                                    get_int_prop((int32_t)"reserved_column", v29, v24, v27, v9, v28, 0);
                                    int32_t v39 = v13; // 0x8f618a78
                                    v27 = v39;
                                    *(int32_t *)(g52 + 100) = v39;
                                    int32_t v40 = get_subnode_offset((int32_t)"backlight_setting", v29, v24, v27); // 0x8f618a88
                                    v32 = v40;
                                    if (v40 < 0) {
                                        goto lab_if_8f618a90_0_true;
                                    }
                                    goto lab_0x8f618a9c;
                                }
                                // 0x8f618f90
                                print_log(1, (int32_t)"Invalid setting for panel@%d\n", g55, v27, v31, 0, 0, 0, 0, 0, 0, 0, 0);
                                v30 = v28;
                                // branch -> 0x8f618f94
                                goto lab_0x8f618f94_6;
                            }
                            // 0x8f618f90
                            print_log(2, (int32_t)"Not found panel@%d, ignore\n", g55, v27, v31, 0, 0, 0, 0, 0, 0, 0, 0);
                            v30 = v28;
                            // branch -> 0x8f618f94
                            goto lab_0x8f618f94_6;
                        }
                    }
                } else {
                    // 0x8f618978
                    // branch -> 0x8f618980
                    // 0x8f618980
                    print_log(1, (int32_t)"Invalid panel count: %d\n", v17, result, v9, v8, 0, v17, v14, v13, v12, v11, v10);
                    // branch -> 0x8f618f9c
                }
                // 0x8f618f9c
                if (v4 != g41) {
                    // 0x8f618fb0
                    __stack_chk_fail();
                    // branch -> 0x8f618fb4
                }
                // 0x8f618fb4
                g52 = v1;
                g54 = v2;
                g55 = v3;
                return result;
            }
        }
    }
    // 0x8f61892c
    // branch -> 0x8f618980
    // 0x8f618980
    print_log(1, (int32_t)"Error: DT settings for \"%s\" missing or incomplete\n", (int32_t)"panels", result, v9, v8, 0, v7, v14, v13, v12, v11, v10);
    // branch -> 0x8f618f9c
    // 0x8f618f9c
    if (v4 != g41) {
        // 0x8f618fb0
        __stack_chk_fail();
        // branch -> 0x8f618fb4
    }
    // 0x8f618fb4
    g52 = v1;
    g54 = v2;
    g55 = v3;
    return result;
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