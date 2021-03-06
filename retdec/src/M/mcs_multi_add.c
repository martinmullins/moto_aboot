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

int32_t arch_disable_mmu(int32_t a1, int32_t a2, int32_t a3);
int32_t connect_to_key(int32_t a1);
int32_t display_logo(int32_t a1, int32_t a2);
int32_t fan54046_get_ibuslim(int32_t a1);
int32_t fan540xx_get_ic_info_pn(void);
int32_t fboot_cmd_erase_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_flash_permission_validate(int32_t a1, int32_t a2);
int32_t free_sparse_image(int32_t a1, int32_t a2, int32_t a3);
int32_t get_gpio_setting(int32_t a1, int32_t * a2, int32_t a3);
int32_t get_pmic_gpio_setting(int32_t a1, int32_t * a2, int32_t a3);
int32_t heap_init(int32_t a1, int32_t a2);
int32_t heap_realloc(char * a1);
int32_t initial_thread_func(int32_t a1, int32_t a2, int32_t a3);
int32_t keys_get_state(uint32_t a1);
int32_t mcs_bytes_to_mpint(int32_t a1);
int32_t mcs_mpint_to_bytes(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_multi_add(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_multi_convert_from_multi_digit_byte_len(int32_t * a1, int32_t a2, uint32_t a3);
int32_t mdp_clk_gating_ctrl(int32_t a1, int32_t a2);
int32_t mdp_get_revision(int32_t a1, int32_t a2, int32_t a3);
int32_t mdp_set_revision(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_intf_tg_setup(int32_t * a1);
int32_t oem_utag(int32_t a1, int32_t * a2);
int32_t ondraw(int32_t a1, int32_t a2, int32_t a3);
int32_t parse_sparse_image(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t platform_get_sclk_count(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_uninit(char * a1, int32_t a2, int32_t a3);
int32_t target_mot_prod_id(char * a1, int32_t a2, int32_t a3);
int32_t target_set_prod_id(char * a1, int32_t a2, int32_t a3);
int32_t utag_parent_exists(int32_t a1);

// --------------------- Global Variables ---------------------

bool g41 = false; // LR
int32_t g42 = 0; // R1
int32_t g43 = 0; // R2
int32_t g44 = 0; // R3
int32_t g45 = 0; // R4
int32_t g46 = 0; // R5
int32_t g47 = 0; // R6
int32_t g48 = 0; // R7
int32_t g1 = -0x16d2bf8d; // 0x8f624998
int32_t g2 = -0x16d2bf10; // 0x8f6287bc
int32_t g3 = -0x1a60cfd4; // 0x8f6760e8
int32_t g4 = -0x1a60cfd4; // 0x8f676120
int32_t g5 = -0x1a60cfa8; // 0x8f676158
int32_t g6 = -0x1a60cf9c; // 0x8f6761bc
int32_t g7 = -0x1a60cf9c; // 0x8f67622c
int32_t g8 = -0x1a60cfa8; // 0x8f67629c
int32_t g9 = -0x1a60cfd0; // 0x8f676300
int32_t g10 = -0x1a60cf70; // 0x8f6763ac
int32_t g11 = 0x7325002c; // 0x8f682749
int32_t g12 = 0x402d2b00; // 0x8f686e33
char g13[2] = "/"; // 0x8f686fbc
int32_t g14 = 0x746e6300; // 0x8f6a4e20
int32_t g15 = 0x70750020; // 0x8f6a4f1e
char * g16 = "\xff\xff\xff\xff\xff\xff\xff\xff\xe8\xc0\x6a\x8f\xe8\xc0\x6a\x8f\x01"; // 0x8f6ac0e0
int32_t g17 = 1; // 0x8f6ac0f0
int32_t g18 = 6; // 0x8f6acab0
int32_t g19 = 0; // 0x8f6b8af8
char * g20; // 0x8f6e08d4
char * g21; // 0x8f6e08f8
char * g22; // 0x8f6e08f9
int32_t g23 = 0; // 0x8f6e091c
char * g24; // 0x8f6e0938
char * g25; // 0x8f6e0aac
int32_t g26 = 0; // 0x8f6e0af4
char * g27; // 0x8f6e0b34
int32_t g28 = 0; // 0x8f6e0be8
int32_t g29 = 0; // 0x8f6e0bec
int32_t g30 = 0; // 0x8f6e0bf0
int32_t g31 = 0; // 0x8f6e0bf4
int32_t g32 = 0; // 0x8f7112f4
int32_t g33 = 0; // 0x8f7114ac
char * g34; // 0x8f711580
char * g35; // 0x8f711588
char * g36; // 0x8f711589
int16_t g37 = 0; // 0x8f711592
int32_t g38 = 0; // 0x8f7125b8
int32_t g39 = 0; // 0x8f7125bc
int32_t g40 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f667574 - 0x8f667617
int32_t mcs_multi_add(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g45; // 0x8f667574
    int32_t v2 = g47; // 0x8f667574
    int32_t v3 = 4 * a2 + a1; // 0x8f667580
    g47 = v3;
    int32_t result = 0; // R5
    int32_t v4 = g32;
    int32_t v5 = a2 - 1; // 0x8f667594
    g45 = -4;
    int32_t * v6; // 0x8f6675d8_0
    int32_t * v7; // 0x8f6675d8_09
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11; // 0x8f6675cc
    uint32_t v12; // 0x8f6675e0
    uint32_t v13; // 0x8f6675e013
    if (a4 >= 1) {
        int32_t v14 = 0; // 0x8f6675b8
        int32_t v15 = -4; // 0x8f6675a023
        while (true) {
            int32_t * v16 = (int32_t *)(v3 + v15); // 0x8f6675a8_0
            uint32_t v17 = *(int32_t *)(4 * a4 + a3 + v15) + *v16 + v14; // 0x8f6675b8
            result = v17 / 0x10000;
            *v16 = v17 % 0x10000;
            int32_t v18 = v5 - 1;
            int32_t v19 = g45 - 4; // 0x8f6675a0
            g45 = v19;
            if (v18 + a4 - a2 >= 0) {
                // 0x8f6675a8
                v14 = result;
                v3 = g47;
                v15 = v19;
                v5 = v18;
                // branch -> 0x8f6675a8
                continue;
            } else {
                v5 = v18;
            }
            // 0x8f6675cc
            v11 = 4 * v5 + a1;
            if (v5 >= 0) {
                // 0x8f6675d8
                v7 = (int32_t *)v11;
                v13 = result + *v7;
                result = v13 / 0x10000;
                *v7 = v13 % 0x10000;
                v9 = v5 - 1;
                if (v9 >= 0) {
                    v10 = v11 - 4;
                    v6 = (int32_t *)v10;
                    v12 = result + *v6;
                    result = v12 / 0x10000;
                    *v6 = v12 % 0x10000;
                    v8 = v9 - 1;
                    while (v8 >= 0) {
                        // 0x8f6675d8
                        v10 -= 4;
                        v6 = (int32_t *)v10;
                        v12 = result + *v6;
                        result = v12 / 0x10000;
                        *v6 = v12 % 0x10000;
                        v8--;
                        // continue -> 0x8f6675d8
                    }
                    // 0x8f6675f4
                    if (v4 != g32) {
                        // 0x8f667608
                        __stack_chk_fail();
                        // branch -> 0x8f66760c
                    }
                    // 0x8f66760c
                    g45 = v1;
                    g47 = v2;
                    return result;
                }
            }
            // 0x8f6675f4
            if (v4 != g32) {
                // 0x8f667608
                __stack_chk_fail();
                // branch -> 0x8f66760c
            }
            // 0x8f66760c
            g45 = v1;
            g47 = v2;
            return result;
        }
    }
    // 0x8f6675cc
    v11 = 4 * v5 + a1;
    if (v5 < 0) {
        // 0x8f6675f4
        if (v4 != g32) {
            // 0x8f667608
            __stack_chk_fail();
            // branch -> 0x8f66760c
        }
        // 0x8f66760c
        g45 = v1;
        g47 = v2;
        return result;
    }
    // 0x8f6675d8
    v7 = (int32_t *)v11;
    v13 = result + *v7;
    result = v13 / 0x10000;
    *v7 = v13 % 0x10000;
    v9 = v5 - 1;
    if (v9 < 0) {
        // 0x8f6675f4
        if (v4 != g32) {
            // 0x8f667608
            __stack_chk_fail();
            // branch -> 0x8f66760c
        }
        // 0x8f66760c
        g45 = v1;
        g47 = v2;
        return result;
    }
    v10 = v11 - 4;
    v6 = (int32_t *)v10;
    v12 = result + *v6;
    result = v12 / 0x10000;
    *v6 = v12 % 0x10000;
    v8 = v9 - 1;
    while (v8 >= 0) {
        // 0x8f6675d8
        v10 -= 4;
        v6 = (int32_t *)v10;
        v12 = result + *v6;
        result = v12 / 0x10000;
        *v6 = v12 % 0x10000;
        v8--;
        // continue -> 0x8f6675d8
    }
    // 0x8f6675f4
    if (v4 != g32) {
        // 0x8f667608
        __stack_chk_fail();
        // branch -> 0x8f66760c
    }
    // 0x8f66760c
    g45 = v1;
    g47 = v2;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:25:51
