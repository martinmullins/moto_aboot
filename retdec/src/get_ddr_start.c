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

void arm_syscall_handler(void);
void arm_undefined_handler(void);
int32_t confession_clear(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_get_chars(int32_t a1, int32_t a2, int32_t a3);
int32_t display_set_margin(int32_t a1, int32_t a2);
int32_t display_set_orientation(char a1, int32_t a2);
int32_t enable_kpdpwr_n_irq(int32_t a1);
void function_8f64a49c(void);
void function_8f64a9f0(char * str, int32_t size, char * format, int32_t a4);
int32_t get_battery_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
int32_t get_charger_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
int32_t get_ddr_start(void);
int32_t getvar_version_baseband(char * a1, int32_t a2, int32_t a3);
int32_t is_fastboot_mode(int32_t a1, int32_t a2);
int32_t is_valid_supplier_id(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_clear_cert_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_DER_advanceBuffer(int32_t a1, int16_t * a2, int16_t a3);
int32_t mipi_dsi_set_brightness(char a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t oem_off_mode_charge(int32_t a1, int32_t a2);
int32_t oem_off_mode_charge_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_detect_fact_cbl(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_irq_unmask(uint32_t a1, uint32_t a2);
int32_t qup_i2c_read_byte(int32_t a1, int32_t a2, int32_t a3);
int32_t qup_i2c_write_word(int32_t a1, int32_t a2, int32_t a3);
int32_t ramdump_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t read_version(char * a1, char * a2, int32_t a3);
int32_t sod_ramdump_enabled(char * a1, int32_t a2);
int32_t sod_ramdump_set_test_cookie(int32_t a1, int32_t a2);
int32_t target_usb_init(int32_t a1, int32_t a2);
int32_t target_usb_stop(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // R0
int32_t g23 = 0; // R1
int32_t g24 = 0; // R2
int32_t g25 = 0; // R3
int32_t g26 = 0; // R4
int32_t g27 = 0; // R5
int32_t g28 = 0; // R6
int32_t g1 = -0x16d2bfed; // 0x8f645700
char g2[2] = "0"; // 0x8f69c66f
char g3[2] = "1"; // 0x8f69c693
int32_t g4 = 0x746e6300; // 0x8f6a4e20
char * g5 = "\n"; // 0x8f6ac1b0
int32_t g6 = -0x7fea01; // 0x8f6acae9
int32_t g7 = 8; // 0x8f6acb08
int32_t g8 = 4; // 0x8f6acb54
int32_t g9 = 0xcffff0f; // 0x8f6acba9
int32_t g10 = 0xcffff; // 0x8f6acbaa
int32_t g11 = 0; // 0x8f6c02e4
int32_t g12 = 0; // 0x8f6e0c00
int32_t g13 = 0; // 0x8f6e0c04
int32_t g14 = 0; // 0x8f6e0c08
int32_t g15 = 0; // 0x8f6e0c0c
int32_t g16 = 0; // 0x8f6e0c18
int32_t g17 = 0; // 0x8f6e0c1c
char * g18; // 0x8f6e0c40
char * g19; // 0x8f6e12ec
int32_t g20 = 0; // 0x8f6e12f0
char * g21; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f601ed4 - 0x8f601fd3
int32_t get_ddr_start(void) {
    int32_t v1 = 0; // R6
    char * v2 = g21;
    int32_t v3 = (int32_t)v2;
    int32_t v4 = v3; // R3
    int32_t v5;
    int32_t v6 = smem_ram_ptable_init_v1(g22, g23, g24, v3, v5, 0); // 0x8f601eec
    int32_t v7 = v6; // 0x8f601f14
    if (v6 == 0) {
        // 0x8f601ef8
        v4 = 300;
        v7 = _panic(v1, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/platform.c", 300, (int32_t)"smem_ram_ptable_init_v1()", 0, 0);
        // branch -> 0x8f601f14
    }
    int32_t v8 = smem_get_ram_ptable_len(v7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/platform.c", v4); // 0x8f601f14
    int32_t v9 = 0; // R4
    if (v8 == 0) {
        // 0x8f601fa0
        if (v2 != g21) {
            // 0x8f601fb0
            __stack_chk_fail();
            // branch -> 0x8f601fb4
        }
        // 0x8f601fb4
        return 0;
    }
    // 0x8f601f28
    int32_t v10;
    int32_t v11 = &v10; // 0x8f601f28_0
    int32_t v12 = 0; // 0x8f601f2c
    // branch -> 0x8f601f28
    while (true) {
        // 0x8f601f28
        smem_get_ram_ptable_entry(v11, v12, (int32_t)"platform/msm8916/platform.c", v4);
        int32_t v13;
        int32_t result;
        int32_t v14; // 0x8f601f94
        if (v13 == 1) {
            // 0x8f601f40
            int32_t v15;
            if (v15 != 14) {
                // after_if_8f601f48_0
                if (v15 != 5) {
                    // 0x8f601f94
                    v14 = v9 + 1;
                    v9 = v14;
                    if (v14 == v8) {
                        // break -> 0x8f601fa0
                        break;
                    }
                    v4 = v15;
                    v12 = v14;
                    // continue -> 0x8f601f28
                    continue;
                }
            }
            // 0x8f601f50
            if (result % 0x100000 != 0) {
                // 0x8f601f70
                _panic(v1, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/platform.c", (int32_t)"(ptn_entry.start & (MB-1)) == 0" & -0x10000 | 314, (int32_t)"(ptn_entry.start & (MB-1)) == 0", 0, 0);
                // branch -> 0x8f601fa0
            }
        } else {
            // 0x8f601f94
            v14 = v9 + 1;
            v9 = v14;
            if (v14 == v8) {
                // break -> 0x8f601fa0
                break;
            }
            v4 = v13;
            v12 = v14;
            // continue -> 0x8f601f28
            continue;
        }
        // 0x8f601fa0
        if (v2 != g21) {
            // 0x8f601fb0
            __stack_chk_fail();
            // branch -> 0x8f601fb4
        }
        // 0x8f601fb4
        return result;
    }
    // 0x8f601fa0
    if (v2 != g21) {
        // 0x8f601fb0
        __stack_chk_fail();
        // branch -> 0x8f601fb4
    }
    // 0x8f601fb4
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strstr(char * haystack, const char * needle);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:44:06
