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

// Address range: 0x8f6504a4 - 0x8f65066b
int32_t generic_mmc_init(char * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1; // 0x8f6504a4_0
    int32_t v2 = g28 ? -0x709af928 : 0; // 0x8f6504a4
    int32_t v3 = (int32_t)&g27; // R4
    char * v4 = g27;
    int32_t v5 = (int32_t)v4; // R5
    int32_t v6 = g25;
    int32_t result2; // 0x8f650618
    if (v4 == NULL) {
        // 0x8f6504cc
        int32_t v7;
        print_log(1, (int32_t)"Initializing eMMC\n", g32, v6, v1, v6, g34, g35, g36, g37, g38, v2, v7);
        char * mem = malloc(80); // 0x8f6504dc
        *(int32_t *)v3 = (int32_t)mem;
        if (mem != NULL) {
            // 0x8f6504fc
            memset(mem, v5, 80);
            int32_t result = target_mmc_init((int32_t)g27, v5, 80, v6, v1, v6, g34, g35, g36, g37, g38, v2); // 0x8f65050c
            if (result == 0) {
                int32_t v8 = (int32_t)g27;
                int32_t v9 = 0; // R3
                uint32_t v10 = *(int32_t *)(v8 + 36); // 0x8f650544
                uint32_t v11 = 0x40000000; // 0x8f6505602
                int32_t v12 = 0; // 0x8f650568
                // branch -> 0x8f650548
                while (true) {
                    // 0x8f650548
                    int32_t v13;
                    int32_t v14;
                    int32_t v15;
                    int32_t v16;
                    int32_t v17;
                    int32_t v18;
                    int32_t v19;
                    int32_t v20; // 0x8f650574
                    int32_t v21; // 0x8f650588
                    int32_t v22; // 0x8f65059c
                    int32_t v23; // 0x8f6505b0
                    int32_t v24; // 0x8f6505c4
                    int32_t v25; // 0x8f6505d8
                    int32_t v26; // 0x8f6505ec
                    int32_t v27; // 0x8f650600
                    int32_t v28; // 0x8f6505ec
                    if (v12 == v10) {
                        // if_8f65054c_0_true
                        if (v11 >= *(int32_t *)(v8 + 32)) {
                            // 0x8f650560
                            *(int32_t *)(v8 + 40) = 4 * v10 | v11 / 0x40000000;
                            v20 = *(int32_t *)v8;
                            print_log(2, (int32_t)"mmc card: block size=%u\n", v20, v9, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v13 = (int32_t)g27;
                            v21 = *(int32_t *)(v13 + 4);
                            print_log(2, (int32_t)"mmc card: page size=%u\n", v21, v13, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v14 = (int32_t)g27;
                            v22 = *(int32_t *)(v14 + 8);
                            print_log(2, (int32_t)"mmc card: sector size=%u\n", v22, v14, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v15 = (int32_t)g27;
                            v23 = *(int32_t *)(v15 + 12);
                            print_log(2, (int32_t)"mmc card: num_blocks=%u\n", v23, v15, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v16 = (int32_t)g27;
                            v24 = *(int32_t *)(v16 + 16);
                            print_log(2, (int32_t)"mmc card: num_pages=%u\n", v24, v16, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v17 = (int32_t)g27;
                            v25 = *(int32_t *)(v17 + 20);
                            print_log(2, (int32_t)"mmc card: num_sectors=%u\n", v25, v17, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v18 = (int32_t)g27;
                            v26 = *(int32_t *)(v18 + 32);
                            v28 = *(int32_t *)(v18 + 36);
                            print_log(2, (int32_t)"mmc card: size=%llu\n", v26, v28, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v19 = (int32_t)g27;
                            v27 = *(int32_t *)(v19 + 40);
                            print_log(2, (int32_t)"mmc card: size_in_gb=%u\n", v27, v19, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            print_log(1, (int32_t)"eMMC successfully initialized\n", v27, v19, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            // branch -> 0x8f650614
                            // 0x8f650614
                            if (v6 != g25) {
                                // 0x8f650628
                                __stack_chk_fail();
                                // branch -> 0x8f65062c
                            }
                            // 0x8f65062c
                            return result;
                        }
                    } else {
                        // after_if_8f65054c_0
                        if (v12 >= v10) {
                            // 0x8f650560
                            *(int32_t *)(v8 + 40) = 4 * v12 | v11 / 0x40000000;
                            v20 = *(int32_t *)v8;
                            print_log(2, (int32_t)"mmc card: block size=%u\n", v20, v9, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v13 = (int32_t)g27;
                            v21 = *(int32_t *)(v13 + 4);
                            print_log(2, (int32_t)"mmc card: page size=%u\n", v21, v13, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v14 = (int32_t)g27;
                            v22 = *(int32_t *)(v14 + 8);
                            print_log(2, (int32_t)"mmc card: sector size=%u\n", v22, v14, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v15 = (int32_t)g27;
                            v23 = *(int32_t *)(v15 + 12);
                            print_log(2, (int32_t)"mmc card: num_blocks=%u\n", v23, v15, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v16 = (int32_t)g27;
                            v24 = *(int32_t *)(v16 + 16);
                            print_log(2, (int32_t)"mmc card: num_pages=%u\n", v24, v16, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v17 = (int32_t)g27;
                            v25 = *(int32_t *)(v17 + 20);
                            print_log(2, (int32_t)"mmc card: num_sectors=%u\n", v25, v17, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v18 = (int32_t)g27;
                            v26 = *(int32_t *)(v18 + 32);
                            v28 = *(int32_t *)(v18 + 36);
                            print_log(2, (int32_t)"mmc card: size=%llu\n", v26, v28, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            v19 = (int32_t)g27;
                            v27 = *(int32_t *)(v19 + 40);
                            print_log(2, (int32_t)"mmc card: size_in_gb=%u\n", v27, v19, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            print_log(1, (int32_t)"eMMC successfully initialized\n", v27, v19, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                            // branch -> 0x8f650614
                            // 0x8f650614
                            if (v6 != g25) {
                                // 0x8f650628
                                __stack_chk_fail();
                                // branch -> 0x8f65062c
                            }
                            // 0x8f65062c
                            return result;
                        }
                    }
                    int32_t v29 = 2 * v11; // 0x8f650554
                    int32_t v30 = (int32_t)(v29 < v11) | 2 * v12; // 0x8f650558
                    v9 = v30;
                    v11 = v29;
                    v12 = v30;
                    // branch -> 0x8f650548
                }
            } else {
                // 0x8f650518
                print_log(-1, (int32_t)"ERROR: target_mmc_init() failed\n", 80, v6, v1, v6, g34, g35, g36, g37, g38, v2, v7);
                free(g27);
                *(int32_t *)v3 = v5;
                // branch -> 0x8f650530
                // 0x8f650530
                // branch -> 0x8f650614
            }
            // 0x8f650614
            if (v6 != g25) {
                // 0x8f650628
                __stack_chk_fail();
                // branch -> 0x8f65062c
            }
            // 0x8f65062c
            return -1;
        }
        // 0x8f6504ec
        print_log(-1, (int32_t)"ERROR: out of memory\n", g32, v6, v1, v6, g34, g35, g36, g37, g38, v2, v7);
        // branch -> 0x8f650530
        // 0x8f650530
        result2 = -1;
        // branch -> 0x8f650614
    } else {
        // if_8f6504c4_0_true
        result2 = 0;
        // branch -> 0x8f650614
    }
    // 0x8f650614
    if (v6 != g25) {
        // 0x8f650628
        __stack_chk_fail();
        // branch -> 0x8f65062c
    }
    // 0x8f65062c
    return result2;
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