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

int32_t get_brightness_67(int32_t a1, int32_t a2, int32_t a3);
int32_t get_brightness_71(int32_t a1, int32_t a2, int32_t a3);
int32_t get_max_brightness_68(int32_t a1, int32_t a2, int32_t a3);
int32_t isl98611_backlight_off(int32_t a1, int32_t a2, int32_t a3);
int32_t isl98611_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t isl98611_init(void);
int32_t lp8556_backlight_off(int32_t a1, int32_t a2, int32_t a3);
int32_t lp8556_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t lp8556_read_reg(int32_t a1, int32_t a2);
int32_t oem_isl98611(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_isl98611_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_lp8556(int32_t a1, int32_t a2, int32_t a3);
int32_t set_brightness_66(uint32_t a1, int32_t a2);
int32_t set_brightness_70(uint32_t a1, int32_t a2);
int32_t set_brightness_73(int32_t a1);
int32_t set_default_brightness_69(uint32_t a1, int32_t a2, int32_t a3);
int32_t set_default_brightness_72(uint32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g13 = 0; // R2
int32_t g14 = 0; // R4
int32_t g15 = 0; // R5
int32_t g16 = 0; // R6
bool g17 = false; // R7
int32_t g1 = 0x746e6300; // 0x8f6a4e20
int32_t g2 = 255; // 0x8f6aca90
int32_t g3 = 255; // 0x8f6aca94
int32_t g4 = 255; // 0x8f6aca98
int32_t g5 = 255; // 0x8f6aca9c
int32_t g6 = 255; // 0x8f6acaa0
int32_t g7 = 255; // 0x8f6acaa4
int32_t g8 = 8; // 0x8f6acaa8
int32_t g9 = 0; // 0x8f6e0a88
int32_t g10 = 0; // 0x8f6e0a98
int32_t g11 = 0; // 0x8f6e0a9c
int32_t g12 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f640a6c - 0x8f640b2b
int32_t set_brightness_66(uint32_t a1, int32_t a2) {
    int32_t v1 = g14; // 0x8f640a70
    int32_t v2 = g12;
    int32_t v3;
    if (g10 == 0) {
        // 0x8f640aa0
        return print_log(-1, (int32_t)"%s: lp8556 dev is not initialized\n", (int32_t)"set_brightness", v2, v1, g15, 0, v3, 0, 0, 0, 0, 0);
    }
    int32_t v4 = v1; // 0x8f640ad0
    if (a1 < 255) {
        // if_8f640abc_0_true
        g14 = 255;
        v4 = 255;
        // branch -> after_if_8f640ac0_0
    }
    int32_t result = g10; // R0
    uint32_t v5 = v4 % 256; // 0x8f640ad0
    qup_i2c_write_byte(g10, 44, 0, v5, a1, v2, g13, v1, g15, 0, v3);
    int32_t v6 = result; // 0x8f640ad8
    int32_t v7 = v6; // 0x8f640b10_23
    if (v6 <= 0xffffffff) {
        int32_t v8 = print_log(-1, (int32_t)"%s: fail to write REG_LED_CRS\n", (int32_t)"set_brightness", v5, a1, v2, g13, v1, g15, 0, v3, 0, 0); // 0x8f640aec
        result = v8;
        v7 = v8;
        // branch -> 0x8f640af0
    }
    // 0x8f640af0
    g3 = g14;
    if (v2 != g12) {
        // 0x8f640b08
        __stack_chk_fail();
        // branch -> 0x8f640b0c
    } else {
        result = v7;
    }
    // 0x8f640b0c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:47:14