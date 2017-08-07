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

int32_t add(int32_t * a1, int32_t a2);
int32_t clogo_load_handler(int32_t a1);
int32_t dbr_timeout_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t display_logo(int32_t a1, int32_t a2);
int32_t fastboot_flush_all_logs(int32_t a1, int32_t a2);
int32_t handle_sod_event(int32_t a1, int32_t * a2);
int32_t init(int32_t a1, int32_t a2, int32_t a3);
int32_t is_screen(char * str);
int32_t need_check(char * a1, int32_t a2, int32_t a3);
int32_t ondraw(int32_t a1, int32_t a2, int32_t a3);
int32_t onkey(int32_t result, int32_t a2, int32_t a3);
int32_t onkey_17(int32_t a1, int32_t a2);
int32_t ramdump_view_init(int32_t a1, int32_t a2);
int32_t reboot_timer_func(int32_t a1, int32_t a2, char * a3);
int32_t reset_display_timer_func(int32_t a1, int32_t a2);
int32_t set_content_to_show(int32_t a1, int32_t a2);
int32_t show_battery_status(char * a1, int32_t a2);
int32_t start(void);
int32_t stop_16(int32_t a1, int32_t a2);
int32_t try_load_clogo(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

// --------------------- Global Variables ---------------------

bool g52 = false; // LR
int32_t g53 = 0; // R1
int32_t g54 = 0; // R10
int32_t g55 = 0; // R11
int32_t g56 = 0; // R2
int32_t g57 = 0; // R4
int32_t g58 = 0; // R5
int32_t g59 = 0; // R6
int32_t g60 = 0; // R7
int32_t g61 = 0; // R8
int32_t g62 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f638578
int32_t g2 = -0x16d2bc09; // 0x8f638ab0
int32_t g3 = -0x16d2bfed; // 0x8f639090
int32_t g4 = -0x1a60cfcc; // 0x8f6390e4
int32_t g5 = -0x16d2b010; // 0x8f639250
int32_t g6 = -0x1a60cfb4; // 0x8f639e10
int32_t g7 = -0x16d2bf10; // 0x8f639e6c
char * g8; // 0x8f63a37c
int32_t g9 = 1; // 0x8f69c7cc
int32_t g10 = 0x746e6300; // 0x8f6a4e20
char g11 = 0; // 0x8f6ac3c0
int32_t g13 = -1; // 0x8f6ac3e0
int32_t g14 = -1; // 0x8f6ac3e4
int32_t g15 = 0; // 0x8f6b166c
char * g16; // 0x8f6e0849
int32_t g17 = 0; // 0x8f6e084c
int32_t g18 = 0; // 0x8f6e0854
int32_t g19 = 0; // 0x8f6e08b0
int32_t g20 = 0; // 0x8f6e08b8
char * g21; // 0x8f6e08d4
int32_t g22 = 0; // 0x8f6e08d8
int32_t g23 = 0; // 0x8f6e08f4
char * g24; // 0x8f6e08f8
char * g25; // 0x8f6e08f9
int32_t g26 = 0; // 0x8f6e08fc
int32_t g27 = 0; // 0x8f6e0918
int32_t g28 = 0; // 0x8f6e091c
char * g29; // 0x8f6e0938
int32_t g30 = 0; // 0x8f6e093c
int32_t g31 = 0; // 0x8f6e0940
char * g32; // 0x8f6e095c
int32_t g33 = 0; // 0x8f6e0960
int32_t g34 = 0; // 0x8f6e097c
int32_t g35 = 0; // 0x8f7112f4
char * g36; // 0x8f711580
int16_t g37 = 0; // 0x8f711582
int16_t g38 = 0; // 0x8f711584
char * g39; // 0x8f711588
char * g40; // 0x8f711589
int16_t g41 = 0; // 0x8f71158a
int16_t g42 = 0; // 0x8f71158c
int16_t g43 = 0; // 0x8f711592
int16_t g44 = 0; // 0x8f711594
int16_t g45 = 0; // 0x8f711596
int16_t g46 = 0; // 0x8f711598
int16_t g47 = 0; // 0x8f71159c
int32_t g48 = 0; // 0x8f712580
int32_t g49 = 0; // 0x8f7125b8
int32_t g50 = 0; // 0x8f7125bc
int32_t g51 = 0; // 0x8f7125ec
int32_t * g12 = &g10; // 0x8f6ac3dc

// ------------------------ Functions -------------------------

// Address range: 0x8f638c08 - 0x8f638c6f
int32_t add(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    g53 = a2;
    int32_t v2 = g57; // 0x8f638c08
    int32_t v3 = g52 ? -0x709c73b8 : 0; // 0x8f638c08
    g57 = &g35;
    int32_t result = g35;
    int32_t v4 = &g19; // R3
    *a1 = g19;
    *(int32_t *)(v1 + 4) = v4;
    *(int32_t *)v4 = v1;
    *(int32_t *)(g19 + 4) = v1;
    int32_t v5 = g17 + 1; // 0x8f638c38
    g56 = v5;
    *(int32_t *)(int32_t)&g17 = v5;
    int32_t v6 = *(int32_t *)(v1 + 48); // 0x8f638c40
    g52 = true;
    ((int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))v6)(v1, a2, g56, v6, v1, result, v2, v3);
    if (result != g35) {
        // 0x8f638c58
        __stack_chk_fail();
        // branch -> 0x8f638c5c
    }
    // 0x8f638c5c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 20
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:53
