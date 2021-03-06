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

int32_t backlight_config(char * a1, int32_t a2);
int32_t backlight_get_brightness(int32_t * a1, int32_t a2);
int32_t backlight_off(int32_t a1, int32_t a2);
int32_t board_hlos_subtype(int32_t a1);
int32_t clk_get(char * str2);
int32_t clk_init(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_multiflash_disable(int32_t a1, int32_t a2);
int32_t get_verified_enabled(void);
int32_t gpio_set_dir(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_tlmm_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t init_sp_partition(char * a1, int32_t a2);
int32_t max17058_is_batt_temp_ok(void);
int32_t mcs_cert_get_rsa_public_key(char * a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t mcs_ctx_init_cert(int16_t * a1);
int32_t mcs_multi_bit_length(int32_t a1, uint32_t a2);
int32_t mcs_multi_shift_right(int32_t a1, int32_t a2, uint32_t a3);
int32_t mmc_sdhci_enable_hw_reset(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_sdhci_get_wp_status(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t panel_common_init(void);
int32_t pm8x41_chgr_led_enable(int32_t a1, int32_t a2);
int32_t pm8x41_get_is_cold_boot(void);
int32_t secure_allow_console(int32_t a1, int32_t a2);
int32_t set_backlight_dev(int32_t a1, int32_t a2, int32_t a3);
int32_t set_logger_capacity(int32_t a1, int32_t a2);
int32_t set_logger_ops(int32_t a1, int32_t * a2);
int32_t set_restart_reason(int32_t a1);
int32_t show_locked_command_restriction(int32_t a1);
int32_t sp_init(void);
int32_t udc_endpoint_alloc(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_endpoint_free(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g32 = 0; // LR
int32_t g33 = 0; // R0
int32_t g34 = 0; // R1
int32_t g35 = 0; // R2
int32_t g36 = 0; // R3
int32_t g37 = 0; // R4
int32_t g38 = 0; // R5
int32_t g39 = 0; // R6
int32_t g40 = 0; // R7
int32_t g41 = 0; // R8
int32_t g1 = 0x10001; // 0x8f6ac04c
int32_t g2 = 1; // 0x8f6ac0a8
int32_t g3 = -1; // 0x8f6ac1f0
int32_t g4 = -1; // 0x8f6ac214
int32_t g5 = 768; // 0x8f6acab7
char * g6 = "\x03"; // 0x8f6acab8
int32_t g7 = 0xffff; // 0x8f6acae4
int32_t g8 = 0xffff; // 0x8f6acaec
int32_t g9 = 0xffff; // 0x8f6acb2c
int32_t g10 = 0xffff; // 0x8f6acb6c
int32_t g11; // 0x8f6afe74
char * g12; // 0x8f6b7d40
char g13 = 0; // 0x8f6b7d41
int32_t g14 = 0; // 0x8f6b8ad0
int32_t g15 = 0; // 0x8f6b8ad4
int32_t g16 = 0; // 0x8f6e0a88
int32_t g17 = 0; // 0x8f6e0b4c
int32_t g18 = 0; // 0x8f6e0b54
int32_t g19 = 0; // 0x8f710c40
int32_t g20 = 0; // 0x8f710c44
char * g21; // 0x8f710c48
char * g22; // 0x8f710c50
int32_t g23 = 0; // 0x8f710c60
int32_t g24 = 0; // 0x8f710c64
char g25 = 0; // 0x8f710c68
char * g26; // 0x8f710c70
int32_t g27 = 0; // 0x8f710e70
char * g28; // 0x8f710e74
int32_t g29 = 0; // 0x8f710e78
int32_t g30 = 0; // 0x8f710e7c
int32_t g31 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f667884 - 0x8f667963
int32_t mcs_multi_shift_right(int32_t a1, int32_t a2, uint32_t a3) {
    int32_t result = a2; // R1
    int32_t v1 = g31;
    int32_t v2 = a3 % 16; // 0x8f667898
    int32_t v3 = a3 / 16; // 0x8f66789c
    int32_t v4 = a2; // 0x8f6678ac
    int32_t * v5; // 0x8f667910_0
    int32_t * v6; // 0x8f667934_0
    int32_t v7; // 0x8f6678b4
    int32_t v8; // 0x8f6678b0
    int32_t v9; // 0x8f6678b4
    int32_t v10; // 0x8f6678c0
    uint32_t v11; // 0x8f66791c
    int32_t v12; // 0x8f667928
    uint32_t v13; // 0x8f667938
    uint32_t v14; // 0x8f667920
    int32_t v15; // 0x8f667910
    int32_t v16; // 0x8f667908
    int32_t v17; // 0x8f667918
    int32_t v18; // 0x8f667920
    if (a3 >= 16) {
        int32_t v19 = a2 - v3; // 0x8f6678c8
        int32_t v20 = v19; // R3
        int32_t v21 = 4 * v3; // 0x8f6678cc
        int32_t v22 = 0; // 0x8f6678f410
        int32_t v23 = a2; // 0x8f6678f49
        int32_t v24; // 0x8f667900
        int32_t v25; // 0x8f66790040
        int32_t v26; // 0x8f6678f4
        int32_t v27; // 0x8f6678f441
        int32_t v28; // 0x8f6678ac28
        int32_t v29; // 0x8f6678fc
        int32_t v30; // 0x8f6678fc37
        if (v3 != a2) {
            int32_t v31 = 4 * v19 + a1 - 4; // 0x8f6678dc43
            *(int32_t *)(v31 + v21) = *(int32_t *)v31;
            int32_t v32 = v20; // 0x8f6678d848
            int32_t v33 = 1; // 0x8f6678d849
            if (v33 < v32) {
                int32_t v34 = v31 - 4; // 0x8f6678dc
                *(int32_t *)(v34 + v21) = *(int32_t *)v34;
                int32_t v35 = v20; // 0x8f6678d8
                while (v33 + 1 < v35) {
                    // if_8f6678dc_0_true.if_8f6678dc_0_true_crit_edge
                    v33++;
                    v34 -= 4;
                    *(int32_t *)(v34 + v21) = *(int32_t *)v34;
                    v35 = v20;
                    // continue -> if_8f6678dc_0_true.if_8f6678dc_0_true_crit_edge
                }
                // 0x8f6678d8
                v23 = result;
                // branch -> 0x8f6678ec
                // 0x8f6678ec
                v28 = v23;
                if (v35 >= v23) {
                    // 0x8f6678fc
                    v30 = v21 + a1 - 4;
                    *(int32_t *)v30 = 0;
                    v25 = v20 + 1;
                    v27 = result;
                    if (v25 >= v27) {
                        v29 = v30 - 4;
                        *(int32_t *)v29 = 0;
                        v24 = v25 + 1;
                        v26 = result;
                        while (v24 >= v26) {
                            // 0x8f6678fc
                            v29 -= 4;
                            *(int32_t *)v29 = 0;
                            v24++;
                            v26 = result;
                            // continue -> 0x8f6678fc
                        }
                        // 0x8f6678a4
                        v4 = v26;
                        // branch -> 0x8f6678a4
                        // 0x8f6678a4
                        if (v2 != 0) {
                            // 0x8f6678ac
                            v8 = v4 - 1;
                            v7 = v3;
                            v9 = -v7;
                            v10 = 16 - v2;
                            result = v10;
                            if (v8 == v7) {
                                int32_t v36 = v10; // 0x8f667920
                                int32_t v37 = 0; // 0x8f667914
                                v12 = 4 * v4 + a1;
                                while (true) {
                                    // 0x8f667910
                                    v15 = v12 - 4;
                                    v5 = (int32_t *)v15;
                                    v17 = *(int32_t *)(v12 - 8);
                                    v11 = v2 % 256;
                                    v14 = v36 % 256;
                                    v18 = v14 == 0 ? v17 : v14 < 32 ? v17 << v14 : 0;
                                    *v5 = (v18 | *v5 >> (v11 > 32 ? 32 : v11)) % 0x10000;
                                    v16 = v37 + 1;
                                    if (v16 < v8 - v7) {
                                        // 0x8f667908
                                        // branch -> 0x8f667930
                                        // 0x8f667930
                                        v6 = (int32_t *)(4 * (0x40000000 - v9) + a1);
                                        v13 = v2 % 256;
                                        *v6 = (*v6 >> (v13 > 32 ? 32 : v13)) % 0x10000;
                                        // branch -> 0x8f667944
                                        // 0x8f667944
                                        if (v1 != g31) {
                                            // 0x8f667954
                                            __stack_chk_fail();
                                            // branch -> 0x8f667958
                                        }
                                        // 0x8f667958
                                        return result;
                                    }
                                  lab_0x8f667910_3:
                                    // 0x8f667910
                                    v36 = result;
                                    v37 = v16;
                                    v12 = v15;
                                    // branch -> 0x8f667910
                                }
                            }
                            // 0x8f667930
                            v6 = (int32_t *)(4 * (0x40000000 - v9) + a1);
                            v13 = v2 % 256;
                            *v6 = (*v6 >> (v13 > 32 ? 32 : v13)) % 0x10000;
                            // branch -> 0x8f667944
                        }
                        // 0x8f667944
                        if (v1 != g31) {
                            // 0x8f667954
                            __stack_chk_fail();
                            // branch -> 0x8f667958
                        }
                        // 0x8f667958
                        return result;
                    }
                    v28 = v27;
                }
                // 0x8f6678a4
                v4 = v28;
                // branch -> 0x8f6678a4
                // 0x8f6678a4
                if (v2 != 0) {
                    // 0x8f6678ac
                    v8 = v4 - 1;
                    v7 = v3;
                    v9 = -v7;
                    v10 = 16 - v2;
                    result = v10;
                    if (v8 == v7) {
                        v12 = 4 * v4 + a1;
                        while (true) {
                            // 0x8f667910
                            v15 = v12 - 4;
                            v5 = (int32_t *)v15;
                            v17 = *(int32_t *)(v12 - 8);
                            v11 = v2 % 256;
                            v14 = v10 % 256;
                            v18 = v14 == 0 ? v17 : v14 < 32 ? v17 << v14 : 0;
                            *v5 = (v18 | *v5 >> (v11 > 32 ? 32 : v11)) % 0x10000;
                            v16 = 1;
                            if (v16 >= v8 - v7) {
                                goto lab_0x8f667910_3;
                            }
                            // 0x8f667908
                            // branch -> 0x8f667930
                        }
                    }
                    // 0x8f667930
                    v6 = (int32_t *)(4 * (0x40000000 - v9) + a1);
                    v13 = v2 % 256;
                    *v6 = (*v6 >> (v13 > 32 ? 32 : v13)) % 0x10000;
                    // branch -> 0x8f667944
                }
                // 0x8f667944
                if (v1 != g31) {
                    // 0x8f667954
                    __stack_chk_fail();
                    // branch -> 0x8f667958
                }
                // 0x8f667958
                return result;
            }
            // 0x8f6678d8
            v22 = v32;
            v23 = result;
            // branch -> 0x8f6678ec
        }
        // 0x8f6678ec
        v28 = v23;
        if (v22 >= v23) {
            // 0x8f6678fc
            v30 = v21 + a1 - 4;
            *(int32_t *)v30 = 0;
            v25 = v20 + 1;
            v27 = result;
            if (v25 >= v27) {
                v29 = v30 - 4;
                *(int32_t *)v29 = 0;
                v24 = v25 + 1;
                v26 = result;
                while (v24 >= v26) {
                    // 0x8f6678fc
                    v29 -= 4;
                    *(int32_t *)v29 = 0;
                    v24++;
                    v26 = result;
                    // continue -> 0x8f6678fc
                }
                // 0x8f6678a4
                v4 = v26;
                // branch -> 0x8f6678a4
                // 0x8f6678a4
                if (v2 != 0) {
                    // 0x8f6678ac
                    v8 = v4 - 1;
                    v7 = v3;
                    v9 = -v7;
                    v10 = 16 - v2;
                    result = v10;
                    if (v8 == v7) {
                        v12 = 4 * v4 + a1;
                        while (true) {
                            // 0x8f667910
                            v15 = v12 - 4;
                            v5 = (int32_t *)v15;
                            v17 = *(int32_t *)(v12 - 8);
                            v11 = v2 % 256;
                            v14 = v10 % 256;
                            v18 = v14 == 0 ? v17 : v14 < 32 ? v17 << v14 : 0;
                            *v5 = (v18 | *v5 >> (v11 > 32 ? 32 : v11)) % 0x10000;
                            v16 = 1;
                            if (v16 >= v8 - v7) {
                                goto lab_0x8f667910_3;
                            }
                            // 0x8f667908
                            // branch -> 0x8f667930
                        }
                    }
                    // 0x8f667930
                    v6 = (int32_t *)(4 * (0x40000000 - v9) + a1);
                    v13 = v2 % 256;
                    *v6 = (*v6 >> (v13 > 32 ? 32 : v13)) % 0x10000;
                    // branch -> 0x8f667944
                }
                // 0x8f667944
                if (v1 != g31) {
                    // 0x8f667954
                    __stack_chk_fail();
                    // branch -> 0x8f667958
                }
                // 0x8f667958
                return result;
            }
            v28 = v27;
        }
        // 0x8f6678a4
        v4 = v28;
        // branch -> 0x8f6678a4
    }
    // 0x8f6678a4
    if (v2 != 0) {
        // 0x8f6678ac
        v8 = v4 - 1;
        v7 = v3;
        v9 = -v7;
        v10 = 16 - v2;
        result = v10;
        if (v8 == v7) {
            v12 = 4 * v4 + a1;
            while (true) {
                // 0x8f667910
                v15 = v12 - 4;
                v5 = (int32_t *)v15;
                v17 = *(int32_t *)(v12 - 8);
                v11 = v2 % 256;
                v14 = v10 % 256;
                v18 = v14 == 0 ? v17 : v14 < 32 ? v17 << v14 : 0;
                *v5 = (v18 | *v5 >> (v11 > 32 ? 32 : v11)) % 0x10000;
                v16 = 1;
                if (v16 >= v8 - v7) {
                    goto lab_0x8f667910_3;
                }
                // 0x8f667908
                // branch -> 0x8f667930
            }
        }
        // 0x8f667930
        v6 = (int32_t *)(4 * (0x40000000 - v9) + a1);
        v13 = v2 % 256;
        *v6 = (*v6 >> (v13 > 32 ? 32 : v13)) % 0x10000;
        // branch -> 0x8f667944
    }
    // 0x8f667944
    if (v1 != g31) {
        // 0x8f667954
        __stack_chk_fail();
        // branch -> 0x8f667958
    }
    // 0x8f667958
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:46:49
