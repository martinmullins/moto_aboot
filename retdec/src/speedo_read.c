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

int32_t clock_ce_disable(int32_t a1);
int32_t clock_ce_enable(int32_t a1);
int32_t enable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t fastboot_get_reason(void);
int32_t fastboot_set_reason(char * a1, int32_t a2, int32_t a3);
int32_t fdt_add_subnode_namelen(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t fdt_delprop(int32_t a1, int32_t a2, int32_t a3);
int32_t free_sparse_image(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b57c(void);
void function_8f64b5d8(char * a1, int32_t a2);
int32_t get_brightness(int32_t a1, int32_t a2, int32_t a3);
int32_t get_entry_index_by_name(char * str, int32_t a2, int32_t a3);
char * init_temp_monitoring(void);
int32_t is_launch_to_fastboot_log(void);
void kmain(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_clear_rsa_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_rsa_sig(char * a1, int32_t a2, int16_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t * a7);
int32_t mmc_sdhci_get_wp_status(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mmc_wp(void);
int32_t mutex_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t set_backlight_dev(int32_t a1, int32_t a2, int32_t a3);
int32_t set_launch_to_fastboot_log(char a1, int32_t a2, int32_t a3);
int32_t smb1359_stat_gpio_config(void);
int32_t speedo_log(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t speedo_read(int32_t a1, int32_t a2, int32_t a3);
int32_t target_get_max_flash_size(int32_t a1, int32_t a2, int32_t a3);
int32_t target_get_scratch_address(int32_t a1);
int32_t thread_exit(int32_t a1, int32_t a2, int32_t a3);
int32_t thread_yield(int32_t a1, int32_t a2);
int32_t validate_powerup_reason(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g19 = 0; // LR
int32_t g20 = 0; // R0
int32_t g21 = 0; // R1
int32_t g22 = 0; // R2
int32_t g23 = 0; // R3
int32_t g24 = 0; // R4
int32_t g25 = 0; // R5
int32_t g26 = 0; // R6
int32_t g27 = 0; // R7
int32_t g28 = 0; // R8
int32_t g1 = -0x1a60cfc8; // 0x8f602dd0
int32_t g2 = -0x16d2be0d; // 0x8f6039b8
int32_t g3 = -0x16d2bfed; // 0x8f61adc8
int32_t g4 = -0x1a60df68; // 0x8f61b3e8
int32_t g5 = 0x65440030; // 0x8f69c66f
int32_t g6 = 0x1f3f7fff; // 0x8f6a6a14
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = 255; // 0x8f6aca80
char * g9; // 0x8f6b5080
char * g10; // 0x8f6b509c
char * g11; // 0x8f6b7d40
char g12 = 0; // 0x8f6b7d41
int32_t g13 = 0; // 0x8f6c02ec
char * g14; // 0x8f6c032c
int32_t g15 = 0; // 0x8f6e0a88
int32_t g16 = 0; // 0x8f710c70
int32_t g17 = 0; // 0x8f7112f4
int32_t g18 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f678068 - 0x8f67815f
int32_t speedo_read(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f678068
    g20 = a1;
    int32_t v1 = g27; // 0x8f678068
    int32_t v2 = &g7; // R5
    int32_t v3 = g17;
    int32_t v4 = g7;
    int32_t v5 = v4 + 1; // 0x8f678084
    g7 = v5;
    int32_t v6 = a1; // 0x8f678098
    if (v4 == 0) {
        // 0x8f678094
        g20 = function_8f619448(a1);
        v6 = a1;
        // branch -> 0x8f678098
    }
    // 0x8f678098
    g20 = v6;
    int32_t v7 = speedo_find(v6, a2, a3, v5, a1, v3, a3, g24); // 0x8f67809c
    g20 = v7;
    int32_t result; // 0x8f678154_2
    int32_t v8;
    int32_t v9; // 0x8f6780b8
    if (v7 == 0) {
        // 0x8f6780b4
        v9 = g7 - 1;
        *(int32_t *)v2 = v9;
        v8 = -1;
        if (v9 == 0) {
            // 0x8f6780c8
            g20 = function_8f619438();
            v8 = -1;
            // branch -> 0x8f67813c
        }
        // 0x8f67813c
        g20 = v8;
        if (v3 != g17) {
            // 0x8f67814c
            __stack_chk_fail();
            result = g20;
            // branch -> 0x8f678150
        } else {
            result = v8;
        }
        // 0x8f678150
        g27 = v1;
        return result;
    }
    int32_t v10 = *(int32_t *)(v7 + 40); // 0x8f6780a8
    if (v10 == 0) {
        // 0x8f6780b4
        v9 = g7 - 1;
        *(int32_t *)v2 = v9;
        v8 = -1;
        if (v9 == 0) {
            // 0x8f6780c8
            g20 = function_8f619438();
            v8 = -1;
            // branch -> 0x8f67813c
        }
        // 0x8f67813c
        g20 = v8;
        if (v3 != g17) {
            // 0x8f67814c
            __stack_chk_fail();
            result = g20;
            // branch -> 0x8f678150
        } else {
            result = v8;
        }
        // 0x8f678150
        g27 = v1;
        return result;
    }
    int32_t v11 = *(int32_t *)(v7 + 44); // 0x8f6780d0
    int32_t v12 = v11; // 0x8f678100
    int32_t v13 = v7; // 0x8f6780f0
    if (v11 == 0) {
        int32_t v14 = get_timestamp(v7, a2, 0, v10); // 0x8f6780dc
        g20 = v14;
        v12 = v14 - *(int32_t *)(v7 + 40);
        v13 = v7;
        // branch -> 0x8f6780e8
    }
    int32_t v15 = *(int32_t *)(v13 + 48); // 0x8f6780e8
    g20 = v15;
    uint64_t v16 = 1000 * (int64_t)v15; // 0x8f6780f4
    g20 = v16;
    int32_t v17 = __aeabi_uldivmod(v16, (int64_t)v12); // 0x8f678100
    g20 = v17;
    int32_t v18 = g7 - 1; // 0x8f678108
    *(int32_t *)v2 = v18;
    g27 = (int32_t)(v16 / 0x100000000) + 1000 * *(int32_t *)(v13 + 52);
    v8 = v17;
    if (v18 == 0) {
        // 0x8f678120
        g20 = function_8f619438();
        v8 = v17;
        // branch -> 0x8f67813c
    }
    // 0x8f67813c
    g20 = v8;
    if (v3 != g17) {
        // 0x8f67814c
        __stack_chk_fail();
        result = g20;
        // branch -> 0x8f678150
    } else {
        result = v8;
    }
    // 0x8f678150
    g27 = v1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:17:03
