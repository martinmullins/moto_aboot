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

int32_t arch_context_switch(int32_t a1, int32_t a2, int32_t a3);
int32_t arch_early_init(void);
int32_t arch_init(int32_t a1, int32_t a2);
int32_t arch_thread_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t bptools_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_get_buffer(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_printf(char * a1, int32_t a2);
int32_t fboot_usb_init(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_usb_write(int32_t a1, int32_t a2);
int32_t fboot_usb_write_queue(int32_t a1, uint32_t a2, int32_t a3);
int32_t fboot_usb_write_wait(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_init(char * a1, int32_t a2);
int32_t generic_mmc_read_sector(int64_t a1, int64_t a2, int32_t a3, int32_t a4);
int32_t hab_su_code(int32_t a1, int32_t a2);
int32_t hab_su_srk_selection(int32_t a1, int32_t a2);
int32_t handle_fboot_command_erase(int32_t a1, int32_t a2);
int32_t handle_fboot_command_multiflash(int32_t * a1);
int32_t is_qcom_mode(void);
int32_t mcs_DER_decode(char * a1, int16_t * a2, char * a3, int16_t * a4);
int32_t mcs_DER_decodeItem(int32_t a1, int32_t a2, int32_t a3);
char * mmc_get_card_status_isra_3(char * a1, int32_t * a2, int32_t * a3);
int32_t pm8x41_reset_configure(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t power_source_detected(int32_t a1, int32_t a2, int32_t a3);
int32_t remove_sp_block(int32_t a1);
int32_t sdhci_mode_disable(int32_t a1);
int32_t SecBoundSigAllowed(void);
int32_t SecICTypeRead(void);
int32_t smb1359_init(int32_t a1, int32_t a2, int32_t a3);
int32_t smb1359_masked_write_reg(int32_t a1, int32_t a2, int32_t a3);
int32_t update_sp_block(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g28 = false; // LR
int32_t g29 = 0; // R0
int32_t g30 = 0; // R1
int32_t g31 = 0; // R10
int32_t g32 = 0; // R2
int32_t g33 = 0; // R3
int32_t g34 = 0; // R4
int32_t g35 = 0; // R5
int32_t g36 = 0; // R6
int32_t g37 = 0; // R7
int32_t g38 = 0; // R8
int32_t g39 = 0; // R9
int32_t g1 = -0x15fffffa; // 0x8f600000
int32_t g2 = -0x1a60cfa4; // 0x8f619a9c
int32_t g3 = -0x1a60cfc4; // 0x8f62d6e8
char * g4 = "\n"; // 0x8f6ac1b0
int32_t g5 = -0x709d28c8; // 0x8f6ac1cc
int32_t g6 = 0; // 0x8f6c03b4
int32_t g7 = 0; // 0x8f6c064c
int32_t g8 = 0; // 0x8f6c0650
int32_t g9 = 0; // 0x8f6c0654
int32_t g10 = 0; // 0x8f6c0658
int32_t g11 = 0; // 0x8f6c065c
int32_t g12 = 0; // 0x8f6c0660
int32_t g13 = 0; // 0x8f6c0664
int32_t g14 = 0; // 0x8f6c0668
int32_t g15 = 0; // 0x8f6c066c
int32_t g16 = 0; // 0x8f6e0bd4
char * g17; // 0x8f6e12e8
int32_t g18 = 0; // 0x8f6e12ec
int32_t g19 = 0; // 0x8f6e12f0
int32_t g20 = 0; // 0x8f710c38
char * g21; // 0x8f710c3c
int32_t g22 = 0; // 0x8f710c48
int32_t g23 = 0; // 0x8f710c60
char * g24; // 0x8f710e74
int32_t g25 = 0; // 0x8f7112f4
int32_t g26 = 0; // 0x8f711534
char * g27; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f623c30 - 0x8f623daf
int32_t handle_fboot_command_multiflash(int32_t * a1) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = *(int32_t *)(v1 + 12); // 0x8f623c3c
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x8f623c40
    int32_t v4 = g25;
    int32_t v5 = *a1; // 0x8f623c48
    int32_t v6 = &g6; // R4
    int32_t v7 = (int32_t)*(char *)(v2 + 1) - 48; // 0x8f623c58
    int32_t v8 = v7 == 0; // R3
    int32_t v9; // 0x8f623d38
    int32_t v10; // 0x8f623d38
    int32_t v11; // 0x8f623d58
    int32_t result; // R0
    int32_t str2; // R5
    int32_t str3;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t str; // 0x8f623c94
    int32_t v15; // 0x8f623d1c
    int32_t v16; // 0x8f623d24
    int32_t v17; // 0x8f623d2c
    int32_t v18; // 0x8f623d20
    if (v3 < 0x200000) {
        // after_if_8f623c6c_0.thread
        // branch -> 0x8f623c94
        // 0x8f623c94
        str = v2 + 3;
        str2 = str;
        if (strcmp((char *)str, "motoboot") == 0 || strcmp((char *)str2, "partition") == 0 || strcmp((char *)str2, "cid_prov") == 0) {
            // 0x8f623cd4
            // branch -> 0x8f623cdc
            // 0x8f623cdc
            fboot_info((int32_t)"INFO", (int32_t)"multiflashing of motoboot gpt, or cid_prov not supported", 0x200000, 0, v12, 0, 0, str3, 0, 0, 0);
            // branch -> 0x8f623d60
            // 0x8f623d60
            *(int32_t *)v6 = 0;
            // branch -> 0x8f623d6c
            // 0x8f623d6c
            if (v4 != g25) {
                // 0x8f623d7c
                __stack_chk_fail();
                // branch -> 0x8f623d80
            }
            // 0x8f623d80
            return 3;
        }
        // 0x8f623ce4
        v14 = g6;
        if (v14 != 0) {
            // 0x8f623d18
            v15 = str2;
            v18 = v7;
            v16 = v5;
            v17 = v3;
            v9 = str3;
            if (v14 == 1) {
                // 0x8f623d38
                v10 = cmd_multiflash_mmc_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                v13 = v10;
                // branch -> 0x8f623d3c
            } else {
                // 0x8f623d58
                v11 = cmd_multiflash_mmc_sparse_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                v13 = v11;
                // branch -> 0x8f623d3c
            }
            // 0x8f623d3c
            if (v13 == 3) {
                // 0x8f623d60
                result = 3;
                *(int32_t *)v6 = 0;
                // branch -> 0x8f623d6c
            } else {
                // 0x8f623d44
                result = 1;
                if (v7 != 0) {
                    // if_8f623d4c_0_true
                    *(int32_t *)v6 = 0;
                    // branch -> 0x8f623d6c
                }
            }
            // 0x8f623d6c
            if (v4 != g25) {
                // 0x8f623d7c
                __stack_chk_fail();
                // branch -> 0x8f623d80
            }
            // 0x8f623d80
            return result;
        }
        // 0x8f623cf0
        if (v3 < 28) {
            // if_8f623cf4_0_true
            // branch -> 0x8f623cdc
            // 0x8f623cdc
            fboot_info((int32_t)"INFO", (int32_t)"multiflash buffer size too small", 0x200000, v14, v12, 0, 0, str3, 0, 0, 0);
            // branch -> 0x8f623d60
        } else {
            // 0x8f623d00
            *(int32_t *)v6 = *(int32_t *)v5 == -0x12d900c6 ? 2 : 1;
            // branch -> 0x8f623d18
            // 0x8f623d18
            v15 = str2;
            v18 = v7;
            v16 = v5;
            v17 = v3;
            v9 = str3;
            if (g6 == 1) {
                // 0x8f623d38
                v10 = cmd_multiflash_mmc_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                v13 = v10;
                // branch -> 0x8f623d3c
            } else {
                // 0x8f623d58
                v11 = cmd_multiflash_mmc_sparse_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                v13 = v11;
                // branch -> 0x8f623d3c
            }
            // 0x8f623d3c
            if (v13 != 3) {
                // 0x8f623d44
                if (v7 != 0) {
                    // if_8f623d4c_0_true
                    *(int32_t *)v6 = 0;
                    // branch -> 0x8f623d6c
                }
                // 0x8f623d6c
                if (v4 != g25) {
                    // 0x8f623d7c
                    __stack_chk_fail();
                    // branch -> 0x8f623d80
                }
                // 0x8f623d80
                return 1;
            }
        }
        // 0x8f623d60
        *(int32_t *)v6 = 0;
        // branch -> 0x8f623d6c
        // 0x8f623d6c
        if (v4 != g25) {
            // 0x8f623d7c
            __stack_chk_fail();
            // branch -> 0x8f623d80
        }
        // 0x8f623d80
        return 3;
    }
    // after_if_8f623c6c_0
    if (v7 == 0) {
        int32_t v19 = &str3; // 0x8f623c7c_0
        sprintf((char *)&str3, "multiflash buffer too small: < %d bytes\n", 0x200000);
        // branch -> 0x8f623cdc
        // 0x8f623cdc
        fboot_info((int32_t)"INFO", v19, 0x200000, v8, v12, 0, 0, str3, 0, 0, 0);
        // branch -> 0x8f623d60
        // 0x8f623d60
        *(int32_t *)v6 = 0;
        // branch -> 0x8f623d6c
        // 0x8f623d6c
        if (v4 != g25) {
            // 0x8f623d7c
            __stack_chk_fail();
            // branch -> 0x8f623d80
        }
        // 0x8f623d80
        return 3;
    }
    // 0x8f623c94
    str = v2 + 3;
    str2 = str;
    if (strcmp((char *)str, "motoboot") != 0) {
        // 0x8f623cac
        if (strcmp((char *)str2, "partition") != 0) {
            // 0x8f623cc0
            if (strcmp((char *)str2, "cid_prov") != 0) {
                // 0x8f623ce4
                v14 = g6;
                if (v14 != 0) {
                    // 0x8f623d18
                    v15 = str2;
                    v18 = v7;
                    v16 = v5;
                    v17 = v3;
                    v9 = str3;
                    if (v14 == 1) {
                        // 0x8f623d38
                        v10 = cmd_multiflash_mmc_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                        v13 = v10;
                        // branch -> 0x8f623d3c
                    } else {
                        // 0x8f623d58
                        v11 = cmd_multiflash_mmc_sparse_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                        v13 = v11;
                        // branch -> 0x8f623d3c
                    }
                    // 0x8f623d3c
                    if (v13 == 3) {
                        // 0x8f623d60
                        result = 3;
                        *(int32_t *)v6 = 0;
                        // branch -> 0x8f623d6c
                    } else {
                        // 0x8f623d44
                        result = 1;
                        if (v7 != 0) {
                            // if_8f623d4c_0_true
                            *(int32_t *)v6 = 0;
                            // branch -> 0x8f623d6c
                        }
                    }
                    // 0x8f623d6c
                    if (v4 != g25) {
                        // 0x8f623d7c
                        __stack_chk_fail();
                        // branch -> 0x8f623d80
                    }
                    // 0x8f623d80
                    return result;
                }
                // 0x8f623cf0
                if (v3 < 28) {
                    // if_8f623cf4_0_true
                    // branch -> 0x8f623cdc
                    // 0x8f623cdc
                    fboot_info((int32_t)"INFO", (int32_t)"multiflash buffer size too small", 0x200000, v14, v12, 0, 0, str3, 0, 0, 0);
                    // branch -> 0x8f623d60
                } else {
                    // 0x8f623d00
                    *(int32_t *)v6 = *(int32_t *)v5 == -0x12d900c6 ? 2 : 1;
                    // branch -> 0x8f623d18
                    // 0x8f623d18
                    v15 = str2;
                    v18 = v7;
                    v16 = v5;
                    v17 = v3;
                    v9 = str3;
                    if (g6 == 1) {
                        // 0x8f623d38
                        v10 = cmd_multiflash_mmc_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                        v13 = v10;
                        // branch -> 0x8f623d3c
                    } else {
                        // 0x8f623d58
                        v11 = cmd_multiflash_mmc_sparse_img(v15, v16, v17, 0, v18, 0, 0, v9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                        v13 = v11;
                        // branch -> 0x8f623d3c
                    }
                    // 0x8f623d3c
                    if (v13 != 3) {
                        // 0x8f623d44
                        if (v7 != 0) {
                            // if_8f623d4c_0_true
                            *(int32_t *)v6 = 0;
                            // branch -> 0x8f623d6c
                        }
                        // 0x8f623d6c
                        if (v4 != g25) {
                            // 0x8f623d7c
                            __stack_chk_fail();
                            // branch -> 0x8f623d80
                        }
                        // 0x8f623d80
                        return 1;
                    }
                }
                // 0x8f623d60
                *(int32_t *)v6 = 0;
                // branch -> 0x8f623d6c
                // 0x8f623d6c
                if (v4 != g25) {
                    // 0x8f623d7c
                    __stack_chk_fail();
                    // branch -> 0x8f623d80
                }
                // 0x8f623d80
                return 3;
            }
        }
    }
    // 0x8f623cd4
    // branch -> 0x8f623cdc
    // 0x8f623cdc
    fboot_info((int32_t)"INFO", (int32_t)"multiflashing of motoboot gpt, or cid_prov not supported", 0x200000, v8, v12, 0, 0, str3, 0, 0, 0);
    // branch -> 0x8f623d60
    // 0x8f623d60
    *(int32_t *)v6 = 0;
    // branch -> 0x8f623d6c
    // 0x8f623d6c
    if (v4 != g25) {
        // 0x8f623d7c
        __stack_chk_fail();
        // branch -> 0x8f623d80
    }
    // 0x8f623d80
    return 3;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:29:09
