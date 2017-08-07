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
#include <time.h>

// ------------------- Function Prototypes --------------------

int32_t __utag_longnameof(void);
int32_t __utag_validate(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t __utags_protect(int32_t a1, int32_t a2);
int32_t board_hlos_subtype(int32_t a1);
int32_t board_init(void);
int32_t clock_lib2_branch_set_rate(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_rcg_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t default_get_battery_capacity(int32_t a1, int32_t a2, int32_t a3);
int32_t display_get_screen_height(int32_t a1, int32_t a2, int32_t a3);
int32_t display_get_screen_width(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_boot_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_flash_name_mangle(int32_t a1, int32_t a2);
void function_8f64b1b0(void);
void function_8f6784a4(void);
void function_8f678528(int32_t * a1, int32_t * a2);
int32_t hab_mcs_ctx_init_hash(void);
int32_t hab_mcs_hash_data(char * a1, char * a2);
int32_t mot_sst_pal_get_security_version(char * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_security_version_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t platform_led_off(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_reg_read(uint32_t a1);
int32_t pm8x41_reg_write(int32_t a1);
char * scm_elexec_call(int32_t a1, int32_t a2, int32_t a3);
char * scm_halt_pmic_arbiter(int32_t a1);
int32_t set_download_mode(int32_t a1);
int32_t sod_check_crash(void);
int32_t sod_ramdump_pending_pull(int32_t a1, int32_t a2, int32_t a3);
int32_t strlcat(char * str, char * a2, int32_t max_len);
int32_t target_cpu(void);
int32_t utags_early_init(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g45 = 0; // LR
int32_t g46 = 0; // R0
int32_t g47 = 0; // R1
int32_t g48 = 0; // R10
int32_t g49 = 0; // R11
int32_t g50 = 0; // R12
int32_t g51 = 0; // R2
int32_t g52 = 0; // R3
int32_t g53 = 0; // R4
int32_t g54 = 0; // R5
int32_t g55 = 0; // R6
int32_t g56 = 0; // R7
int32_t g57 = 0; // R8
int32_t g58 = 0; // R9
int32_t g1 = 0x6e61000a; // 0x8f6826e7
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0x1010000; // 0x8f6a6b09
int32_t g4 = -0x7f7fbfc0; // 0x8f6a6bb4
int32_t g5 = -0x709918c4; // 0x8f6a6bb8
int32_t g6 = 0; // 0x8f6a6bc8
int32_t g7 = 0x1010000; // 0x8f6a6bd8
int32_t g8 = 0x40402014; // 0x8f6a6c1c
int32_t g9 = 0x6a6ba040; // 0x8f6a6c1f
int32_t g10 = 31; // 0x8f6a9020
int32_t g11 = 365; // 0x8f6a9080
int32_t g12 = 0; // 0x8f6ac068
int32_t g13 = 0; // 0x8f6ac06c
int32_t g14 = 0; // 0x8f6ac070
int32_t g15 = 0; // 0x8f6ac074
int32_t g16 = 0; // 0x8f6ac078
int32_t g17 = 0; // 0x8f6ac07c
int32_t g18 = 0x7fffffff; // 0x8f6ac084
int32_t g19 = 0; // 0x8f6ac088
int32_t g20 = 1; // 0x8f6ac0a8
int32_t g21 = 1; // 0x8f6ac0f0
int32_t g22 = 0; // 0x8f6b00b0
int32_t g23 = 0; // 0x8f6b00cc
int32_t g24 = 0; // 0x8f6b00d0
int32_t g25 = 0; // 0x8f6b00d4
int32_t g26 = 0; // 0x8f6b00d8
int32_t g27 = 0; // 0x8f6b0110
int32_t g28 = 0; // 0x8f6b012c
int32_t g29 = 0; // 0x8f6b0130
int32_t g30 = 0; // 0x8f6b0134
int32_t g31 = 0; // 0x8f6b0138
char * g32; // 0x8f6b5000
int32_t g33 = 0; // 0x8f6b503f
int32_t g34 = 0; // 0x8f6e0789
int32_t g35 = 0; // 0x8f6e078c
int32_t g36 = 0; // 0x8f6e0798
int32_t g37 = 0; // 0x8f6e0c00
int32_t g38 = 0; // 0x8f6e0c04
int32_t g39 = 0; // 0x8f6e0c08
int32_t g40 = 0; // 0x8f6e0c0c
int32_t g41 = 0; // 0x8f6e0c18
int32_t g42 = 0; // 0x8f6e0c1c
char * g43; // 0x8f6e0c40
int32_t g44 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f679520 - 0x8f67961b
int32_t __utag_validate(char * a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = (int32_t)a1; // 0x8f679520_0
    g58 = a4;
    g55 = &g44;
    int32_t result = v1; // R5
    g56 = a2;
    g57 = a3;
    g53 = &g21;
    int32_t v2 = g44;
    int32_t v3 = get_utags(v1, a2, a3); // R0
    int32_t v4 = g21;
    int32_t v5 = v4 + 1; // 0x8f67954c
    *(int32_t *)g53 = v5;
    if (v4 == 0) {
        // 0x8f679560
        function_8f619448(v3);
        // branch -> 0x8f679564
    }
    // 0x8f679564
    int32_t v6; // 0x8f6795c4
    if (result == 1) {
        // 0x8f6795c0
        v6 = g21 - 1;
        *(int32_t *)g53 = v6;
        if (v6 != 0) {
            // 0x8f6795f4
            // branch -> 0x8f6795f8
            // 0x8f6795f8
            if (v2 != g44) {
                // 0x8f679608
                __stack_chk_fail();
                // branch -> 0x8f67960c
            }
            // 0x8f67960c
            return result;
        }
        // 0x8f6795f0
        function_8f619438();
        // branch -> 0x8f6795f4
        // 0x8f6795f4
        // branch -> 0x8f6795f8
        // 0x8f6795f8
        if (v2 != g44) {
            // 0x8f679608
            __stack_chk_fail();
            // branch -> 0x8f67960c
        }
        // 0x8f67960c
        return result;
    }
    int32_t v7 = *(int32_t *)(v3 + 60); // 0x8f679568
    g54 = v7;
    int32_t v8 = v3 + 56; // 0x8f67956c
    g48 = v8;
    int32_t v9; // 0x8f6795dc
    if (v7 == v8) {
        // 0x8f6795d8
        v9 = g21 - 1;
        result = v9;
        *(int32_t *)g53 = v9;
        if (result != 0) {
            // 0x8f6795f8
            if (v2 != g44) {
                // 0x8f679608
                __stack_chk_fail();
                // branch -> 0x8f67960c
            }
            // 0x8f67960c
            return 0;
        }
        // 0x8f6795f0
        function_8f619438();
        // branch -> 0x8f6795f4
        // 0x8f6795f4
        // branch -> 0x8f6795f8
        // 0x8f6795f8
        if (v2 != g44) {
            // 0x8f679608
            __stack_chk_fail();
            // branch -> 0x8f67960c
        }
        // 0x8f67960c
        return result;
    }
    while (true) {
        int32_t v10 = g54; // 0x8f679578
        if (names_match(v7 + 8, g56, a3, v5) == 0) {
            int32_t v11 = *(int32_t *)(v10 + 4); // 0x8f679578
            g54 = v11;
            if (v11 == g48) {
                // break -> 0x8f6795d8
                break;
            }
            v7 = v11;
            // continue -> 0x8f679584
            continue;
        } else {
            int32_t v12 = *(int32_t *)(v10 + 552); // 0x8f679598
            g50 = v12;
            if (v12 == 0) {
                // if_8f6795a0_0_true
                result = 1;
                // branch -> 0x8f6795c0
            } else {
                int32_t v13 = *(int32_t *)(v10 + 560); // 0x8f6795a8
                g52 = v13;
                int32_t v14 = g56; // 0x8f6795ac
                g46 = v14;
                int32_t v15 = g57; // 0x8f6795b0
                g47 = v15;
                int32_t v16 = g58; // 0x8f6795b4
                g51 = v16;
                g45 = -0x70986a44;
                ((int32_t (*)(int32_t, int32_t, int32_t, int32_t))v12)(v14, v15, v16, v13);
                result = g46;
                // branch -> 0x8f6795c0
            }
            // 0x8f6795c0
            v6 = g21 - 1;
            *(int32_t *)g53 = v6;
            if (v6 != 0) {
                // 0x8f6795f4
                // branch -> 0x8f6795f8
                // 0x8f6795f8
                if (v2 != g44) {
                    // 0x8f679608
                    __stack_chk_fail();
                    // branch -> 0x8f67960c
                }
                // 0x8f67960c
                return result;
            }
        }
        // 0x8f6795f0
        function_8f619438();
        // branch -> 0x8f6795f4
        // 0x8f6795f4
        // branch -> 0x8f6795f8
        // 0x8f6795f8
        if (v2 != g44) {
            // 0x8f679608
            __stack_chk_fail();
            // branch -> 0x8f67960c
        }
        // 0x8f67960c
        return result;
    }
    // 0x8f6795d8
    v9 = g21 - 1;
    result = v9;
    *(int32_t *)g53 = v9;
    int32_t result2 = 0;
    if (result == 0) {
        // 0x8f6795f0
        function_8f619438();
        // branch -> 0x8f6795f4
        // 0x8f6795f4
        result2 = result;
        // branch -> 0x8f6795f8
    }
    // 0x8f6795f8
    if (v2 != g44) {
        // 0x8f679608
        __stack_chk_fail();
        // branch -> 0x8f67960c
    }
    // 0x8f67960c
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// size_t strnlen(const char * string, size_t maxlen);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:10:21
