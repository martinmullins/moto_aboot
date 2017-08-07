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

int32_t bd65060_read_reg(int32_t a1, int32_t a2);
int32_t bd65060_write_reg(int32_t a1, int32_t a2);
int32_t clk_init(int32_t a1, int32_t a2, int32_t a3);
int32_t clk_set_rate(int32_t a1);
int32_t generic_mmc_erase_legacy(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t generic_mmc_write_logical(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4);
int32_t get_boot_seq(int32_t a1, int32_t a2, int32_t a3);
int32_t get_piv_image_size(int32_t a1, int32_t a2, int32_t a3);
int32_t LZ4_decompress_safe(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mdp_dsi_video_off(int32_t a1, int32_t a2, int32_t a3);
int32_t mdp_dsi_video_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_bus_clocks_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_bus_clocks_enable(void);
char * mmc_put_card_to_sleep(char * a1);
void mmc_set_power_on_wp_user(char * a1, int32_t a2, int32_t a3);
int32_t piv_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_get_smem_base_addr(void);
int32_t qtmr_irq(int32_t a1, int32_t a2);
int32_t smb1359_get_usbin_power_source_type(int32_t a1);
int32_t smb1359_read_reg(int32_t a1, int32_t a2);
int32_t sod_ramdump_enabled(char * a1, int32_t a2);
int32_t sod_ramdump_flag_pulled(int32_t a1, int32_t a2);
int32_t strings_count(int32_t a1, int32_t a2);
int32_t strings_from(char * a1, int32_t a2, int32_t a3);
int32_t target_fact_cbl_detect(int32_t a1, int32_t a2);
int32_t target_fact_cbl_setup(char * a1, int32_t a2);
int32_t target_mmc_erase_content(int32_t a1, int32_t a2);
int32_t target_mmc_init(int32_t * a1, int32_t a2);
int32_t target_platform_id(char * a1, int32_t a2, int32_t a3);
int32_t target_product_id(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g33 = 0; // LR
int32_t g34 = 0; // R0
int32_t g35 = 0; // R10
int32_t g36 = 0; // R11
int32_t g37 = 0; // R2
int32_t g38 = 0; // R3
int32_t g39 = 0; // R4
int32_t g40 = 0; // R5
int32_t g41 = 0; // R6
int32_t g42 = 0; // R7
int32_t g43 = 0; // R8
int32_t g44 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = -0x1a60cfd8; // 0x8f606470
int32_t g3 = -0x1a60cfd8; // 0x8f6064a4
int32_t g4 = -0x16d2bfc9; // 0x8f6064d8
int32_t g5 = -0x16d2bfc9; // 0x8f606530
int32_t g6 = -0x16d2bfc9; // 0x8f60658c
char * g7; // 0x8f657e58
int32_t g8 = 0x65440030; // 0x8f69c66f
int32_t g9 = 0; // 0x8f6a3f38
int32_t g10 = 0; // 0x8f6a3f44
char * g11; // 0x8f6b7977
int32_t g12 = 0; // 0x8f6b8ad0
int32_t g13 = 0; // 0x8f6e0a94
int32_t g14 = 0; // 0x8f6e0bd4
int32_t g15 = 0; // 0x8f6e0c68
int32_t g16 = 0; // 0x8f6e0c6c
char * g17; // 0x8f6e0c80
int32_t g18 = 0; // 0x8f6ed830
int32_t g19 = 0; // 0x8f70da40
int32_t g20 = 0; // 0x8f70da44
int32_t g21 = 0; // 0x8f70da48
int32_t g22 = 0; // 0x8f70da4c
char * g23; // 0x8f70da50
int32_t g24 = 0; // 0x8f70da54
int32_t g25 = 0; // 0x8f70da58
int32_t g26 = 0; // 0x8f70da60
int32_t g27 = 0; // 0x8f70da64
int32_t g28 = 0; // 0x8f70da68
char * g29; // 0x8f70da6c
char * g30; // 0x8f70da8c
int32_t g31 = 0; // 0x8f7112f4
int32_t g32 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f6066fc - 0x8f606963
int32_t target_mmc_init(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g34 = v1;
    int32_t v2 = g39; // 0x8f6066fc
    g39 = v1;
    int32_t v3 = g31;
    g38 = v3;
    int32_t v4 = target_mmc_device(v1); // 0x8f606710
    g34 = v4;
    int32_t v5;
    if (v4 == 0) {
        // 0x8f60671c
        g34 = 4;
        int32_t v6;
        print_log(4, (int32_t)"eMMC initialization failed!", g37, v3, v1, v3, v2, g40, g41, g42, g43, g33, v6);
        g34 = -1;
        // branch -> 0x8f6068fc
    } else {
        int32_t v7 = *(int32_t *)(v4 + 80); // R6
        g38 = 512;
        int32_t v8 = g39; // 0x8f606740
        *(int32_t *)v8 = 0x20000;
        *(int32_t *)(v8 + 4) = 2048;
        *(int32_t *)(v8 + 8) = 512;
        int32_t v9 = v4 + 48; // 0x8f606744
        uint32_t v10 = *(int32_t *)(v4 + 64); // 0x8f606748
        g38 = v10;
        int32_t v11 = *(int32_t *)(v4 + 68); // 0x8f60674c
        g34 = v9;
        *(int32_t *)(g39 + 12) = 0x8000 * v11 | v10 / 0x20000;
        uint32_t v12 = g38; // 0x8f606760
        int32_t v13 = v12 / 512 | 0x800000 * v11; // 0x8f60676c
        g38 = v13;
        *(int32_t *)(g39 + 16) = v12 / 2048 | 0x200000 * v11;
        *(int32_t *)(g39 + 20) = v13;
        int32_t v14 = target_mmc_erase_group_size(v9, v7, v11, v13); // 0x8f60677c
        *(int32_t *)(g39 + 44) = v14;
        g34 = v9;
        int32_t v15 = target_mmc_erase_content(v9, v7); // 0x8f60678c
        g34 = v15;
        *(int32_t *)(g39 + 56) = (int32_t)&g6;
        *(int32_t *)(g39 + 60) = (int32_t)&g5;
        *(int32_t *)(g39 + 64) = (int32_t)&g4;
        *(int32_t *)(g39 + 68) = (int32_t)&g3;
        g38 = &g2;
        *(int32_t *)(g39 + 72) = (int32_t)&g2;
        *(char *)(g39 + 48) = (char)v15;
        int32_t v16 = *(int32_t *)(v4 + 108); // 0x8f6067bc
        g38 = v16;
        *(char *)(g39 + 52) = (char)v16;
        int32_t v17 = *(int32_t *)(v4 + 124); // 0x8f6067c4
        g38 = v17;
        *(char *)(g39 + 53) = (char)v17;
        char v18 = *(char *)(v7 + 192); // 0x8f6067cc
        g38 = v18;
        *(char *)(g39 + 54) = v18;
        char v19 = *(char *)(v7 + 196); // 0x8f6067d4
        g38 = v19;
        *(char *)(g39 + 55) = v19;
        uint32_t v20 = *(int32_t *)(v4 + 108); // 0x8f6067dc
        g38 = v20;
        int32_t v21; // 0x8f6068f4
        int32_t v22; // 0x8f6068f8
        int32_t v23; // 0x8f6068f4
        if (v20 != 69) {
            // 0x8f6067e8
            if (v20 > 69) {
                // 0x8f606828
                if (v20 == 137) {
                    // 0x8f6068c0
                    g34 = (int32_t)&g11;
                    // branch -> 0x8f606888
                    // 0x8f606888
                    strcpy((char *)&g11, (char *)(int32_t)"Intel_Micron");
                    // branch -> 0x8f6068e8
                    // 0x8f6068e8
                    g38 = (int32_t)&g11;
                    g34 = 0;
                    *(int32_t *)(g39 + 24) = (int32_t)&g11;
                    v21 = v4;
                    v23 = *(int32_t *)(v21 + 68);
                    g38 = v23;
                    v22 = g39;
                    *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                    *(int32_t *)(v22 + 36) = v23;
                    // branch -> 0x8f6068fc
                    // 0x8f6068fc
                    v5 = g31;
                    g38 = v5;
                    if (v3 != v5) {
                        // 0x8f60690c
                        __stack_chk_fail();
                        // branch -> 0x8f606910
                    }
                    // 0x8f606910
                    return g34;
                }
                // 0x8f606830
                if (v20 <= 137) {
                    // 0x8f606834
                    if (v20 == 94) {
                        // 0x8f6068b4
                        g34 = (int32_t)&g11;
                        // branch -> 0x8f606888
                        // 0x8f606888
                        strcpy((char *)&g11, (char *)(int32_t)"Lexar_Micron");
                        // branch -> 0x8f6068e8
                        // 0x8f6068e8
                        g38 = (int32_t)&g11;
                        g34 = 0;
                        *(int32_t *)(g39 + 24) = (int32_t)&g11;
                        v21 = v4;
                        v23 = *(int32_t *)(v21 + 68);
                        g38 = v23;
                        v22 = g39;
                        *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                        *(int32_t *)(v22 + 36) = v23;
                        // branch -> 0x8f6068fc
                        // 0x8f6068fc
                        v5 = g31;
                        g38 = v5;
                        if (v3 != v5) {
                            // 0x8f60690c
                            __stack_chk_fail();
                            // branch -> 0x8f606910
                        }
                        // 0x8f606910
                        return g34;
                    }
                    // 0x8f60683c
                    if (v20 == 112) {
                        // 0x8f606844
                        g34 = (int32_t)&g11;
                        // branch -> 0x8f606888
                        // 0x8f606888
                        strcpy((char *)&g11, (char *)(int32_t)"Kingston");
                        // branch -> 0x8f6068e8
                    } else {
                        // 0x8f6068d8
                        g34 = (int32_t)&g11;
                        snprintf((char *)&g11, 16, "ID=%02X", v20);
                        // branch -> 0x8f6068e8
                    }
                    // 0x8f6068e8
                    g38 = (int32_t)&g11;
                    g34 = 0;
                    *(int32_t *)(g39 + 24) = (int32_t)&g11;
                    v21 = v4;
                    v23 = *(int32_t *)(v21 + 68);
                    g38 = v23;
                    v22 = g39;
                    *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                    *(int32_t *)(v22 + 36) = v23;
                    // branch -> 0x8f6068fc
                    // 0x8f6068fc
                    v5 = g31;
                    g38 = v5;
                    if (v3 != v5) {
                        // 0x8f60690c
                        __stack_chk_fail();
                        // branch -> 0x8f606910
                    }
                    // 0x8f606910
                    return g34;
                }
                // 0x8f606850
                if (v20 == 155) {
                    // 0x8f6068cc
                    g34 = (int32_t)&g11;
                    // branch -> 0x8f606888
                    // 0x8f606888
                    strcpy((char *)&g11, (char *)(int32_t)"Crucial_Micron");
                    // branch -> 0x8f6068e8
                    // 0x8f6068e8
                    g38 = (int32_t)&g11;
                    g34 = 0;
                    *(int32_t *)(g39 + 24) = (int32_t)&g11;
                    v21 = v4;
                    v23 = *(int32_t *)(v21 + 68);
                    g38 = v23;
                    v22 = g39;
                    *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                    *(int32_t *)(v22 + 36) = v23;
                    // branch -> 0x8f6068fc
                    // 0x8f6068fc
                    v5 = g31;
                    g38 = v5;
                    if (v3 != v5) {
                        // 0x8f60690c
                        __stack_chk_fail();
                        // branch -> 0x8f606910
                    }
                    // 0x8f606910
                    return g34;
                }
                // 0x8f606858
                if (v20 == 254) {
                    // 0x8f606890
                    g34 = (int32_t)&g11;
                    // branch -> 0x8f606888
                    // 0x8f606888
                    strcpy((char *)&g11, (char *)(int32_t)"Micron");
                    // branch -> 0x8f6068e8
                    // 0x8f6068e8
                    g38 = (int32_t)&g11;
                    g34 = 0;
                    *(int32_t *)(g39 + 24) = (int32_t)&g11;
                    v21 = v4;
                    v23 = *(int32_t *)(v21 + 68);
                    g38 = v23;
                    v22 = g39;
                    *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                    *(int32_t *)(v22 + 36) = v23;
                    // branch -> 0x8f6068fc
                    // 0x8f6068fc
                    v5 = g31;
                    g38 = v5;
                    if (v3 != v5) {
                        // 0x8f60690c
                        __stack_chk_fail();
                        // branch -> 0x8f606910
                    }
                    // 0x8f606910
                    return g34;
                }
                // 0x8f606860
                if (v20 == 144) {
                    // 0x8f606868
                    g34 = (int32_t)&g11;
                    // branch -> 0x8f606888
                    // 0x8f606888
                    strcpy((char *)&g11, (char *)(int32_t)"SKHynix");
                    // branch -> 0x8f6068e8
                } else {
                    // 0x8f6068d8
                    g34 = (int32_t)&g11;
                    snprintf((char *)&g11, 16, "ID=%02X", v20);
                    // branch -> 0x8f6068e8
                }
                // 0x8f6068e8
                g38 = (int32_t)&g11;
                g34 = 0;
                *(int32_t *)(g39 + 24) = (int32_t)&g11;
                v21 = v4;
                v23 = *(int32_t *)(v21 + 68);
                g38 = v23;
                v22 = g39;
                *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                *(int32_t *)(v22 + 36) = v23;
                // branch -> 0x8f6068fc
                // 0x8f6068fc
                v5 = g31;
                g38 = v5;
                if (v3 != v5) {
                    // 0x8f60690c
                    __stack_chk_fail();
                    // branch -> 0x8f606910
                }
                // 0x8f606910
                return g34;
            }
            // 0x8f6067ec
            if (v20 == 17) {
                // 0x8f606874
                g34 = (int32_t)&g11;
                // branch -> 0x8f606888
                // 0x8f606888
                strcpy((char *)&g11, (char *)(int32_t)"Toshiba");
                // branch -> 0x8f6068e8
                // 0x8f6068e8
                g38 = (int32_t)&g11;
                g34 = 0;
                *(int32_t *)(g39 + 24) = (int32_t)&g11;
                v21 = v4;
                v23 = *(int32_t *)(v21 + 68);
                g38 = v23;
                v22 = g39;
                *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                *(int32_t *)(v22 + 36) = v23;
                // branch -> 0x8f6068fc
                // 0x8f6068fc
                v5 = g31;
                g38 = v5;
                if (v3 != v5) {
                    // 0x8f60690c
                    __stack_chk_fail();
                    // branch -> 0x8f606910
                }
                // 0x8f606910
                return g34;
            }
            // 0x8f6067f4
            if (v20 <= 17) {
                // 0x8f6067f8
                if (v20 == 2) {
                    // 0x8f606880
                    g34 = (int32_t)&g11;
                    // branch -> 0x8f606888
                    // 0x8f606888
                    strcpy((char *)&g11, (char *)(int32_t)"Sandisk");
                    // branch -> 0x8f6068e8
                    // 0x8f6068e8
                    g38 = (int32_t)&g11;
                    g34 = 0;
                    *(int32_t *)(g39 + 24) = (int32_t)&g11;
                    v21 = v4;
                    v23 = *(int32_t *)(v21 + 68);
                    g38 = v23;
                    v22 = g39;
                    *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                    *(int32_t *)(v22 + 36) = v23;
                    // branch -> 0x8f6068fc
                    // 0x8f6068fc
                    v5 = g31;
                    g38 = v5;
                    if (v3 != v5) {
                        // 0x8f60690c
                        __stack_chk_fail();
                        // branch -> 0x8f606910
                    }
                    // 0x8f606910
                    return g34;
                }
                // 0x8f606800
                if (v20 == 3) {
                    // 0x8f606874
                    g34 = (int32_t)&g11;
                    // branch -> 0x8f606888
                    // 0x8f606888
                    strcpy((char *)&g11, (char *)(int32_t)"Toshiba");
                    // branch -> 0x8f6068e8
                } else {
                    // 0x8f6068d8
                    g34 = (int32_t)&g11;
                    snprintf((char *)&g11, 16, "ID=%02X", v20);
                    // branch -> 0x8f6068e8
                }
                // 0x8f6068e8
                g38 = (int32_t)&g11;
                g34 = 0;
                *(int32_t *)(g39 + 24) = (int32_t)&g11;
                v21 = v4;
                v23 = *(int32_t *)(v21 + 68);
                g38 = v23;
                v22 = g39;
                *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                *(int32_t *)(v22 + 36) = v23;
                // branch -> 0x8f6068fc
                // 0x8f6068fc
                v5 = g31;
                g38 = v5;
                if (v3 != v5) {
                    // 0x8f60690c
                    __stack_chk_fail();
                    // branch -> 0x8f606910
                }
                // 0x8f606910
                return g34;
            }
            // 0x8f60680c
            if (v20 == 21) {
                // 0x8f60689c
                g34 = (int32_t)&g11;
                // branch -> 0x8f606888
                // 0x8f606888
                strcpy((char *)&g11, (char *)(int32_t)"Samsung");
                // branch -> 0x8f6068e8
                // 0x8f6068e8
                g38 = (int32_t)&g11;
                g34 = 0;
                *(int32_t *)(g39 + 24) = (int32_t)&g11;
                v21 = v4;
                v23 = *(int32_t *)(v21 + 68);
                g38 = v23;
                v22 = g39;
                *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                *(int32_t *)(v22 + 36) = v23;
                // branch -> 0x8f6068fc
                // 0x8f6068fc
                v5 = g31;
                g38 = v5;
                if (v3 != v5) {
                    // 0x8f60690c
                    __stack_chk_fail();
                    // branch -> 0x8f606910
                }
                // 0x8f606910
                return g34;
            }
            // 0x8f606814
            if (v20 == 32) {
                // 0x8f6068a8
                g34 = (int32_t)&g11;
                // branch -> 0x8f606888
                // 0x8f606888
                strcpy((char *)&g11, (char *)(int32_t)"STM_Micron");
                // branch -> 0x8f6068e8
                // 0x8f6068e8
                g38 = (int32_t)&g11;
                g34 = 0;
                *(int32_t *)(g39 + 24) = (int32_t)&g11;
                v21 = v4;
                v23 = *(int32_t *)(v21 + 68);
                g38 = v23;
                v22 = g39;
                *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
                *(int32_t *)(v22 + 36) = v23;
                // branch -> 0x8f6068fc
                // 0x8f6068fc
                v5 = g31;
                g38 = v5;
                if (v3 != v5) {
                    // 0x8f60690c
                    __stack_chk_fail();
                    // branch -> 0x8f606910
                }
                // 0x8f606910
                return g34;
            }
            // 0x8f60681c
            if (v20 == 19) {
                // 0x8f606890
                g34 = (int32_t)&g11;
                // branch -> 0x8f606888
                // 0x8f606888
                strcpy((char *)&g11, (char *)(int32_t)"Micron");
                // branch -> 0x8f6068e8
            } else {
                // 0x8f6068d8
                g34 = (int32_t)&g11;
                snprintf((char *)&g11, 16, "ID=%02X", v20);
                // branch -> 0x8f6068e8
            }
            // 0x8f6068e8
            g38 = (int32_t)&g11;
            g34 = 0;
            *(int32_t *)(g39 + 24) = (int32_t)&g11;
            v21 = v4;
            v23 = *(int32_t *)(v21 + 68);
            g38 = v23;
            v22 = g39;
            *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
            *(int32_t *)(v22 + 36) = v23;
            // branch -> 0x8f6068fc
            // 0x8f6068fc
            v5 = g31;
            g38 = v5;
            if (v3 != v5) {
                // 0x8f60690c
                __stack_chk_fail();
                // branch -> 0x8f606910
            }
            // 0x8f606910
            return g34;
        }
        // 0x8f606880
        g34 = (int32_t)&g11;
        // branch -> 0x8f606888
        // 0x8f606888
        strcpy((char *)&g11, (char *)(int32_t)"Sandisk");
        // branch -> 0x8f6068e8
        // 0x8f6068e8
        g38 = (int32_t)&g11;
        g34 = 0;
        *(int32_t *)(g39 + 24) = (int32_t)&g11;
        v21 = v4;
        v23 = *(int32_t *)(v21 + 68);
        g38 = v23;
        v22 = g39;
        *(int32_t *)(v22 + 32) = *(int32_t *)(v21 + 64);
        *(int32_t *)(v22 + 36) = v23;
        // branch -> 0x8f6068fc
    }
    // 0x8f6068fc
    v5 = g31;
    g38 = v5;
    if (v3 != v5) {
        // 0x8f60690c
        __stack_chk_fail();
        // branch -> 0x8f606910
    }
    // 0x8f606910
    return g34;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strcpy(char * restrict dest, const char * restrict src);
// char * strdup(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:56:14
