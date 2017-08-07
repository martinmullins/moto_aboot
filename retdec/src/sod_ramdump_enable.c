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

// Address range: 0x8f636b00 - 0x8f636dd7
int32_t sod_ramdump_enable(void) {
    int32_t v1 = g11;
    int32_t v2 = 0; // bp-56
    int32_t v3 = 0; // bp-48
    if (sod_ramdump_enabled((char *)g13, g14, 0, 0) != 0) {
        // 0x8f636d94
        if (v1 != g11) {
            // 0x8f636da4
            __stack_chk_fail();
            // branch -> 0x8f636da8
        }
        // 0x8f636da8
        return 0;
    }
    // 0x8f636b3c
    int32_t v4;
    int32_t v5 = userdata_stat(0, (int32_t)&v2, (int32_t)&v3, 0, v4, 0, 0, 0, 0, 0, 0, v1, 0); // 0x8f636b44
    char * v6;
    if (v5 == 0) {
        // 0x8f636b54
        // branch -> 0x8f636d74
        // 0x8f636d74
        v6 = g4;
        if (v6 != NULL) {
            // 0x8f636d80
            free(v6);
            *(int32_t *)&g4 = 0;
            // branch -> 0x8f636d94
        }
        // 0x8f636d94
        if (v1 != g11) {
            // 0x8f636da4
            __stack_chk_fail();
            // branch -> 0x8f636da8
        }
        // 0x8f636da8
        return -17;
    }
    int32_t v7 = v2; // 0x8f636b5c
    int32_t v8;
    uint32_t v9;
    int32_t v10;
    int32_t v11; // 0x8f636d606
    int32_t v12; // 0x8f636c7c
    int32_t v13; // 0x8f636bb4_5
    int32_t * v14; // 0x8f636d04_0
    int32_t * v15; // 0x8f636d44_0
    int32_t v16; // 0x8f636ba8
    char * mem; // 0x8f636bb4
    int32_t v17; // 0x8f636bec
    int32_t v18; // 0x8f636c14
    int32_t v19; // 0x8f636c6c
    int32_t v20; // 0x8f636c70
    int32_t v21; // 0x8f636c7c
    int32_t v22; // 0x8f636c94
    int32_t v23; // 0x8f636cd4
    int32_t v24; // 0x8f636d10
    int32_t result; // 0x8f636d30
    int32_t v25; // 0x8f636d68
    int32_t v26; // R2
    int32_t v27; // R3
    int32_t v28; // R5
    int32_t v29; // R9
    int32_t result2;
    int32_t v30;
    uint32_t v31;
    char * v32;
    char * v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t v37;
    int32_t v38; // 0x8f636d08
    int32_t v39; // 0x8f636cc8
    int32_t v40; // 0x8f636c0c
    int32_t v41; // 0x8f636d9021
    uint32_t v42; // 0x8f636c58
    uint32_t v43; // 0x8f636ca4
    uint32_t v44; // 0x8f636cec
    int32_t v45; // 0x8f636cf0
    int32_t v46; // 0x8f636d44
    int32_t v47; // 0x8f636c0c
    int32_t v48; // 0x8f636c58
    int32_t v49; // 0x8f636cc8
    uint32_t v50; // 0x8f636cf8
    int32_t v51; // 0x8f636c5c
    int32_t v52; // 0x8f636ccc
    if (v7 != 0) {
        int32_t v53 = v3; // 0x8f636b68
        v26 = v53;
        if (v53 != 0) {
            v32 = (char *)v4;
            // 0x8f636b90
            v33 = g4;
            v34 = (int32_t)v33;
            v27 = v34;
            if (v33 != NULL) {
                // if_8f636b98_0_true
                v10 = (int32_t)v32;
                v11 = 0;
                // branch -> 0x8f636c64
                // 0x8f636c64
                v19 = print_log(1, (int32_t)"Enabling RAM dump\n", v26, v34, v10, 0, v2, 0, v3, v11, 0, v1, 0);
                v20 = sod_dump_to_sd(v19, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
                v12 = v20;
                if (v20 == 0) {
                    // 0x8f636c94
                    v22 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
                    if (v22 == 0) {
                        // 0x8f636b54
                        // branch -> 0x8f636d74
                        // 0x8f636d74
                        v6 = g4;
                        if (v6 != NULL) {
                            // 0x8f636d80
                            free(v6);
                            *(int32_t *)&g4 = 0;
                            // branch -> 0x8f636d94
                        }
                        // 0x8f636d94
                        if (v1 != g11) {
                            // 0x8f636da4
                            __stack_chk_fail();
                            // branch -> 0x8f636da8
                        }
                        // 0x8f636da8
                        return -17;
                    }
                    v12 = v22;
                }
                // 0x8f636c7c
                v21 = sod_dump_to_sd(v12, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
                v39 = 0;
                if (v21 == 0) {
                    // 0x8f636c8c
                    v39 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
                    // branch -> 0x8f636ca4
                }
                // 0x8f636ca4
                v43 = v3;
                if (v11 == 0 && v43 < v39) {
                    // 0x8f636c34
                    v29 = -26;
                    v41 = -26;
                    // branch -> 0x8f636d74
                } else {
                    // 0x8f636cbc
                    v49 = v43 - v39;
                    v52 = v11 - (int32_t)(v43 < v39);
                    v3 = v49;
                    v23 = userdata_resize(v49, v52, 1, v11, v10, 0, v2, 0, v49, v52, 0, v1, 0, g18, g19, g20, g21, g22, g23, g12);
                    v29 = v23;
                    if (v23 == 0) {
                        // 0x8f636d2c
                        result = sh_erase((int32_t)g4, v52, 1, v11, v10, 0);
                        if (result != 0) {
                            // 0x8f636d74
                            v6 = g4;
                            if (v6 != NULL) {
                                // 0x8f636d80
                                free(v6);
                                *(int32_t *)&g4 = 0;
                                // branch -> 0x8f636d94
                            }
                            // 0x8f636d94
                            if (v1 != g11) {
                                // 0x8f636da4
                                __stack_chk_fail();
                                // branch -> 0x8f636da8
                            }
                            // 0x8f636da8
                            return result;
                        }
                        // 0x8f636ce8
                        v36 = (int32_t)g4;
                        v44 = v2;
                        v45 = v3;
                        v50 = v45 + v44;
                        *(int32_t *)(v36 + 8) = v50;
                        *(int32_t *)(v36 + 12) = (int32_t)(v50 < v44) + v52;
                        v14 = (int32_t *)(v36 + 4);
                        v38 = *v14 | 1;
                        *v14 = v38;
                        v24 = sod_dump_to_sd(v45, v52, v50, v38, v10, 0, v2, 0);
                        v37 = (int32_t)g4;
                        v15 = (int32_t *)(v37 + 4);
                        v46 = *v15;
                        if (v24 == 0) {
                            // 0x8f636d40
                            v30 = v46 & -33;
                            // branch -> 0x8f636d4c
                        } else {
                            // 0x8f636d1c
                            v30 = v46 | 32;
                            // branch -> 0x8f636d4c
                        }
                        // 0x8f636d4c
                        v26 = v30;
                        *v15 = v30;
                        *(int32_t *)(v37 + 24) = v39;
                        *(int32_t *)(v37 + 28) = 0;
                        *(int32_t *)(v37 + 32) = 0;
                        add_pre_crash_regions(v37, v52, v26, 0, v10, 0, v2, 0, v3, v52, 0, v1, 0, g18, g19);
                        v25 = sh_flash((int32_t)g4, v52, v26, 0, v10, 0, v2, 0, v3);
                        v29 = v25;
                        if (v25 == 0) {
                            // 0x8f636d94
                            if (v1 != g11) {
                                // 0x8f636da4
                                __stack_chk_fail();
                                // branch -> 0x8f636da8
                            }
                            // 0x8f636da8
                            return 0;
                        }
                        v41 = v25;
                    } else {
                        v41 = v23;
                    }
                }
                // 0x8f636d74
                v6 = g4;
                result2 = v41;
                if (v6 != NULL) {
                    // 0x8f636d80
                    free(v6);
                    *(int32_t *)&g4 = 0;
                    result2 = v29;
                    // branch -> 0x8f636d94
                }
                // 0x8f636d94
                if (v1 != g11) {
                    // 0x8f636da4
                    __stack_chk_fail();
                    // branch -> 0x8f636da8
                }
                // 0x8f636da8
                return result2;
            }
            // 0x8f636ba0
            v35 = (int32_t)v32;
            v16 = print_log(1, (int32_t)"Enabling SOD\n", v26, v34, v35, 0, v2, 0, v3, 0, 0, v1, 0);
            mem = calloc(v16 & -0x10000 | 3496, 1);
            v13 = (int32_t)mem;
            *(int32_t *)&g4 = v13;
            if (mem == NULL) {
                // 0x8f636bcc
                print_log(-1, (int32_t)"ERROR: out of memory!\n", v26, (int32_t)&g4, v35, 0, v2, 0, v3, 0, 0, v1, 0);
                // branch -> 0x8f636d74
                // 0x8f636d74
                v6 = g4;
                if (v6 != NULL) {
                    // 0x8f636d80
                    free(v6);
                    *(int32_t *)&g4 = 0;
                    // branch -> 0x8f636d94
                }
                // 0x8f636d94
                if (v1 != g11) {
                    // 0x8f636da4
                    __stack_chk_fail();
                    // branch -> 0x8f636da8
                }
                // 0x8f636da8
                return -5;
            }
            // 0x8f636be0
            *(int32_t *)mem = 0x2d83fbe7;
            v17 = sod_dump_to_sd(v13, 1, v26, 0x2d83fbe7, v35, 0, v2, 0);
            v28 = 0;
            v8 = v17 == 0 ? 0x2000000 : 0x80000;
            *(int32_t *)(v13 + 16) = v8;
            v40 = v3;
            v47 = v40 & -0x20000;
            v3 = v47;
            v18 = sod_dump_to_sd(v8, 1, v40, 0, v35, 0, v2, 0);
            v31 = v18 == 0 ? 0x2000000 : 0x80000;
            if (v28 == 0 && v47 < v31) {
                // 0x8f636c34
                // branch -> 0x8f636d74
                // 0x8f636d74
                v6 = g4;
                if (v6 != NULL) {
                    // 0x8f636d80
                    free(v6);
                    *(int32_t *)&g4 = 0;
                    // branch -> 0x8f636d94
                }
                // 0x8f636d94
                if (v1 != g11) {
                    // 0x8f636da4
                    __stack_chk_fail();
                    // branch -> 0x8f636da8
                }
                // 0x8f636da8
                return -26;
            }
            // 0x8f636c3c
            v9 = sod_dump_to_sd(v18, 1, v31, 0, v35, 0, v2, 0) == 0 ? 0x2000000 : 0x80000;
            v42 = v3;
            v48 = v42 - v9;
            v26 = v48;
            v51 = v28 - (int32_t)(v42 < v9);
            v27 = v51;
            v3 = v48;
            v10 = v35;
            v11 = v51;
            // branch -> 0x8f636c64
            // 0x8f636c64
            v19 = print_log(1, (int32_t)"Enabling RAM dump\n", v48, v51, v10, 0, v2, 0, v48, v11, 0, v1, 0);
            v20 = sod_dump_to_sd(v19, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
            v12 = v20;
            if (v20 == 0) {
                // 0x8f636c94
                v22 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
                if (v22 == 0) {
                    // 0x8f636b54
                    // branch -> 0x8f636d74
                    // 0x8f636d74
                    v6 = g4;
                    if (v6 != NULL) {
                        // 0x8f636d80
                        free(v6);
                        *(int32_t *)&g4 = 0;
                        // branch -> 0x8f636d94
                    }
                    // 0x8f636d94
                    if (v1 != g11) {
                        // 0x8f636da4
                        __stack_chk_fail();
                        // branch -> 0x8f636da8
                    }
                    // 0x8f636da8
                    return -17;
                }
                v12 = v22;
            }
            // 0x8f636c7c
            v21 = sod_dump_to_sd(v12, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
            v39 = 0;
            if (v21 == 0) {
                // 0x8f636c8c
                v39 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
                // branch -> 0x8f636ca4
            }
            // 0x8f636ca4
            v43 = v3;
            if (v11 == 0 && v43 < v39) {
                // 0x8f636c34
                v29 = -26;
                v41 = -26;
                // branch -> 0x8f636d74
            } else {
                // 0x8f636cbc
                v49 = v43 - v39;
                v52 = v11 - (int32_t)(v43 < v39);
                v3 = v49;
                v23 = userdata_resize(v49, v52, 1, v11, v10, 0, v2, 0, v49, v52, 0, v1, 0, g18, g19, g20, g21, g22, g23, g12);
                v29 = v23;
                if (v23 == 0) {
                    // 0x8f636ce8
                    v36 = (int32_t)g4;
                    v44 = v2;
                    v45 = v3;
                    v50 = v45 + v44;
                    *(int32_t *)(v36 + 8) = v50;
                    *(int32_t *)(v36 + 12) = (int32_t)(v50 < v44) + v52;
                    v14 = (int32_t *)(v36 + 4);
                    v38 = *v14 | 1;
                    *v14 = v38;
                    v24 = sod_dump_to_sd(v45, v52, v50, v38, v10, 0, v2, 0);
                    v37 = (int32_t)g4;
                    v15 = (int32_t *)(v37 + 4);
                    v46 = *v15;
                    if (v24 == 0) {
                        // 0x8f636d40
                        v30 = v46 & -33;
                        // branch -> 0x8f636d4c
                    } else {
                        // 0x8f636d1c
                        v30 = v46 | 32;
                        // branch -> 0x8f636d4c
                    }
                    // 0x8f636d4c
                    v26 = v30;
                    *v15 = v30;
                    *(int32_t *)(v37 + 24) = v39;
                    *(int32_t *)(v37 + 28) = 0;
                    *(int32_t *)(v37 + 32) = 0;
                    add_pre_crash_regions(v37, v52, v26, 0, v10, 0, v2, 0, v3, v52, 0, v1, 0, g18, g19);
                    v25 = sh_flash((int32_t)g4, v52, v26, 0, v10, 0, v2, 0, v3);
                    v29 = v25;
                    if (v25 == 0) {
                        // 0x8f636d94
                        if (v1 != g11) {
                            // 0x8f636da4
                            __stack_chk_fail();
                            // branch -> 0x8f636da8
                        }
                        // 0x8f636da8
                        return 0;
                    }
                    v41 = v25;
                } else {
                    v41 = v23;
                }
            }
            // 0x8f636d74
            v6 = g4;
            result2 = v41;
            if (v6 != NULL) {
                // 0x8f636d80
                free(v6);
                *(int32_t *)&g4 = 0;
                result2 = v29;
                // branch -> 0x8f636d94
            }
            // 0x8f636d94
            if (v1 != g11) {
                // 0x8f636da4
                __stack_chk_fail();
                // branch -> 0x8f636da8
            }
            // 0x8f636da8
            return result2;
        }
    }
    // 0x8f636b74
    v26 = (int32_t)"app/mbm/sod.c";
    _panic(g12, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"app/mbm/sod.c", (int32_t)"udata_offset && udata_size" & -0x10000 | 917, (int32_t)"udata_offset && udata_size", 0, v7);
    v32 = "udata_offset && udata_size";
    // branch -> 0x8f636b90
    // 0x8f636b90
    v33 = g4;
    v34 = (int32_t)v33;
    v27 = v34;
    if (v33 != NULL) {
        // if_8f636b98_0_true
        v10 = (int32_t)v32;
        v11 = 0;
        // branch -> 0x8f636c64
        // 0x8f636c64
        v19 = print_log(1, (int32_t)"Enabling RAM dump\n", v26, v34, v10, 0, v2, 0, v3, v11, 0, v1, 0);
        v20 = sod_dump_to_sd(v19, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
        v12 = v20;
        if (v20 == 0) {
            // 0x8f636c94
            v22 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
            if (v22 == 0) {
                // 0x8f636b54
                // branch -> 0x8f636d74
                // 0x8f636d74
                v6 = g4;
                if (v6 != NULL) {
                    // 0x8f636d80
                    free(v6);
                    *(int32_t *)&g4 = 0;
                    // branch -> 0x8f636d94
                }
                // 0x8f636d94
                if (v1 != g11) {
                    // 0x8f636da4
                    __stack_chk_fail();
                    // branch -> 0x8f636da8
                }
                // 0x8f636da8
                return -17;
            }
            v12 = v22;
        }
        // 0x8f636c7c
        v21 = sod_dump_to_sd(v12, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
        v39 = 0;
        if (v21 == 0) {
            // 0x8f636c8c
            v39 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
            // branch -> 0x8f636ca4
        }
        // 0x8f636ca4
        v43 = v3;
        if (v11 == 0 && v43 < v39) {
            // 0x8f636c34
            v29 = -26;
            v41 = -26;
            // branch -> 0x8f636d74
        } else {
            // 0x8f636cbc
            v49 = v43 - v39;
            v52 = v11 - (int32_t)(v43 < v39);
            v3 = v49;
            v23 = userdata_resize(v49, v52, 1, v11, v10, 0, v2, 0, v49, v52, 0, v1, 0, g18, g19, g20, g21, g22, g23, g12);
            v29 = v23;
            if (v23 == 0) {
                // 0x8f636d2c
                result = sh_erase((int32_t)g4, v52, 1, v11, v10, 0);
                if (result != 0) {
                    // 0x8f636d74
                    v6 = g4;
                    if (v6 != NULL) {
                        // 0x8f636d80
                        free(v6);
                        *(int32_t *)&g4 = 0;
                        // branch -> 0x8f636d94
                    }
                    // 0x8f636d94
                    if (v1 != g11) {
                        // 0x8f636da4
                        __stack_chk_fail();
                        // branch -> 0x8f636da8
                    }
                    // 0x8f636da8
                    return result;
                }
                // 0x8f636ce8
                v36 = (int32_t)g4;
                v44 = v2;
                v45 = v3;
                v50 = v45 + v44;
                *(int32_t *)(v36 + 8) = v50;
                *(int32_t *)(v36 + 12) = (int32_t)(v50 < v44) + v52;
                v14 = (int32_t *)(v36 + 4);
                v38 = *v14 | 1;
                *v14 = v38;
                v24 = sod_dump_to_sd(v45, v52, v50, v38, v10, 0, v2, 0);
                v37 = (int32_t)g4;
                v15 = (int32_t *)(v37 + 4);
                v46 = *v15;
                if (v24 == 0) {
                    // 0x8f636d40
                    v30 = v46 & -33;
                    // branch -> 0x8f636d4c
                } else {
                    // 0x8f636d1c
                    v30 = v46 | 32;
                    // branch -> 0x8f636d4c
                }
                // 0x8f636d4c
                v26 = v30;
                *v15 = v30;
                *(int32_t *)(v37 + 24) = v39;
                *(int32_t *)(v37 + 28) = 0;
                *(int32_t *)(v37 + 32) = 0;
                add_pre_crash_regions(v37, v52, v26, 0, v10, 0, v2, 0, v3, v52, 0, v1, 0, g18, g19);
                v25 = sh_flash((int32_t)g4, v52, v26, 0, v10, 0, v2, 0, v3);
                v29 = v25;
                if (v25 == 0) {
                    // 0x8f636d94
                    if (v1 != g11) {
                        // 0x8f636da4
                        __stack_chk_fail();
                        // branch -> 0x8f636da8
                    }
                    // 0x8f636da8
                    return 0;
                }
                v41 = v25;
            } else {
                v41 = v23;
            }
        }
        // 0x8f636d74
        v6 = g4;
        result2 = v41;
        if (v6 != NULL) {
            // 0x8f636d80
            free(v6);
            *(int32_t *)&g4 = 0;
            result2 = v29;
            // branch -> 0x8f636d94
        }
        // 0x8f636d94
        if (v1 != g11) {
            // 0x8f636da4
            __stack_chk_fail();
            // branch -> 0x8f636da8
        }
        // 0x8f636da8
        return result2;
    }
    // 0x8f636ba0
    v35 = (int32_t)v32;
    v16 = print_log(1, (int32_t)"Enabling SOD\n", v26, v34, v35, 0, v2, 0, v3, 0, 0, v1, 0);
    mem = calloc(v16 & -0x10000 | 3496, 1);
    v13 = (int32_t)mem;
    *(int32_t *)&g4 = v13;
    if (mem == NULL) {
        // 0x8f636bcc
        print_log(-1, (int32_t)"ERROR: out of memory!\n", v26, (int32_t)&g4, v35, 0, v2, 0, v3, 0, 0, v1, 0);
        // branch -> 0x8f636d74
        // 0x8f636d74
        v6 = g4;
        if (v6 != NULL) {
            // 0x8f636d80
            free(v6);
            *(int32_t *)&g4 = 0;
            // branch -> 0x8f636d94
        }
        // 0x8f636d94
        if (v1 != g11) {
            // 0x8f636da4
            __stack_chk_fail();
            // branch -> 0x8f636da8
        }
        // 0x8f636da8
        return -5;
    }
    // 0x8f636be0
    *(int32_t *)mem = 0x2d83fbe7;
    v17 = sod_dump_to_sd(v13, 1, v26, 0x2d83fbe7, v35, 0, v2, 0);
    v28 = 0;
    v8 = v17 == 0 ? 0x2000000 : 0x80000;
    *(int32_t *)(v13 + 16) = v8;
    v40 = v3;
    v47 = v40 & -0x20000;
    v3 = v47;
    v18 = sod_dump_to_sd(v8, 1, v40, 0, v35, 0, v2, 0);
    v31 = v18 == 0 ? 0x2000000 : 0x80000;
    if (v28 == 0 && v47 < v31) {
        // 0x8f636c34
        // branch -> 0x8f636d74
        // 0x8f636d74
        v6 = g4;
        if (v6 != NULL) {
            // 0x8f636d80
            free(v6);
            *(int32_t *)&g4 = 0;
            // branch -> 0x8f636d94
        }
        // 0x8f636d94
        if (v1 != g11) {
            // 0x8f636da4
            __stack_chk_fail();
            // branch -> 0x8f636da8
        }
        // 0x8f636da8
        return -26;
    }
    // 0x8f636c3c
    v9 = sod_dump_to_sd(v18, 1, v31, 0, v35, 0, v2, 0) == 0 ? 0x2000000 : 0x80000;
    v42 = v3;
    v48 = v42 - v9;
    v26 = v48;
    v51 = v28 - (int32_t)(v42 < v9);
    v27 = v51;
    v3 = v48;
    v10 = v35;
    v11 = v51;
    // branch -> 0x8f636c64
    // 0x8f636c64
    v19 = print_log(1, (int32_t)"Enabling RAM dump\n", v48, v51, v10, 0, v2, 0, v48, v11, 0, v1, 0);
    v20 = sod_dump_to_sd(v19, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
    v12 = v20;
    if (v20 == 0) {
        // 0x8f636c94
        v22 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
        if (v22 == 0) {
            // 0x8f636b54
            // branch -> 0x8f636d74
            // 0x8f636d74
            v6 = g4;
            if (v6 != NULL) {
                // 0x8f636d80
                free(v6);
                *(int32_t *)&g4 = 0;
                // branch -> 0x8f636d94
            }
            // 0x8f636d94
            if (v1 != g11) {
                // 0x8f636da4
                __stack_chk_fail();
                // branch -> 0x8f636da8
            }
            // 0x8f636da8
            return -17;
        }
        v12 = v22;
    }
    // 0x8f636c7c
    v21 = sod_dump_to_sd(v12, (int32_t)"Enabling RAM dump\n", v26, v27, v10, 0, v2, 0);
    v39 = 0;
    if (v21 == 0) {
        // 0x8f636c8c
        v39 = target_ram_size(0, (int32_t)"Enabling RAM dump\n", v26, v27);
        // branch -> 0x8f636ca4
    }
    // 0x8f636ca4
    v43 = v3;
    if (v11 == 0 && v43 < v39) {
        // 0x8f636c34
        v29 = -26;
        v41 = -26;
        // branch -> 0x8f636d74
    } else {
        // 0x8f636cbc
        v49 = v43 - v39;
        v52 = v11 - (int32_t)(v43 < v39);
        v3 = v49;
        v23 = userdata_resize(v49, v52, 1, v11, v10, 0, v2, 0, v49, v52, 0, v1, 0, g18, g19, g20, g21, g22, g23, g12);
        v29 = v23;
        if (v23 == 0) {
            // 0x8f636ce8
            v36 = (int32_t)g4;
            v44 = v2;
            v45 = v3;
            v50 = v45 + v44;
            *(int32_t *)(v36 + 8) = v50;
            *(int32_t *)(v36 + 12) = (int32_t)(v50 < v44) + v52;
            v14 = (int32_t *)(v36 + 4);
            v38 = *v14 | 1;
            *v14 = v38;
            v24 = sod_dump_to_sd(v45, v52, v50, v38, v10, 0, v2, 0);
            v37 = (int32_t)g4;
            v15 = (int32_t *)(v37 + 4);
            v46 = *v15;
            if (v24 == 0) {
                // 0x8f636d40
                v30 = v46 & -33;
                // branch -> 0x8f636d4c
            } else {
                // 0x8f636d1c
                v30 = v46 | 32;
                // branch -> 0x8f636d4c
            }
            // 0x8f636d4c
            v26 = v30;
            *v15 = v30;
            *(int32_t *)(v37 + 24) = v39;
            *(int32_t *)(v37 + 28) = 0;
            *(int32_t *)(v37 + 32) = 0;
            add_pre_crash_regions(v37, v52, v26, 0, v10, 0, v2, 0, v3, v52, 0, v1, 0, g18, g19);
            v25 = sh_flash((int32_t)g4, v52, v26, 0, v10, 0, v2, 0, v3);
            v29 = v25;
            if (v25 == 0) {
                // 0x8f636d94
                if (v1 != g11) {
                    // 0x8f636da4
                    __stack_chk_fail();
                    // branch -> 0x8f636da8
                }
                // 0x8f636da8
                return 0;
            }
            v41 = v25;
        } else {
            v41 = v23;
        }
    }
    // 0x8f636d74
    v6 = g4;
    result2 = v41;
    if (v6 != NULL) {
        // 0x8f636d80
        free(v6);
        *(int32_t *)&g4 = 0;
        result2 = v29;
        // branch -> 0x8f636d94
    }
    // 0x8f636d94
    if (v1 != g11) {
        // 0x8f636da4
        __stack_chk_fail();
        // branch -> 0x8f636da8
    }
    // 0x8f636da8
    return result2;
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
