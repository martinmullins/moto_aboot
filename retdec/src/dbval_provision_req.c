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

int32_t clk_get(char * str2);
int32_t clk_get_set_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_provision_req(char a1, char * a2, int32_t a3);
int32_t dbval_provision_store(char * a1, int32_t * a2, char * a3);
int32_t event_signal(int32_t a1, int32_t a2, int32_t a3);
void event_unsignal(int32_t a1);
int32_t fdt_next_tag(int32_t a1, int32_t a2, int32_t * a3);
int32_t fdt_offset_ptr(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_erase_sector(int64_t a1, int64_t a2);
int32_t generic_mmc_get_protect_group_size(int32_t a1, int32_t a2);
int32_t get_root_detect_disabled(void);
int32_t getvar_handler_root_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_map_address(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_virtual_to_physical(int32_t a1, int32_t a2, int32_t a3);
int32_t load_partition(int32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t load_partition_by_name(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mcs_clear_hash_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_initialize_montgomery_alg(int32_t * a1, int32_t a2);
int32_t mdss_dsi_auto_pll_config(int32_t * a1, int32_t a2);
int32_t mdss_dsi_host_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_dsi_phy_init(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_cmd_bta_sw_trigger(int32_t a1, int32_t a2, int32_t a3);
int32_t nexus_usbpidvid(int32_t a1, int32_t a2);
int32_t read_root_status(void);
char * sdhci_msm_execute_tuning(char * a1, int32_t a2, int32_t a3);
int32_t sdhci_msm_toggle_cdr(int32_t * a1, int32_t a2, int32_t a3);
int32_t sod_init(void);
int32_t sod_ramdump_run(void);
int32_t thread_init(int32_t a1, int32_t a2);
int32_t thread_set_name(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g26 = 0; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R10
int32_t g30 = 0; // R11
int32_t g31 = 0; // R2
int32_t g32 = 0; // R3
int32_t g33 = 0; // R4
int32_t g34 = 0; // R5
int32_t g35 = 0; // R6
int32_t g36 = 0; // R7
int32_t g37 = 0; // R8
int32_t g38 = 0; // R9
int32_t g1 = -0x15ffffb3; // 0x8f6361f4
char * g2 = "\xff\xff"; // 0x8f67d950
int32_t g3 = 0xff0fff; // 0x8f67db7c
int32_t g4 = 0x6d0f0703; // 0x8f67f558
int32_t g5 = 0x1c9496e0; // 0x8f67f5a0
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = 0x746e6300; // 0x8f6a4e20
int32_t g8 = 1; // 0x8f6ac0f0
int32_t g9 = -1; // 0x8f6ac214
int32_t g10 = -0x70a00000; // 0x8f6ac224
char * g11 = "\xf1"; // 0x8f6affa8
int32_t g12 = 0; // 0x8f6b7988
int32_t g13 = 0; // 0x8f6b798c
int32_t g14 = 0; // 0x8f6b8ad0
int32_t g15 = 0; // 0x8f6b8ad4
char * g16; // 0x8f6c0628
char * g17; // 0x8f6c0649
int32_t (*g18)(int32_t, int32_t, int32_t) = NULL; // 0x8f6e0784
int32_t g19 = 0; // 0x8f6e0790
char * g20; // 0x8f6e0794
int16_t * g21 = NULL; // 0x8f70da9c
int32_t g22 = 0; // 0x8f70da9e
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114ac
int32_t g25 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f662f08 - 0x8f66301f
int32_t dbval_provision_req(char a1, char * a2, int32_t a3) {
    int32_t v1 = a1;
    int32_t v2 = (int32_t)a2; // R4
    int32_t v3 = g23;
    if (a3 == 0) {
        // if_8f662f24_0_true
        // branch -> 0x8f662fe8
        // 0x8f662fe8
        if (v3 != g23) {
            // 0x8f662ff8
            __stack_chk_fail();
            // branch -> 0x8f662ffc
        }
        // 0x8f662ffc
        return 240;
    }
    // 0x8f662f30
    int32_t v4; // 0x8f662fbc
    int32_t v5; // 0x8f662fcc
    int32_t v6; // 0x8f662fd0
    int32_t result; // R0
    int32_t v7;
    int32_t v8; // 0x8f662f90
    int32_t v9; // 0x8f662fb8
    if (a2 == NULL) {
        // 0x8f662f44
        // branch -> 0x8f662f4c
        // 0x8f662f4c
        if (v1 != 85) {
            // if_8f662f50_0_true
            result = 85;
            // branch -> 0x8f662f84
            // 0x8f662f84
            v8 = v2;
            if (v8 == 0) {
                // after_if_8f662f94_0.thread
                // branch -> 0x8f662fe8
            }
            // 0x8f662fe8
            if (v3 != g23) {
                // 0x8f662ff8
                __stack_chk_fail();
                // branch -> 0x8f662ffc
            }
            // 0x8f662ffc
            return result;
        }
    } else {
        // after_if_8f662f38_0
        *a2 = 1;
        if (v1 != 204) {
            // 0x8f662f44
            if (v1 == 240) {
                // 0x8f662f5c
                dbval_debug_print2((int32_t)"dbval_provision_req: Processing CID Request", v3, a3);
                int32_t v10;
                int32_t v11 = dbval_provision_cid_req(v2, a3, (int32_t)&g21, 1, v1, v3, a3, g33, g34, g35, g36, g26, v10, 0, 0); // 0x8f662f70
                result = v11;
                // branch -> 0x8f662f84
                // 0x8f662f84
                v8 = v2;
                if (v8 == 0) {
                    // after_if_8f662f94_0.thread
                    // branch -> 0x8f662fe8
                } else {
                    // after_if_8f662f94_0
                    if (v11 == 15) {
                        // 0x8f662fa0
                        *(char *)v8 = 1;
                        v9 = (int32_t)*(int16_t *)&g21;
                        v7 = 0x1000000 * v1 / 0x1000000;
                        v4 = dbval_sigreq_create_outer(v2, (int32_t)&g22, v7, v9, v1, v3, a3, g33, g34, g35, g36, g26);
                        result = v4;
                        if (v4 == 15) {
                            // 0x8f662fc8
                            v5 = dbval_debug_print2((int32_t)"dbval_provision_req: Starting Timer", (int32_t)&g22, v7);
                            v6 = dbval_start_timer(v5, (int32_t)&g22, v7, v9);
                            result = v6;
                            if (v6 == 15) {
                                // if_8f662fd8_0_true
                                *(char *)&g11 = (char)v1;
                                *(char *)v2 = 0;
                                // branch -> 0x8f662fe8
                            }
                        }
                    }
                }
                // 0x8f662fe8
                if (v3 != g23) {
                    // 0x8f662ff8
                    __stack_chk_fail();
                    // branch -> 0x8f662ffc
                }
                // 0x8f662ffc
                return result;
            }
            // 0x8f662f4c
            int32_t v12; // 0x8f662f84
            if (v1 == 85) {
                // 0x8f662f78
                dbval_debug_print2((int32_t)"dbval_provision_req: Processing Unsupported Request", v3, a3);
                result = 204;
                v12 = 189;
                // branch -> 0x8f662f84
            } else {
                // if_8f662f50_0_true
                result = 85;
                v12 = 70;
                // branch -> 0x8f662f84
            }
            // 0x8f662f84
            v8 = v2;
            if (v8 == 0) {
                // after_if_8f662f94_0.thread
                // branch -> 0x8f662fe8
            } else {
                // after_if_8f662f94_0
                if (v12 == 0) {
                    // 0x8f662fa0
                    *(char *)v8 = 1;
                    v9 = (int32_t)*(int16_t *)&g21;
                    v7 = 0x1000000 * v1 / 0x1000000;
                    v4 = dbval_sigreq_create_outer(v2, (int32_t)&g22, v7, v9, v1, v3, a3, g33, g34, g35, g36, g26);
                    result = v4;
                    if (v4 == 15) {
                        // 0x8f662fc8
                        v5 = dbval_debug_print2((int32_t)"dbval_provision_req: Starting Timer", (int32_t)&g22, v7);
                        v6 = dbval_start_timer(v5, (int32_t)&g22, v7, v9);
                        result = v6;
                        if (v6 == 15) {
                            // if_8f662fd8_0_true
                            *(char *)&g11 = (char)v1;
                            *(char *)v2 = 0;
                            // branch -> 0x8f662fe8
                        }
                    }
                }
            }
            // 0x8f662fe8
            if (v3 != g23) {
                // 0x8f662ff8
                __stack_chk_fail();
                // branch -> 0x8f662ffc
            }
            // 0x8f662ffc
            return result;
        }
    }
    // 0x8f662f78
    dbval_debug_print2((int32_t)"dbval_provision_req: Processing Unsupported Request", v3, a3);
    result = 204;
    // branch -> 0x8f662f84
    // 0x8f662f84
    v8 = v2;
    if (v8 == 0) {
        // after_if_8f662f94_0.thread
        // branch -> 0x8f662fe8
    }
    // 0x8f662fe8
    if (v3 != g23) {
        // 0x8f662ff8
        __stack_chk_fail();
        // branch -> 0x8f662ffc
    }
    // 0x8f662ffc
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:10:24
