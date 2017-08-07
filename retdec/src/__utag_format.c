//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int32_t __utag_define(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t __utag_format(char * a1, int32_t a2, char * a3, int32_t a4, int32_t a5);
int32_t charger_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t cid_get_cid_data(char * a1);
int32_t dbval_pal_get_primary_serial_number(int32_t a1, int32_t a2);
char * dbval_read_cid_datablock_template(char * a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t dbval_read_processor_uid(char * a1, int32_t * a2, int32_t a3);
int32_t dbval_write_datablock(int32_t a1, int32_t a2, uint32_t a3);
int32_t dpc_queue(int32_t a1, int32_t a2, int32_t a3);
int32_t event_init(int32_t * a1, char a2, int32_t a3);
int32_t fdt_getprop(int32_t a1, int32_t a2, char * str);
int32_t fdt_getprop_namelen(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
void function_8f64b6a0(void);
void function_8f64b730(char * a1, char * a2, int32_t * a3);
int32_t is_charger_mode(char * a1, int32_t a2);
int32_t is_ever_unlocked(int32_t a1, int32_t a2);
int32_t is_key_connected(int32_t a1);
int32_t isl98611_read_reg(int32_t a1, int32_t a2);
int32_t isl98611_write_reg(int32_t a1, int32_t a2);
int32_t max17050_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_ctx_init_hash(char a1, char * a2);
int32_t mcs_habp_rsa_large_window(int32_t a1);
int32_t mdss_fbc_cfg(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_layer_mixer_setup(int32_t a1, int32_t a2);
int32_t pm8x41_kpdpwr_s2_reset_disable(int32_t a1, int32_t a2);
int32_t pm8x41_lvs_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t regex_match(char * regex, char * str);
int32_t set_state_values_for_nonhlos(int32_t a1, int32_t a2);
int32_t sod_ramdump_disable(void);
int32_t sod_share(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g16 = 0; // LR
int32_t g17 = 0; // R0
int32_t g18 = 0; // R1
int32_t g19 = 0; // R10
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g27 = 0; // R9
char * g1 = "\x45\x23\x01\xef\xcd\xab\x89\x98\xba\xdc\xfe\x10\x32\x54\x76\xc3\xd2\xe1\xf0"; // 0x8f6a69eb
int32_t g2 = 0x45230100; // 0x8f6a69ff
int32_t g3; // 0x8f6ac0e8
int32_t g4 = 1; // 0x8f6ac0f0
char * g5 = "\n"; // 0x8f6ac1b0
int32_t g6 = 0; // 0x8f6c0044
int32_t g7 = 0; // 0x8f6e0ae8
char * g8; // 0x8f6e0aec
char * g9; // 0x8f6e0b34
int32_t g10 = 0; // 0x8f6e0b48
char * g11; // 0x8f70da97
int32_t g12 = 0; // 0x8f70da98
char * g13; // 0x8f70da99
int32_t g14 = 0; // 0x8f70da9a
int32_t g15 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f67a78c - 0x8f67ab87
int32_t __utag_format(char * a1, int32_t a2, char * a3, int32_t a4, int32_t a5) {
    // 0x8f67a78c
    int32_t v1;
    char * v2 = (char *)v1;
    int32_t v3 = (int32_t)a1;
    int32_t v4 = (int32_t)a3;
    int32_t v5 = v4; // R2
    int32_t v6 = g22; // 0x8f67a78c
    int32_t v7 = g23; // 0x8f67a78c
    int32_t v8 = g24; // 0x8f67a78c
    int32_t v9 = g25; // 0x8f67a78c
    int32_t v10 = g26; // 0x8f67a78c
    int32_t v11 = g27; // 0x8f67a78c
    int32_t v12 = g19; // 0x8f67a78c
    g24 = a4;
    g27 = &g15;
    int32_t v13 = g16; // R11
    g23 = v3;
    g22 = a2;
    g25 = v4;
    int32_t v14 = g15;
    int32_t result2 = get_utags(v3, a2, v4); // R10
    int32_t v15 = __utag_exists(g23, g22, v5, v14); // 0x8f67a7c4
    int32_t result; // R6
    if (v15 == 0) {
        // if_8f67a7cc_0_true
        result = 2;
        // branch -> 0x8f67ab38
    } else {
        // 0x8f67a7d4
        g26 = &g4;
        int32_t v16 = g4;
        g4 = v16 + 1;
        if (v16 == 0) {
            // 0x8f67a7ec
            function_8f619448(v15);
            // branch -> 0x8f67a7f0
        }
        int32_t v17 = result2; // 0x8f67a7f0
        int32_t v18 = *(int32_t *)(v17 + 60); // 0x8f67a7f0
        int32_t v19 = v18; // R3
        int32_t v20 = v17 + 56; // 0x8f67a7f4
        g19 = v20;
        int32_t v21; // 0x8f67a854
        char * v22; // 0x8f67a884
        int32_t v23; // 0x8f67a8c4
        int32_t v24; // 0x8f67a8e0
        int32_t v25; // 0x8f67a938
        int32_t v26; // 0x8f67a954
        int32_t v27; // 0x8f67a984
        int32_t v28; // 0x8f67a9a0
        int32_t v29; // 0x8f67a9ec
        int32_t v30; // 0x8f67aa20
        int32_t v31; // 0x8f67aa3c
        int32_t v32; // 0x8f67aa98
        uint32_t v33; // 0x8f67aae4
        int32_t v34; // 0x8f67aaf4
        int32_t v35;
        int32_t v36;
        int32_t v37;
        int32_t v38;
        int32_t v39;
        int32_t v40;
        char * v41;
        int32_t v42;
        int32_t v43;
        int32_t v44;
        int32_t v45;
        int32_t v46;
        int32_t v47;
        int32_t v48; // 0x8f67aacc
        int32_t v49; // 0x8f67ab24
        int32_t v50; // 0x8f67a8e4
        int32_t v51; // 0x8f67a958
        int32_t v52; // 0x8f67aad4
        if (v18 != v20) {
            int32_t v53 = v18; // 0x8f67a844
            int32_t v54; // 0x8f67a844
            while (true) {
                // 0x8f67a800
                if (names_match(v53 + 8, g22, v5, v53) != 0) {
                    int32_t v55 = *(int32_t *)(v53 + 556); // 0x8f67a81c
                    if (v55 != 0) {
                        int32_t v56 = g24; // 0x8f67a828
                        g20 = v56;
                        int32_t v57 = g22; // 0x8f67a82c
                        g17 = v57;
                        int32_t v58 = g25; // 0x8f67a830
                        g18 = v58;
                        int32_t v59 = *(int32_t *)(v53 + 560); // 0x8f67a834
                        g21 = v59;
                        g16 = -0x709857c4;
                        ((int32_t (*)(int32_t, int32_t, int32_t, int32_t))v55)(v57, v58, v56, v59);
                        // branch -> 0x8f67ab20
                        // 0x8f67ab20
                        v49 = g4 - 1;
                        *(int32_t *)g26 = v49;
                        if (v49 == 0) {
                            // 0x8f67ab34
                            function_8f619438();
                            // branch -> 0x8f67ab38
                        }
                        // 0x8f67ab38
                        if (v14 != g15) {
                            // 0x8f67ab4c
                            __stack_chk_fail();
                            // branch -> 0x8f67ab50
                        }
                        // 0x8f67ab50
                        return g17;
                    }
                }
                // 0x8f67a844
                v54 = *(int32_t *)(v53 + 4);
                v19 = v54;
                if (v54 == g19) {
                    v38 = v53;
                    // break -> 0x8f67a84c
                    break;
                }
                v53 = v54;
                // continue -> 0x8f67a800
            }
            // 0x8f67a84c
            v21 = __find_first_utag(g23, g22, v5, v54, v1, v39, 0, v38, v37, v36, 0, v14, 0, v6);
            v41 = v2;
            if (v21 == 0) {
                // 0x8f67a860
                v5 = (int32_t)"lib/utags/utags.c";
                v19 = (int32_t)"utag" & -0x10000 | 1278;
                _panic(v13, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/utags/utags.c", (int32_t)"utag" & -0x10000 | 1278, (int32_t)"utag", v39, 0);
                v41 = "utag";
                // branch -> 0x8f67a87c
            }
            // 0x8f67a87c
            v22 = __utag_typeof(g23, g22, v5);
            switch ((int32_t)v22) {
                case 0: {
                    // 0x8f67aacc
                    v48 = g23;
                    v52 = g22;
                    if (v48 == 1) {
                        // 0x8f67aadc
                        v33 = __utag_gets_107(1, v52, g25, g24, (int32_t)v41, v39, 0, v38, v37, v36, 0, v14, 0, v6, v7, v8, v9, v10, v11, v12);
                        // branch -> 0x8f67ab20
                        // 0x8f67ab20
                        v49 = g4 - 1;
                        *(int32_t *)g26 = v49;
                        if (v49 == 0) {
                            // 0x8f67ab34
                            function_8f619438();
                            // branch -> 0x8f67ab38
                        }
                        // 0x8f67ab38
                        if (v14 != g15) {
                            // 0x8f67ab4c
                            __stack_chk_fail();
                            // branch -> 0x8f67ab50
                        }
                        // 0x8f67ab50
                        return v33 < 2 ? 1 - v33 : 0;
                    }
                    // 0x8f67aaf4
                    v34 = __utag_sizeof((char *)v48, v52, v5, v19, (int32_t)v41, v39, 0, v38, v37);
                    if (snprintf((char *)g25, g24, "%d bytes of raw data", v34) < g24) {
                        // if_8f67ab10_0_true
                        result = 0;
                        // branch -> 0x8f67ab20
                    } else {
                        // if_8f67ab14_0_true
                        result = 1;
                        // branch -> 0x8f67ab20
                    }
                    // 0x8f67ab20
                    v49 = g4 - 1;
                    *(int32_t *)g26 = v49;
                    if (v49 == 0) {
                        // 0x8f67ab34
                        function_8f619438();
                        // branch -> 0x8f67ab38
                    }
                    // 0x8f67ab38
                    if (v14 != g15) {
                        // 0x8f67ab4c
                        __stack_chk_fail();
                        // branch -> 0x8f67ab50
                    }
                    // 0x8f67ab50
                    return result;
                }
                case 1: {
                    // 0x8f67a8b4
                    result2 = 0;
                    v35 = 0;
                    v42 = (int32_t)v41;
                    v23 = __utag_sizeof((char *)g23, g22, v5, v19, v42, v39, 0, v38, v37);
                    if (v23 == 1) {
                        // 0x8f67a8d4
                        v24 = __utag_read((char *)g23, g22, (int32_t)&v35, 1, v42, v39, 0, v38, v37, v36, 0, v14, 0);
                        v50 = result2;
                        if (v24 != v50) {
                            // 0x8f67a8ec
                            v40 = 0x1000000 * v35 / 0x1000000 == v50 ? (int32_t)"false" : (int32_t)"true";
                            strlcpy(g25, v40, g24, (int32_t)"true", v42);
                            // branch -> 0x8f67a96c
                            // 0x8f67a96c
                            // branch -> 0x8f67ab20
                            // 0x8f67ab20
                            v49 = g4 - 1;
                            *(int32_t *)g26 = v49;
                            if (v49 == 0) {
                                // 0x8f67ab34
                                function_8f619438();
                                // branch -> 0x8f67ab38
                            }
                            // 0x8f67ab38
                            if (v14 != g15) {
                                // 0x8f67ab4c
                                __stack_chk_fail();
                                // branch -> 0x8f67ab50
                            }
                            // 0x8f67ab50
                            return result2;
                        }
                    }
                    break;
                }
                case 2: {
                    // 0x8f67a914
                    // branch -> 0x8f67aadc
                    // 0x8f67aadc
                    v33 = __utag_gets_107(g23, g22, g25, g24, (int32_t)v41, v39, 0, v38, v37, v36, 0, v14, 0, v6, v7, v8, v9, v10, v11, v12);
                    // branch -> 0x8f67ab20
                    // 0x8f67ab20
                    v49 = g4 - 1;
                    *(int32_t *)g26 = v49;
                    if (v49 == 0) {
                        // 0x8f67ab34
                        function_8f619438();
                        // branch -> 0x8f67ab38
                    }
                    // 0x8f67ab38
                    if (v14 != g15) {
                        // 0x8f67ab4c
                        __stack_chk_fail();
                        // branch -> 0x8f67ab50
                    }
                    // 0x8f67ab50
                    return v33 < 2 ? 1 - v33 : 0;
                }
                case 3: {
                    // 0x8f67a920
                    result2 = 0;
                    v37 = 0;
                    if (g24 >= 2) {
                        // 0x8f67a930
                        v43 = (int32_t)v41;
                        v25 = __utag_sizeof((char *)g23, g22, v5, v19, v43, v39, 0, v38, 0);
                        if (v25 == 1) {
                            // 0x8f67a948
                            v26 = __utag_read((char *)g23, g22, (int32_t)&v37, 1, v43, v39, 0, v38, v37, v36, 0, v14, 0);
                            v51 = result2;
                            if (v26 != v51) {
                                // 0x8f67a960
                                *(char *)(g25 + 1) = (char)v51;
                                *(char *)g25 = (char)(0x1000000 * v37 / 0x1000000);
                                // branch -> 0x8f67a96c
                                // 0x8f67a96c
                                // branch -> 0x8f67ab20
                                // 0x8f67ab20
                                v49 = g4 - 1;
                                *(int32_t *)g26 = v49;
                                if (v49 == 0) {
                                    // 0x8f67ab34
                                    function_8f619438();
                                    // branch -> 0x8f67ab38
                                }
                                // 0x8f67ab38
                                if (v14 != g15) {
                                    // 0x8f67ab4c
                                    __stack_chk_fail();
                                    // branch -> 0x8f67ab50
                                }
                                // 0x8f67ab50
                                return result2;
                            }
                        }
                    }
                    break;
                }
                case 4: {
                    // 0x8f67a974
                    result2 = 0;
                    v37 = 0;
                    v44 = (int32_t)v41;
                    v27 = __utag_sizeof((char *)g23, g22, v5, v19, v44, v39, 0, v38, 0);
                    if (v27 == 4) {
                        // 0x8f67a994
                        v28 = __utag_read((char *)g23, g22, (int32_t)&v37, 4, v44, v39, 0, v38, v37, v36, 0, v14, 0);
                        if (v28 != result2) {
                            // 0x8f67a9ac
                            // branch -> 0x8f67aa54
                            // 0x8f67aa54
                            if (snprintf((char *)g25, g24, (char *)(int32_t)"%ld") < g24) {
                                // 0x8f67a96c
                                // branch -> 0x8f67ab20
                                // 0x8f67ab20
                                v49 = g4 - 1;
                                *(int32_t *)g26 = v49;
                                if (v49 == 0) {
                                    // 0x8f67ab34
                                    function_8f619438();
                                    // branch -> 0x8f67ab38
                                }
                                // 0x8f67ab38
                                if (v14 != g15) {
                                    // 0x8f67ab4c
                                    __stack_chk_fail();
                                    // branch -> 0x8f67ab50
                                }
                                // 0x8f67ab50
                                return result2;
                            }
                        }
                    }
                    break;
                }
                case 5: {
                    // 0x8f67aa10
                    result2 = 0;
                    v37 = 0;
                    v46 = (int32_t)v41;
                    v30 = __utag_sizeof((char *)g23, g22, v5, v19, v46, v39, 0, v38, 0);
                    if (v30 == 4) {
                        // 0x8f67aa30
                        v31 = __utag_read((char *)g23, g22, (int32_t)&v37, 4, v46, v39, 0, v38, v37, v36, 0, v14, 0);
                        if (v31 != result2) {
                            // 0x8f67aa48
                            // branch -> 0x8f67aa54
                            // 0x8f67aa54
                            if (snprintf((char *)g25, g24, (char *)(int32_t)"0x%lx") < g24) {
                                // 0x8f67a96c
                                // branch -> 0x8f67ab20
                                // 0x8f67ab20
                                v49 = g4 - 1;
                                *(int32_t *)g26 = v49;
                                if (v49 == 0) {
                                    // 0x8f67ab34
                                    function_8f619438();
                                    // branch -> 0x8f67ab38
                                }
                                // 0x8f67ab38
                                if (v14 != g15) {
                                    // 0x8f67ab4c
                                    __stack_chk_fail();
                                    // branch -> 0x8f67ab50
                                }
                                // 0x8f67ab50
                                return result2;
                            }
                        }
                    }
                    break;
                }
                case 6: {
                    // 0x8f67a9bc
                    v37 = 0;
                    v45 = (int32_t)v41;
                    if (__utag_sizeof((char *)g23, g22, 0, 0, v45, v39, 0, v38, 0) == 8) {
                        // 0x8f67a9e0
                        v29 = __utag_read((char *)g23, g22, (int32_t)&v37, 8, v45, v39, 0, v38, v37, 0, 0, v14, 0);
                        if (v29 != 0) {
                            // 0x8f67a9f8
                            // branch -> 0x8f67aab8
                            // 0x8f67aab8
                            if (snprintf((char *)g25, g24, (char *)(int32_t)"%lld") < g24) {
                                // if_8f67aac0_0_true
                                // branch -> 0x8f67ab20
                                // 0x8f67ab20
                                v49 = g4 - 1;
                                *(int32_t *)g26 = v49;
                                if (v49 == 0) {
                                    // 0x8f67ab34
                                    function_8f619438();
                                    // branch -> 0x8f67ab38
                                }
                                // 0x8f67ab38
                                if (v14 != g15) {
                                    // 0x8f67ab4c
                                    __stack_chk_fail();
                                    // branch -> 0x8f67ab50
                                }
                                // 0x8f67ab50
                                return 0;
                            }
                        }
                    }
                    break;
                }
                case 7: {
                    // 0x8f67aa68
                    v37 = 0;
                    v47 = (int32_t)v41;
                    if (__utag_sizeof((char *)g23, g22, 0, 0, v47, v39, 0, v38, 0) == 8) {
                        // 0x8f67aa8c
                        v32 = __utag_read((char *)g23, g22, (int32_t)&v37, 8, v47, v39, 0, v38, v37, 0, 0, v14, 0);
                        if (v32 != 0) {
                            // 0x8f67aaa4
                            // branch -> 0x8f67aab8
                            // 0x8f67aab8
                            if (snprintf((char *)g25, g24, (char *)(int32_t)"0x%llx") < g24) {
                                // if_8f67aac0_0_true
                                // branch -> 0x8f67ab20
                                // 0x8f67ab20
                                v49 = g4 - 1;
                                *(int32_t *)g26 = v49;
                                if (v49 == 0) {
                                    // 0x8f67ab34
                                    function_8f619438();
                                    // branch -> 0x8f67ab38
                                }
                                // 0x8f67ab38
                                if (v14 != g15) {
                                    // 0x8f67ab4c
                                    __stack_chk_fail();
                                    // branch -> 0x8f67ab50
                                }
                                // 0x8f67ab50
                                return 0;
                            }
                        }
                    }
                    break;
                }
            }
            // 0x8f67ab1c
            // branch -> 0x8f67ab20
            // 0x8f67ab20
            v49 = g4 - 1;
            *(int32_t *)g26 = v49;
            if (v49 == 0) {
                // 0x8f67ab34
                function_8f619438();
                // branch -> 0x8f67ab38
            }
            // 0x8f67ab38
            if (v14 != g15) {
                // 0x8f67ab4c
                __stack_chk_fail();
                // branch -> 0x8f67ab50
            }
            // 0x8f67ab50
            return 1;
        }
        // 0x8f67a84c
        v21 = __find_first_utag(g23, g22, v5, v18, v1, v39, 0, v38, v37, v36, 0, v14, 0, v6);
        v41 = v2;
        if (v21 == 0) {
            // 0x8f67a860
            v5 = (int32_t)"lib/utags/utags.c";
            v19 = (int32_t)"utag" & -0x10000 | 1278;
            _panic(v13, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/utags/utags.c", (int32_t)"utag" & -0x10000 | 1278, (int32_t)"utag", v39, 0);
            v41 = "utag";
            // branch -> 0x8f67a87c
        }
        // 0x8f67a87c
        v22 = __utag_typeof(g23, g22, v5);
        switch ((int32_t)v22) {
            case 0: {
                // 0x8f67aacc
                v48 = g23;
                v52 = g22;
                if (v48 == 1) {
                    // 0x8f67aadc
                    v33 = __utag_gets_107(1, v52, g25, g24, (int32_t)v41, v39, 0, v38, v37, v36, 0, v14, 0, v6, v7, v8, v9, v10, v11, v12);
                    // branch -> 0x8f67ab20
                    // 0x8f67ab20
                    v49 = g4 - 1;
                    *(int32_t *)g26 = v49;
                    if (v49 == 0) {
                        // 0x8f67ab34
                        function_8f619438();
                        // branch -> 0x8f67ab38
                    }
                    // 0x8f67ab38
                    if (v14 != g15) {
                        // 0x8f67ab4c
                        __stack_chk_fail();
                        // branch -> 0x8f67ab50
                    }
                    // 0x8f67ab50
                    return v33 < 2 ? 1 - v33 : 0;
                }
                // 0x8f67aaf4
                v34 = __utag_sizeof((char *)v48, v52, v5, v19, (int32_t)v41, v39, 0, v38, v37);
                if (snprintf((char *)g25, g24, "%d bytes of raw data", v34) < g24) {
                    // if_8f67ab10_0_true
                    result = 0;
                    // branch -> 0x8f67ab20
                } else {
                    // if_8f67ab14_0_true
                    result = 1;
                    // branch -> 0x8f67ab20
                }
                // 0x8f67ab20
                v49 = g4 - 1;
                *(int32_t *)g26 = v49;
                if (v49 == 0) {
                    // 0x8f67ab34
                    function_8f619438();
                    // branch -> 0x8f67ab38
                }
                // 0x8f67ab38
                if (v14 != g15) {
                    // 0x8f67ab4c
                    __stack_chk_fail();
                    // branch -> 0x8f67ab50
                }
                // 0x8f67ab50
                return result;
            }
            case 1: {
                // 0x8f67a8b4
                result2 = 0;
                v35 = 0;
                v42 = (int32_t)v41;
                v23 = __utag_sizeof((char *)g23, g22, v5, v19, v42, v39, 0, v38, v37);
                if (v23 == 1) {
                    // 0x8f67a8d4
                    v24 = __utag_read((char *)g23, g22, (int32_t)&v35, 1, v42, v39, 0, v38, v37, v36, 0, v14, 0);
                    v50 = result2;
                    if (v24 != v50) {
                        // 0x8f67a8ec
                        v40 = 0x1000000 * v35 / 0x1000000 == v50 ? (int32_t)"false" : (int32_t)"true";
                        strlcpy(g25, v40, g24, (int32_t)"true", v42);
                        // branch -> 0x8f67a96c
                        // 0x8f67a96c
                        // branch -> 0x8f67ab20
                        // 0x8f67ab20
                        v49 = g4 - 1;
                        *(int32_t *)g26 = v49;
                        if (v49 == 0) {
                            // 0x8f67ab34
                            function_8f619438();
                            // branch -> 0x8f67ab38
                        }
                        // 0x8f67ab38
                        if (v14 != g15) {
                            // 0x8f67ab4c
                            __stack_chk_fail();
                            // branch -> 0x8f67ab50
                        }
                        // 0x8f67ab50
                        return result2;
                    }
                }
                break;
            }
            case 2: {
                // 0x8f67a914
                // branch -> 0x8f67aadc
                // 0x8f67aadc
                v33 = __utag_gets_107(g23, g22, g25, g24, (int32_t)v41, v39, 0, v38, v37, v36, 0, v14, 0, v6, v7, v8, v9, v10, v11, v12);
                // branch -> 0x8f67ab20
                // 0x8f67ab20
                v49 = g4 - 1;
                *(int32_t *)g26 = v49;
                if (v49 == 0) {
                    // 0x8f67ab34
                    function_8f619438();
                    // branch -> 0x8f67ab38
                }
                // 0x8f67ab38
                if (v14 != g15) {
                    // 0x8f67ab4c
                    __stack_chk_fail();
                    // branch -> 0x8f67ab50
                }
                // 0x8f67ab50
                return v33 < 2 ? 1 - v33 : 0;
            }
            case 3: {
                // 0x8f67a920
                result2 = 0;
                v37 = 0;
                if (g24 >= 2) {
                    // 0x8f67a930
                    v43 = (int32_t)v41;
                    v25 = __utag_sizeof((char *)g23, g22, v5, v19, v43, v39, 0, v38, 0);
                    if (v25 == 1) {
                        // 0x8f67a948
                        v26 = __utag_read((char *)g23, g22, (int32_t)&v37, 1, v43, v39, 0, v38, v37, v36, 0, v14, 0);
                        v51 = result2;
                        if (v26 != v51) {
                            // 0x8f67a960
                            *(char *)(g25 + 1) = (char)v51;
                            *(char *)g25 = (char)(0x1000000 * v37 / 0x1000000);
                            // branch -> 0x8f67a96c
                            // 0x8f67a96c
                            // branch -> 0x8f67ab20
                            // 0x8f67ab20
                            v49 = g4 - 1;
                            *(int32_t *)g26 = v49;
                            if (v49 == 0) {
                                // 0x8f67ab34
                                function_8f619438();
                                // branch -> 0x8f67ab38
                            }
                            // 0x8f67ab38
                            if (v14 != g15) {
                                // 0x8f67ab4c
                                __stack_chk_fail();
                                // branch -> 0x8f67ab50
                            }
                            // 0x8f67ab50
                            return result2;
                        }
                    }
                }
                break;
            }
            case 4: {
                // 0x8f67a974
                result2 = 0;
                v37 = 0;
                v44 = (int32_t)v41;
                v27 = __utag_sizeof((char *)g23, g22, v5, v19, v44, v39, 0, v38, 0);
                if (v27 == 4) {
                    // 0x8f67a994
                    v28 = __utag_read((char *)g23, g22, (int32_t)&v37, 4, v44, v39, 0, v38, v37, v36, 0, v14, 0);
                    if (v28 != result2) {
                        // 0x8f67a9ac
                        // branch -> 0x8f67aa54
                        // 0x8f67aa54
                        if (snprintf((char *)g25, g24, (char *)(int32_t)"%ld") < g24) {
                            // 0x8f67a96c
                            // branch -> 0x8f67ab20
                            // 0x8f67ab20
                            v49 = g4 - 1;
                            *(int32_t *)g26 = v49;
                            if (v49 == 0) {
                                // 0x8f67ab34
                                function_8f619438();
                                // branch -> 0x8f67ab38
                            }
                            // 0x8f67ab38
                            if (v14 != g15) {
                                // 0x8f67ab4c
                                __stack_chk_fail();
                                // branch -> 0x8f67ab50
                            }
                            // 0x8f67ab50
                            return result2;
                        }
                    }
                }
                break;
            }
            case 5: {
                // 0x8f67aa10
                result2 = 0;
                v37 = 0;
                v46 = (int32_t)v41;
                v30 = __utag_sizeof((char *)g23, g22, v5, v19, v46, v39, 0, v38, 0);
                if (v30 == 4) {
                    // 0x8f67aa30
                    v31 = __utag_read((char *)g23, g22, (int32_t)&v37, 4, v46, v39, 0, v38, v37, v36, 0, v14, 0);
                    if (v31 != result2) {
                        // 0x8f67aa48
                        // branch -> 0x8f67aa54
                        // 0x8f67aa54
                        if (snprintf((char *)g25, g24, (char *)(int32_t)"0x%lx") < g24) {
                            // 0x8f67a96c
                            // branch -> 0x8f67ab20
                            // 0x8f67ab20
                            v49 = g4 - 1;
                            *(int32_t *)g26 = v49;
                            if (v49 == 0) {
                                // 0x8f67ab34
                                function_8f619438();
                                // branch -> 0x8f67ab38
                            }
                            // 0x8f67ab38
                            if (v14 != g15) {
                                // 0x8f67ab4c
                                __stack_chk_fail();
                                // branch -> 0x8f67ab50
                            }
                            // 0x8f67ab50
                            return result2;
                        }
                    }
                }
                break;
            }
            case 6: {
                // 0x8f67a9bc
                v37 = 0;
                v45 = (int32_t)v41;
                if (__utag_sizeof((char *)g23, g22, 0, 0, v45, v39, 0, v38, 0) == 8) {
                    // 0x8f67a9e0
                    v29 = __utag_read((char *)g23, g22, (int32_t)&v37, 8, v45, v39, 0, v38, v37, 0, 0, v14, 0);
                    if (v29 != 0) {
                        // 0x8f67a9f8
                        // branch -> 0x8f67aab8
                        // 0x8f67aab8
                        if (snprintf((char *)g25, g24, (char *)(int32_t)"%lld") < g24) {
                            // if_8f67aac0_0_true
                            // branch -> 0x8f67ab20
                            // 0x8f67ab20
                            v49 = g4 - 1;
                            *(int32_t *)g26 = v49;
                            if (v49 == 0) {
                                // 0x8f67ab34
                                function_8f619438();
                                // branch -> 0x8f67ab38
                            }
                            // 0x8f67ab38
                            if (v14 != g15) {
                                // 0x8f67ab4c
                                __stack_chk_fail();
                                // branch -> 0x8f67ab50
                            }
                            // 0x8f67ab50
                            return 0;
                        }
                    }
                }
                break;
            }
            case 7: {
                // 0x8f67aa68
                v37 = 0;
                v47 = (int32_t)v41;
                if (__utag_sizeof((char *)g23, g22, 0, 0, v47, v39, 0, v38, 0) == 8) {
                    // 0x8f67aa8c
                    v32 = __utag_read((char *)g23, g22, (int32_t)&v37, 8, v47, v39, 0, v38, v37, 0, 0, v14, 0);
                    if (v32 != 0) {
                        // 0x8f67aaa4
                        // branch -> 0x8f67aab8
                        // 0x8f67aab8
                        if (snprintf((char *)g25, g24, (char *)(int32_t)"0x%llx") < g24) {
                            // if_8f67aac0_0_true
                            // branch -> 0x8f67ab20
                            // 0x8f67ab20
                            v49 = g4 - 1;
                            *(int32_t *)g26 = v49;
                            if (v49 == 0) {
                                // 0x8f67ab34
                                function_8f619438();
                                // branch -> 0x8f67ab38
                            }
                            // 0x8f67ab38
                            if (v14 != g15) {
                                // 0x8f67ab4c
                                __stack_chk_fail();
                                // branch -> 0x8f67ab50
                            }
                            // 0x8f67ab50
                            return 0;
                        }
                    }
                }
                break;
            }
        }
        // 0x8f67ab1c
        result = 1;
        // branch -> 0x8f67ab20
        // 0x8f67ab20
        v49 = g4 - 1;
        *(int32_t *)g26 = v49;
        if (v49 == 0) {
            // 0x8f67ab34
            function_8f619438();
            // branch -> 0x8f67ab38
        }
    }
    // 0x8f67ab38
    if (v14 != g15) {
        // 0x8f67ab4c
        __stack_chk_fail();
        // branch -> 0x8f67ab50
    }
    // 0x8f67ab50
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int regcomp(regex_t * restrict preg, const char * restrict pattern, int cflags);
// int regexec(const regex_t * restrict preg, const char * restrict string, size_t nmatch, regmatch_t pmatch[__restrict_arr], int eflags);
// void regfree(regex_t * preg);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:18:50
