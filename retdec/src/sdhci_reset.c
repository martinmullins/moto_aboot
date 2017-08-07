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

int32_t cache_inv_range(int32_t a1, int32_t a2, int32_t a3);
int32_t cmd_flash_mmc_cid_prov_img(int32_t a1, int32_t a2);
int32_t detect_gpio91_status(int32_t a1);
int32_t dsi_cmd_dma_trigger_for_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t erase_partition(int32_t a1);
int32_t fan54046_get_ibuslim(int32_t a1);
int32_t fan54046_ibuslim_set(int32_t a1, int32_t a2);
int32_t gpio_config_factory_cable(int32_t a1, int32_t a2);
int32_t hab_check_bound_sig_allowed(int32_t a1, int32_t a2);
int32_t hab_su_type(void);
int32_t hab_su_uid(char * a1);
char * handle_fboot_command_getvar(int32_t a1);
int32_t is_ramdump_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_ctx_init_hash(char a1, char * a2);
int32_t mcs_hash_data(char * a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_wait4_video_done(int32_t a1);
int32_t mot_sst_pal_erase_token(int32_t a1, int32_t a2);
int32_t mot_sst_pal_write_token(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t pm8x41_config_s3_source(uint32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_kpdpwr_s2_reset_disable(int32_t a1, int32_t a2);
int32_t ramdump_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t req_complete(int32_t result, int32_t a2, int32_t a3);
int32_t sdhci_clk_supply(int32_t * a1, uint32_t a2, int32_t a3);
int32_t sdhci_reset(int32_t * a1, char a2, int32_t a3);
int32_t SecMakeOutofFactory(int32_t a1, int32_t a2, int32_t a3);
int32_t target_product_name(void);
int32_t target_radio(void);
char * test_rand(void);
int32_t uart_dm_init(int32_t a1, int32_t * a2, int32_t * a3);
int32_t uart_putc(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

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
int32_t g29 = 0; // R9
int32_t g1 = 0x2020003a; // 0x8f686ac4
char * g2 = "\x01"; // 0x8f688c94
char * g3 = "\x45\x23\x01\xef\xcd\xab\x89\x98\xba\xdc\xfe\x10\x32\x54\x76\xc3\xd2\xe1\xf0"; // 0x8f6a69eb
int32_t g4 = 0x45230100; // 0x8f6a69ff
int32_t g5 = 1; // 0x8f6ac0f0
char * g6 = "\n"; // 0x8f6ac1b0
int32_t g7 = 0; // 0x8f6b8ad8
int32_t g8 = 0; // 0x8f6b8adc
char * g9; // 0x8f6b8aec
char g10 = 0; // 0x8f6b8aed
char * g11; // 0x8f6c0018
int32_t g12 = 0; // 0x8f6c003c
char * g13; // 0x8f6c0040
int32_t g14 = 0; // 0x8f6c0660
int32_t g15 = 0; // 0x8f6c066c
int32_t g16 = 0; // 0x8f6e079c
int32_t g17 = 0; // 0x8f6e0aac
int32_t g18 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f607740 - 0x8f6077d3
int32_t sdhci_reset(int32_t * a1, char a2, int32_t a3) {
    int32_t result = (int32_t)a1;
    int32_t v1 = a2;
    int32_t v2 = 101; // R5
    int32_t v3 = g18;
    *(char *)(*a1 + 47) = a2;
    int32_t v4 = (int32_t)*(char *)(*(int32_t *)result + 47); // 0x8f6077687
    if (v4 == v1) {
        // 0x8f6077b0
        if (v3 == g18) {
            // 0x8f6077c4
            return result;
        }
    } else {
        while (true) {
            int32_t v5 = v2; // 0x8f607774
            v2 = v5 - 1;
            if (v5 == 1) {
                // 0x8f60777c
                if (v3 == g18) {
                    // 0x8f60778c
                    int32_t v6;
                    return print_log(-1, (int32_t)"Error: sdhci reset failed for: %x\n", 0x1000000 * v1 / 0x1000000, v3, g24, g25, g26, g27, g19, v6, 0, 0, 0);
                }
                // 0x8f6077c0
                __stack_chk_fail();
                // branch -> 0x8f6077c4
                // 0x8f6077c4
                return result;
            }
            // 0x8f6077a4
            result = mdelay(1, v1, a3, v4);
            int32_t v7 = (int32_t)*(char *)(*(int32_t *)result + 47); // 0x8f607768
            if (v7 == v1) {
                // break -> 0x8f6077b0
                break;
            }
            v4 = v7;
            // continue -> 0x8f607774
        }
        // 0x8f6077b0
        if (v3 == g18) {
            // 0x8f6077c4
            return result;
        }
    }
    // 0x8f6077c0
    __stack_chk_fail();
    // branch -> 0x8f6077c4
    // 0x8f6077c4
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strchrnul(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// char * strncat(char * restrict dest, const char * restrict src, size_t n);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:47:05
