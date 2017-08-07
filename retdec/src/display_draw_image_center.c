//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t backlight_turn_off(int32_t a1, int32_t a2, int32_t a3);
int32_t display_draw_image_center(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_draw_image_left(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_turn_off(int32_t a1, int32_t a2);
int32_t fdt_open_into(int32_t a1, char * a2, int32_t a3);
int32_t fdt_pack(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b4dc(void);
void function_8f64b57c(char * a1, int32_t a2);
int32_t get_block_size(int32_t a1, int32_t a2, int32_t a3);
int32_t get_db_channelid_feature_flag_byte(void);
int32_t get_db_cid_feature_flag_byte(int32_t a1);
int32_t get_policy_executor(char * a1);
int32_t hab_add_verified_blocks(char * a1, int32_t a2, int32_t a3);
int32_t hab_digest(int32_t a1, char * a2, int32_t a3);
int32_t hab_hash_decision(char * a1, int32_t a2);
int32_t hab_parse_certificate(int32_t a1, char * a2, int32_t * a3, int16_t * a4, int32_t * a5);
int32_t hab_rsa_init(void);
int32_t is_battery_max17058(void);
int32_t is_bootloader_partition(char * str, int32_t a2, int32_t a3);
int32_t is_charger_bq24296(int32_t a1, int32_t a2);
int32_t pmic_write_reg(int32_t a1, uint32_t a2);
int32_t SecSetSSTState(uint32_t a1, int32_t a2);
int32_t SecWriteFuse(int32_t a1, uint32_t a2);
int32_t set_ap_panic_flag(int32_t a1);
int32_t set_reboot_bl_flag(int32_t a1);
int32_t target_disable_cont_splash_screen(int32_t a1);
int32_t target_enable_cont_splash_screen(int32_t a1);
int32_t timer_init(int32_t a1, int32_t a2);
int32_t udc_descriptor_alloc(char a1, uint32_t a2, int16_t a3);
int32_t udc_descriptor_register(int32_t * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g41 = 0; // LR
int32_t g42 = 0; // R0
int32_t g43 = 0; // R1
int32_t g44 = 0; // R10
int32_t g45 = 0; // R11
int32_t g46 = 0; // R2
int32_t g47 = 0; // R4
int32_t g48 = 0; // R5
int32_t g49 = 0; // R6
int32_t g50 = 0; // R7
int32_t g51 = 0; // R8
int32_t g52 = 0; // R9
int32_t g1 = -0x1a60cf24; // 0x8f61c060
int32_t g2 = 0; // 0x8f69eef0
char * g3 = "\x01"; // 0x8f6a84ee
int32_t g5 = 1; // 0x8f6ac0dc
int32_t g6 = 2; // 0x8f6afe0c
int32_t g7 = 2; // 0x8f6afe14
char (*g8)[5] = "sbl1"; // 0x8f6affb4
int32_t g9 = 1; // 0x8f6b0044
int32_t g10 = 0; // 0x8f6b0070
int32_t g11 = 0; // 0x8f6b7948
int32_t g12 = 0; // 0x8f6c01d0
int32_t g13 = 0; // 0x8f6c01d4
char * g14; // 0x8f6e0699
char * g15; // 0x8f6e069e
char * g16; // 0x8f6e06a7
char * g17; // 0x8f6e06a9
int32_t g18 = 0; // 0x8f6e0c38
int32_t g19 = 0; // 0x8f6e0c3c
char * g20; // 0x8f6e0c40
char * g21; // 0x8f70da99
char g22 = 0; // 0x8f70da9a
int32_t g23 = 0; // 0x8f710c28
int32_t g24 = 0; // 0x8f710c2c
int32_t g25 = 0; // 0x8f710c30
int32_t g26 = 0; // 0x8f710c34
int32_t g27 = 0; // 0x8f7112f4
int32_t g28 = 0; // 0x8f712f2c
char * g29; // 0x8f71302c
int32_t g30 = 0; // 0x8f713030
int32_t g31 = 0; // 0x8f713034
int32_t g32 = 0; // 0x8f713036
int32_t g33 = 0; // 0x8f713038
int32_t g34 = 0; // 0x8f71303c
int32_t g35 = 0; // 0x8f713040
char * g36; // 0x8f713044
int32_t g37 = 0; // 0x8f713048
int32_t g38 = 0; // 0x8f71304c
int32_t g39 = 0; // 0x8f71304e
int32_t g40 = 0; // 0x8f713050
int32_t * g4 = &g2; // 0x8f6a9eec

// ------------------------ Functions -------------------------

// Address range: 0x8f64ee80 - 0x8f64f107
int32_t display_draw_image_center(char * str, uint32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = a4; // R3
    int32_t v2 = (int32_t)str; // R4
    int32_t v3;
    int32_t v4 = v3; // R11
    int32_t v5 = g27;
    if (g6 != 0) {
        // 0x8f64f0b0
        if (v5 == g27) {
            // 0x8f64f0cc
            return 0;
        }
        __stack_chk_fail();
        while (v5 != g27) {
            // 0x8f64f0c0
            __stack_chk_fail();
            // continue -> 0x8f64f0c0
        }
        // 0x8f64f0cc
        return 0;
    }
    int32_t v6 = g18; // R7
    if (g18 != 0) {
        uint32_t v7 = *(int32_t *)(g18 + 20); // 0x8f64eec4
        int32_t v8;
        int32_t v9;
        int32_t v10;
        int32_t v11;
        int32_t v12;
        if (v7 >= a3) {
            uint32_t v13 = *(int32_t *)(g18 + 16); // 0x8f64eed0
            if (v13 >= a2) {
                // 0x8f64eef4
                if (v3 > v7) {
                    // after_if_8f64ef00_0.thread
                    // branch -> 0x8f64ef90
                    // 0x8f64ef90
                    print_log(-1, (int32_t)"Coordinate (y = %d) is out of screen\n", v3, a4, v12, v11, v10, 0, v9, 0, 0, v5, 0);
                    // branch -> 0x8f64f0b0
                    // 0x8f64f0b0
                    if (v5 == g27) {
                        // 0x8f64f0cc
                        return 0;
                    }
                    __stack_chk_fail();
                    while (v5 != g27) {
                        // 0x8f64f0c0
                        __stack_chk_fail();
                        // continue -> 0x8f64f0c0
                    }
                    // 0x8f64f0cc
                    return 0;
                }
                char v14 = *(char *)&g20; // 0x8f64ef10
                int32_t v15 = v14; // 0x8f64ef10
                int32_t v16; // 0x8f64f0a8
                int32_t v17; // 0x8f64f0a82
                int32_t v18; // 0x8f64f0a84
                int32_t v19; // 0x8f64f0906
                int32_t v20; // 0x8f64f090
                int32_t v21; // 0x8f64f0a4
                int32_t v22; // R2
                int32_t v23;
                int32_t v24;
                int32_t v25;
                if (v14 != 0) {
                    // 0x8f64f064
                    v22 = (int32_t)"draw_image_center_in_landscape";
                    print_log(-1, (int32_t)"%s: unsupported feature!\n", (int32_t)"draw_image_center_in_landscape", a4, v12, v11, v10, 0, v9, v8, 0, v5, 0);
                    v25 = v12;
                    v23 = v8;
                    v19 = v9;
                    v18 = v10;
                    v17 = v11;
                    // branch -> 0x8f64f074
                    // 0x8f64f074
                    print_log(2, (int32_t)"flush surface...\n", v22, v1, v25, v17, v18, 0, v19, v23, 0, v5, 0);
                    gfx_flush(g18, (int32_t)"flush surface...\n", v22, v1, v25, v17, v18);
                    v20 = print_log(2, (int32_t)"flush surface end\n", v22, v1, v25, v17, v18, 0, v19, v23, 0, v5, 0);
                    v24 = g19;
                    v16 = v20;
                    if (v24 != 0) {
                        // 0x8f64f0a4
                        v21 = mipi_cmd_trigger(v20, (int32_t)"flush surface end\n", v22, v24, v25, v17, v18, 0);
                        v16 = v21;
                        // branch -> 0x8f64f0a8
                    }
                    // 0x8f64f0a8
                    display_render_done(v16, (int32_t)"flush surface end\n", v22, v24, v25, v17, v18);
                    // branch -> 0x8f64f0b0
                    // 0x8f64f0b0
                    if (v5 == g27) {
                        // 0x8f64f0cc
                        return 1;
                    }
                    __stack_chk_fail();
                    while (v5 != g27) {
                        // 0x8f64f0c0
                        __stack_chk_fail();
                        // continue -> 0x8f64f0c0
                    }
                    // 0x8f64f0cc
                    return 0;
                }
                // 0x8f64ef1c
                v1 = a4;
                if (memcmp(str, "MotoRun", 8) == 0) {
                    int32_t v26 = v2; // 0x8f64ef40
                    int32_t v27 = (int32_t)*(char *)(v26 + 11); // 0x8f64ef40
                    int32_t v28 = (int32_t)*(char *)(v26 + 9); // 0x8f64ef48
                    int32_t v29 = 256 * (int32_t)*(char *)(v26 + 10); // 0x8f64ef50
                    int32_t v30 = 256 * (int32_t)*(char *)(v26 + 8); // 0x8f64ef5c
                    uint32_t v31 = v30 | v28; // 0x8f64ef5c
                    if (v28 == v30) {
                        // after_if_8f64ef64_0.thread
                        // branch -> 0x8f64f0b0
                    } else {
                        // after_if_8f64ef64_0
                        if (v27 != v29) {
                            int32_t v32 = *(int32_t *)(v6 + 28); // 0x8f64ef70
                            int32_t result;
                            if (v32 == 3) {
                                // 0x8f64efa8
                                v2 = v26 + 12;
                                int32_t v33;
                                int32_t v34; // 0x8f64efc0
                                if (v13 > v31) {
                                    // if_8f64efc0_0_true.critedge
                                    v34 = (v13 - v31) / 2;
                                    v1 = v34;
                                    v33 = v4;
                                    // branch -> after_if_8f64efc0_0
                                } else {
                                    // if_8f64efb8_0_true
                                    v1 = 0;
                                    v34 = 0;
                                    v33 = v4;
                                    // branch -> after_if_8f64efc0_0
                                }
                                // after_if_8f64efc0_0
                                int32_t v35; // 0x8f64efe0
                                if (v31 > v13) {
                                    // if_8f64efd8_0_true
                                    v35 = (v31 - v13) / 2;
                                    // branch -> after_if_8f64efd8_0
                                } else {
                                    // after_if_8f64efd0_0.thread44
                                    v35 = 0;
                                    // branch -> after_if_8f64efd8_0
                                }
                                int32_t v36 = v29 | v27; // 0x8f64efdc
                                v22 = v36;
                                int32_t v37;
                                if (draw_runlength_image(v2, v31, v36, v34, v33, v35, 0, 0, a4, v15, 0, v5, 0, g47, g48, g49, g50, g51, g52, g44, g45, g41, v37) != 0) {
                                    v25 = v33;
                                    v23 = v15;
                                    v19 = a4;
                                    v18 = 0;
                                    v17 = v35;
                                    // 0x8f64f074
                                    print_log(2, (int32_t)"flush surface...\n", v22, v1, v25, v17, v18, 0, v19, v23, 0, v5, 0);
                                    gfx_flush(g18, (int32_t)"flush surface...\n", v22, v1, v25, v17, v18);
                                    v20 = print_log(2, (int32_t)"flush surface end\n", v22, v1, v25, v17, v18, 0, v19, v23, 0, v5, 0);
                                    v24 = g19;
                                    v16 = v20;
                                    if (v24 != 0) {
                                        // 0x8f64f0a4
                                        v21 = mipi_cmd_trigger(v20, (int32_t)"flush surface end\n", v22, v24, v25, v17, v18, 0);
                                        v16 = v21;
                                        // branch -> 0x8f64f0a8
                                    }
                                    // 0x8f64f0a8
                                    display_render_done(v16, (int32_t)"flush surface end\n", v22, v24, v25, v17, v18);
                                    result = 1;
                                    // branch -> 0x8f64f0b0
                                } else {
                                    result = 0;
                                }
                            } else {
                                int32_t v38 = 8 * v32; // 0x8f64ef90
                                // branch -> 0x8f64ef90
                                // 0x8f64ef90
                                print_log(-1, (int32_t)"Invalid logo pixel format %d\n", v38, a4, v12, v11, v10, 0, a4, v15, 0, v5, 0);
                                result = 0;
                                // branch -> 0x8f64f0b0
                            }
                            // 0x8f64f0b0
                            if (v5 == g27) {
                                // 0x8f64f0cc
                                return result;
                            }
                            __stack_chk_fail();
                            while (v5 != g27) {
                                // 0x8f64f0c0
                                __stack_chk_fail();
                                // continue -> 0x8f64f0c0
                            }
                            // 0x8f64f0cc
                            return 0;
                        }
                    }
                    // 0x8f64f0b0
                    if (v5 == g27) {
                        // 0x8f64f0cc
                        return 0;
                    }
                    __stack_chk_fail();
                    while (v5 != g27) {
                        // 0x8f64f0c0
                        __stack_chk_fail();
                        // continue -> 0x8f64f0c0
                    }
                    // 0x8f64f0cc
                    return 0;
                }
                int32_t v39 = v6;
                v22 = v15;
                int32_t v40 = *(int32_t *)(v39 + 28); // 0x8f64efa0
                if (a4 == 0) {
                    int32_t v41 = *(int32_t *)v39; // 0x8f64f050
                    int32_t v42 = a2 * a3 * v40; // 0x8f64f058
                    v22 = v42;
                    memcpy((char *)v41, (char *)v2, v42);
                    v25 = v12;
                    v23 = 0;
                    v19 = 0;
                    v18 = v10;
                    v17 = v11;
                    // branch -> 0x8f64f074
                } else {
                    int32_t v43 = v13 * v40; // 0x8f64effc
                    int32_t v44 = a2 * v40; // 0x8f64f004
                    v6 = 0;
                    int32_t v45 = (a3 - 1) * v43 + *(int32_t *)v39; // 0x8f64f010
                    v4 = v45;
                    int32_t v46 = v44 + 3 & -4; // 0x8f64f018
                    v1 = v46;
                    if (a3 != 0) {
                        int32_t v47 = v44; // 0x8f64f02c
                        int32_t v48 = v2; // 0x8f64f028
                        // branch -> 0x8f64f024
                        while (true) {
                            // 0x8f64f024
                            v22 = v47;
                            memcpy((char *)v45, (char *)v48, v47);
                            v1 = v46;
                            int32_t v49 = v4 - v43; // 0x8f64f03c
                            v4 = v49;
                            int32_t v50 = v6 + 1; // 0x8f64f040
                            v6 = v50;
                            int32_t v51 = v2 + v46; // 0x8f64f044
                            v2 = v51;
                            if (v50 != a3) {
                                // 0x8f64f024
                                v47 = v44;
                                v48 = v51;
                                v45 = v49;
                                // branch -> 0x8f64f024
                                continue;
                            } else {
                                v25 = v12;
                                v23 = v15;
                                v19 = v46;
                                v18 = v10;
                                v17 = v11;
                            }
                        }
                    } else {
                        v25 = v12;
                        v23 = 0;
                        v19 = a4;
                        v18 = v10;
                        v17 = v11;
                    }
                }
                // 0x8f64f074
                print_log(2, (int32_t)"flush surface...\n", v22, v1, v25, v17, v18, 0, v19, v23, 0, v5, 0);
                gfx_flush(g18, (int32_t)"flush surface...\n", v22, v1, v25, v17, v18);
                v20 = print_log(2, (int32_t)"flush surface end\n", v22, v1, v25, v17, v18, 0, v19, v23, 0, v5, 0);
                v24 = g19;
                v16 = v20;
                if (v24 != 0) {
                    // 0x8f64f0a4
                    v21 = mipi_cmd_trigger(v20, (int32_t)"flush surface end\n", v22, v24, v25, v17, v18, 0);
                    v16 = v21;
                    // branch -> 0x8f64f0a8
                }
                // 0x8f64f0a8
                display_render_done(v16, (int32_t)"flush surface end\n", v22, v24, v25, v17, v18);
                // branch -> 0x8f64f0b0
                // 0x8f64f0b0
                if (v5 == g27) {
                    // 0x8f64f0cc
                    return 1;
                }
                __stack_chk_fail();
                while (v5 != g27) {
                    // 0x8f64f0c0
                    __stack_chk_fail();
                    // continue -> 0x8f64f0c0
                }
                // 0x8f64f0cc
                return 0;
            }
        }
        // 0x8f64eedc
        print_log(-1, (int32_t)"Image (%d x %d) is too large for screen\n", a2, a3, v12, v11, v10, 0, v9, v8, 0, v5, 0);
        // branch -> 0x8f64f0b0
    }
    // 0x8f64f0b0
    if (v5 == g27) {
        // 0x8f64f0cc
        return 0;
    }
    __stack_chk_fail();
    while (v5 != g27) {
        // 0x8f64f0c0
        __stack_chk_fail();
        // continue -> 0x8f64f0c0
    }
    // 0x8f64f0cc
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);
// int tolower(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:48:50
