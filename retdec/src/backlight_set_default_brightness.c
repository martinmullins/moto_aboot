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

int32_t backlight_on(int32_t a1, int32_t a2);
int32_t backlight_set_default_brightness(int32_t a1);
int32_t display_barcode_in_code128_51(int32_t result, char * str);
int32_t get_brightness(int32_t a1, int32_t a2, int32_t a3);
int32_t get_max_brightness(int32_t a1, int32_t a2, int32_t a3);
int32_t lm3697_backlight_off(int32_t a1, int32_t a2, int32_t a3);
int32_t lm3697_backlight_on(int32_t a1, int32_t a2, int32_t a3);
int32_t lm3697_init(void);
int32_t ondraw_52(void);
int32_t screen_init_53(int32_t a1, int32_t a2, int32_t a3);
int32_t screen_ondraw_56(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_onkey_58(int32_t a1, int32_t a2, int32_t a3);
int32_t screen_start_57(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_stop_54(int32_t a1, int32_t a2, int32_t a3);
int32_t set_brightness(uint32_t a1);
int32_t set_content_to_show_55(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t set_default_brightness(uint32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // LR
int32_t g23 = 0; // R1
int32_t g24 = 0; // R2
int32_t g25 = 0; // R3
int32_t g26 = 0; // R4
int32_t g27 = 0; // R5
int32_t g28 = 0; // R6
int32_t g29 = 0; // R7
int32_t g30 = 0; // R8
int32_t g31 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f638578
int32_t g2 = -0x16d2bfc9; // 0x8f6387c0
int32_t g3 = -0x16d2bc09; // 0x8f638ab0
int32_t g4 = 100; // 0x8f6aca78
int32_t g5 = 255; // 0x8f6aca7c
int32_t g6 = 255; // 0x8f6aca80
int32_t g7 = 0; // 0x8f6b179c
char * g8; // 0x8f6e0a64
char * g9; // 0x8f6e0a65
int32_t g10 = 0; // 0x8f6e0a68
int32_t g11 = 0; // 0x8f6e0a84
int32_t g12 = 0; // 0x8f6e0a88
int32_t g13 = 0; // 0x8f6e0a8c
char * g14; // 0x8f6e0a90
int32_t g15 = 0; // 0x8f7112f4
int32_t g16 = 0; // 0x8f711514
char * g17; // 0x8f711530
int32_t g18 = 0; // 0x8f7125a8
int32_t g19 = 0; // 0x8f7125ac
int32_t g20 = 0; // 0x8f7125b0
int32_t g21 = 0; // 0x8f7125b4

// ------------------------ Functions -------------------------

// Address range: 0x8f63f760 - 0x8f63f7cf
int32_t backlight_set_default_brightness(int32_t a1) {
    int32_t v1 = g26; // 0x8f63f760
    int32_t v2 = g27; // 0x8f63f760
    g24 = &g15;
    int32_t result = g15;
    g26 = &g15;
    int32_t v3 = g12;
    int32_t v4 = result;
    if (v3 != 0) {
        int32_t v5 = *(int32_t *)(v3 + 40); // 0x8f63f784
        g27 = v5;
        int32_t v6 = *(int32_t *)(v3 + 28); // 0x8f63f788
        g25 = v6;
        g22 = -0x709c0870;
        ((int32_t (*)(int32_t))v6)(v6);
        g23 = 100;
        int32_t v7 = g4;
        g25 = v7;
        g22 = -0x709c0858;
        ((int32_t (*)(int32_t, int32_t, int32_t))v5)(v7 * a1 / 100, 100, v7);
        v4 = g15;
        // branch -> 0x8f63f7a8
    }
    // 0x8f63f7a8
    if (result != v4) {
        // 0x8f63f7b8
        __stack_chk_fail();
        // branch -> 0x8f63f7bc
    }
    // 0x8f63f7bc
    g26 = v1;
    g27 = v2;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:44:44
