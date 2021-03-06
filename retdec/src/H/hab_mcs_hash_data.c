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

int32_t board_platform_id(int32_t a1);
int32_t bq24296_get_ibuslim(int32_t a1, int32_t a2);
int32_t bq24296_init(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_pal_rand(char * a1, int32_t a2);
int32_t dbval_write_datablock(int32_t a1, int32_t a2, uint32_t a3);
int32_t dpc_thread_routine(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t fdt32_to_cpu_99(int32_t a1, int32_t a2, int32_t a3);
void function_8f649c50(void);
void function_8f649d24(char * str, int32_t a2, int32_t a3);
void function_8f64b7f0(void);
int32_t get_detected_panel(int32_t a1);
int32_t hab_mcs_hash_data(char * a1, char * a2);
int32_t hab_mcs_hash_end(char * a1, int32_t a2);
int32_t is_skip_validation(int32_t a1);
int32_t max17042_is_batt_temp_ok(void);
int32_t max17058_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mmc_get_device_blocksize(void);
int32_t mmc_write(int64_t a1);
int32_t panel_manager_auto_detect_on(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_get_is_cold_boot(void);
int32_t pm8x41_uninit(int32_t a1);
int32_t qcom_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t SecHashInit(int32_t a1, int32_t a2, int32_t a3);
int32_t SecHashUpdate(int32_t a1, int32_t a2);
int32_t security_policy_init(char * a1, int32_t a2, int32_t a3);
int32_t target_display_pre_on(int32_t a1, int32_t a2, int32_t a3);
int32_t uart_putc(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t validate_gpt_image(char * a1, int32_t a2);
int32_t validate_hw_type(char * a1, int32_t a2);
int32_t wififlash_mode(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g32 = 0; // LR
int32_t g33 = 0; // R0
int32_t g34 = 0; // R1
int32_t g35 = 0; // R10
int32_t g36 = 0; // R11
int32_t g37 = 0; // R12
int32_t g38 = 0; // R2
int32_t g39 = 0; // R3
int32_t g40 = 0; // R4
int32_t g41 = 0; // R5
int32_t g42 = 0; // R6
int32_t g43 = 0; // R7
int32_t g44 = 0; // R8
int32_t g45 = 0; // R9
int32_t g1 = -0x7f7fbfc0; // 0x8f6a6b2d
int32_t g2 = -0x709918c4; // 0x8f6a6b38
int32_t g3 = 0x40302014; // 0x8f6a6b88
int32_t g4 = 0; // 0x8f6a6b8c
int32_t g5 = 0x1010000; // 0x8f6a6b9c
int32_t g6 = -0x7f7fbfc0; // 0x8f6a6bb4
int32_t g7 = -0x709918c4; // 0x8f6a6bb8
int32_t g8 = 0; // 0x8f6a6bc8
int32_t g9 = 0x1010000; // 0x8f6a6bd8
int32_t g10 = 0; // 0x8f6ac068
int32_t g11; // 0x8f6ac0e8
int32_t g13 = 1; // 0x8f6ac0f0
char * g14 = "\n"; // 0x8f6ac1b0
int32_t g15 = 0xffff; // 0x8f6ac218
int32_t g16 = -1; // 0x8f6acaac
int32_t g17 = 768; // 0x8f6acab3
char * g18 = "\x03"; // 0x8f6acab4
int32_t g19 = 0; // 0x8f6b7c24
int32_t g20 = 0; // 0x8f6b8ad8
int32_t g21 = 0; // 0x8f6b8adc
int32_t g22 = 0; // 0x8f6c0044
char * g23; // 0x8f6e06ad
int32_t g24 = 0; // 0x8f6e0aa0
char * g25; // 0x8f6e0aa4
int32_t g26 = 0; // 0x8f6e0b38
int32_t g27 = 0; // 0x8f6e0b40
int32_t g28 = 0; // 0x8f6e0b5c
char ** g29 = NULL; // 0x8f6e0bf8
int32_t g30 = 0; // 0x8f7112f4
int32_t g31 = 0; // 0x8f711550
int32_t * g12 = &g11; // 0x8f6ac0ec

// ------------------------ Functions -------------------------

// Address range: 0x8f66e20c - 0x8f66e3f3
int32_t hab_mcs_hash_data(char * a1, char * a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g38; // 0x8f66e210
    g42 = v2;
    int32_t result;
    if (a1 == NULL) {
        // after_if_8f66e220_0.thread
        // branch -> 0x8f66e3bc
        // 0x8f66e3bc
        result = g30;
        // branch -> 0x8f66e3c0
        // 0x8f66e3c0
        if (result != g30) {
            // 0x8f66e3d4
            __stack_chk_fail();
            // branch -> 0x8f66e3d8
        }
        // 0x8f66e3d8
        return result;
    }
    // after_if_8f66e220_0
    g45 = v1;
    g44 = (int32_t)a2;
    int32_t v3 = g30;
    if (a2 == NULL) {
        // 0x8f66e3bc
        result = v3;
        // branch -> 0x8f66e3c0
        // 0x8f66e3c0
        if (result != g30) {
            // 0x8f66e3d4
            __stack_chk_fail();
            // branch -> 0x8f66e3d8
        }
        // 0x8f66e3d8
        return result;
    }
    uint32_t v4 = (int32_t)*a1 - 13; // 0x8f66e23c
    if (v4 > 3) {
        // 0x8f66e3bc
        result = v3;
        // branch -> 0x8f66e3c0
        // 0x8f66e3c0
        if (result != g30) {
            // 0x8f66e3d4
            __stack_chk_fail();
            // branch -> 0x8f66e3d8
        }
        // 0x8f66e3d8
        return result;
    }
    uint32_t v5 = v4 % 256; // 0x8f66e24c
    uint32_t v6 = *(int32_t *)(v1 + 8); // 0x8f66e250
    g37 = v6;
    char v7 = *(char *)(v5 + (int32_t)&g6); // 0x8f66e254
    uint32_t v8 = (int32_t)v7; // 0x8f66e254
    g43 = v8;
    int32_t v9 = 4 * v5; // 0x8f66e260
    int32_t v10 = *(int32_t *)(v9 + (int32_t)&g7); // 0x8f66e260
    int32_t (*v11)(int32_t) = (int32_t (*)(int32_t))v10;
    g35 = *(int32_t *)(v9 + (int32_t)&g8);
    g36 = (int32_t)*(char *)(v5 + (int32_t)&g9);
    if (v8 > v6) {
        // 0x8f66e3bc
        result = v3;
        // branch -> 0x8f66e3c0
        // 0x8f66e3c0
        if (result != g30) {
            // 0x8f66e3d4
            __stack_chk_fail();
            // branch -> 0x8f66e3d8
        }
        // 0x8f66e3d8
        return result;
    }
    uint32_t v12 = *(int32_t *)(v1 + 208); // 0x8f66e27c
    uint32_t v13 = *(int32_t *)(v1 + 212); // 0x8f66e27c
    bool v14 = true; // 0x8f66e290
    bool v15 = v13 > 0x1ffffffe; // 0x8f66e290
    if (v13 == 0x1fffffff) {
        // if_8f66e28c_0_true
        v14 = v12 != -1;
        v15 = v12 == -1;
        // branch -> after_if_8f66e28c_0
    }
    // after_if_8f66e28c_0
    if (v14 && v15) {
        // 0x8f66e3bc
        result = v3;
        // branch -> 0x8f66e3c0
        // 0x8f66e3c0
        if (result != g30) {
            // 0x8f66e3d4
            __stack_chk_fail();
            // branch -> 0x8f66e3d8
        }
        // 0x8f66e3d8
        return result;
    }
    uint32_t v16 = v12 + v2; // 0x8f66e294
    int32_t v17 = (int32_t)(v16 < v12) + v13; // 0x8f66e29c
    g41 = v17;
    g39 = 0x1fffffff;
    bool v18 = true; // 0x8f66e2b8
    bool v19 = v17 > 0x1ffffffe; // 0x8f66e2b8
    if (v17 == 0x1fffffff) {
        // if_8f66e2b4_0_true
        v18 = v16 != -1;
        v19 = v16 == -1;
        // branch -> after_if_8f66e2b4_0
    }
    // after_if_8f66e2b4_0
    if (!v18 || !v19) {
        // 0x8f66e2bc
        int32_t v20; // 0x8f66e32c
        int32_t v21; // 0x8f66e340
        int32_t v22; // 0x8f66e380
        int32_t v23; // 0x8f66e324
        if (v6 != 0) {
            // 0x8f66e2c4
            if (v6 + v2 >= v8) {
                int32_t v24 = v8 - v6; // 0x8f66e2d4
                g40 = v24;
                g42 = v2 - v24;
                memcpy((char *)(v1 + 12 + v6), a2, v24);
                int32_t v25 = g45; // 0x8f66e2ec
                int32_t v26 = v25 + 144; // 0x8f66e2ec
                g34 = v26;
                g33 = v25 + 12;
                g38 = v26;
                if (g36 == 1) {
                    // 0x8f66e300
                    g32 = -0x70991cfc;
                    ((int32_t (*)())g35)();
                    // branch -> 0x8f66e310
                } else {
                    // 0x8f66e308
                    g39 = v10;
                    g32 = -0x70991cf0;
                    v11(v10);
                    // branch -> 0x8f66e310
                }
                // 0x8f66e310
                if (g33 == 0) {
                    // if_8f66e314_0_true
                    *(int32_t *)(g45 + 8) = 0;
                    // branch -> 0x8f66e324
                }
                // 0x8f66e324
                v23 = g44 + g40;
                g40 = v23;
                g41 = g45 + 144;
                v21 = v23;
                v22 = g42;
                v20 = g43;
                // branch -> 0x8f66e32c
                while (true) {
                    // 0x8f66e32c
                    if (v22 < v20) {
                      lab_if_8f66e330_0_true:
                        // if_8f66e330_0_true
                        if (g33 != 0) {
                            result = v3;
                            // 0x8f66e3c0
                            if (result != g30) {
                                // 0x8f66e3d4
                                __stack_chk_fail();
                                // branch -> 0x8f66e3d8
                            }
                            // 0x8f66e3d8
                            return result;
                        }
                    } else {
                      lab_after_if_8f66e330_0:
                        // after_if_8f66e330_0
                        if (v22 != v20) {
                            // 0x8f66e36c
                            result = v3;
                            if (g33 == 0) {
                                // 0x8f66e374
                                if (v22 != 0) {
                                    int32_t v27 = *(int32_t *)(g45 + 8); // 0x8f66e37c
                                    memcpy((char *)(g45 + 12 + v27), (char *)v21, v22);
                                    int32_t * v28 = (int32_t *)(g45 + 8); // 0x8f66e394_0
                                    *v28 = g42 + *v28;
                                    // branch -> 0x8f66e3a0
                                }
                                int32_t * v29 = (int32_t *)(g45 + 208); // 0x8f66e3a0_0
                                uint32_t v30 = *v29; // 0x8f66e3a0
                                int32_t * v31 = (int32_t *)(g45 + 212); // 0x8f66e3a0_1
                                uint32_t v32 = v30 + v2; // 0x8f66e3a8
                                *v29 = v32;
                                *v31 = (int32_t)(v32 < v30) + *v31;
                                result = v3;
                                // branch -> 0x8f66e3c0
                            }
                            // 0x8f66e3c0
                            if (result != g30) {
                                // 0x8f66e3d4
                                __stack_chk_fail();
                                // branch -> 0x8f66e3d8
                            }
                            // 0x8f66e3d8
                            return result;
                        }
                    }
                    // 0x8f66e33c
                    g33 = v21;
                    int32_t v33 = g41; // 0x8f66e344
                    g34 = v33;
                    g38 = v33;
                    if (g36 == 1) {
                        // 0x8f66e350
                        g32 = -0x70991cac;
                        ((int32_t (*)())g35)();
                        // branch -> 0x8f66e360
                    } else {
                        // 0x8f66e358
                        g39 = v10;
                        g32 = -0x70991ca0;
                        v11(v10);
                        // branch -> 0x8f66e360
                    }
                    int32_t v34 = g43; // 0x8f66e360
                    int32_t v35 = g42 - v34; // 0x8f66e360
                    g42 = v35;
                    int32_t v36 = g40 + v34; // 0x8f66e364
                    g40 = v36;
                    v21 = v36;
                    v22 = v35;
                    v20 = v34;
                    // branch -> 0x8f66e32c
                }
            }
        }
        // 0x8f66e320
        g40 = 0;
        g33 = 0;
        // branch -> 0x8f66e324
        // 0x8f66e324
        v23 = g44 + g40;
        g40 = v23;
        g41 = g45 + 144;
        v21 = v23;
        v22 = g42;
        v20 = g43;
        // branch -> 0x8f66e32c
        while (true) {
            // 0x8f66e32c
            if (v22 < v20) {
                goto lab_if_8f66e330_0_true;
            }
            goto lab_after_if_8f66e330_0;
        }
    }
    // 0x8f66e3bc
    result = v3;
    // branch -> 0x8f66e3c0
    // 0x8f66e3c0
    if (result != g30) {
        // 0x8f66e3d4
        __stack_chk_fail();
        // branch -> 0x8f66e3d8
    }
    // 0x8f66e3d8
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// void free(void * ptr);
// int isdigit(int c);
// int isxdigit(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:51:16
