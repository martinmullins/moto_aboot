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

// Address range: 0x8f64b5d8 - 0x8f64b637
void function_8f64b5d8(char * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = a2 == 0 ? v1 : 0;
    int32_t v3 = v1 + 1; // 0x8f64b5fc2
    g20 = v3;
    char v4 = *a1; // 0x8f64b5fc4
    if (v4 == 0) {
        // 0x8f64b62c
        g20 = v2;
        return;
    }
    int32_t v5 = v4; // 0x8f64b608
    int32_t v6; // 0x8f64b61810
    while (true) {
        // 0x8f64b608
        v6 = v2;
        if (v5 == a2) {
            // if_8f64b60c_0_true
            v6 = v1;
            // branch -> 0x8f64b5f8
        }
        int32_t v7 = v3 + 1; // 0x8f64b5fc
        g20 = v7;
        char v8 = *(char *)v3; // 0x8f64b5fc
        if (v8 == 0) {
            // break -> 0x8f64b62c
            break;
        }
        v2 = v6;
        v1 = v3;
        v3 = v7;
        v5 = v8;
        // continue -> 0x8f64b608
    }
    // 0x8f64b62c
    g20 = v6;
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
