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
int32_t charging_timer_func(int32_t a1, int32_t a2);
int32_t connect_key(void);
int32_t disconnect_key(void);
int32_t get_offset_ui_setting(int32_t a1, int32_t a2);
int32_t invalidate(int32_t a1);
int32_t key_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t key_timer_func(int32_t a1, int32_t a2);
int32_t refresh(char * str, int32_t a2);
int32_t screen_manager_entry(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_manager_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t show(char * a1, int32_t a2, int32_t a3);
int32_t start_charging(int32_t a1);
int32_t stop(int32_t a1, int32_t a2);
char * test_AES(void);
int32_t test_HAB(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t test_ProcUID(void);
int32_t turn_on_display(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t usb_charging_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

// --------------------- Global Variables ---------------------

int32_t g34 = 0; // LR
int32_t g35 = 0; // R0
int32_t g36 = 0; // R1
int32_t g37 = 0; // R11
int32_t g38 = 0; // R2
int32_t g39 = 0; // R3
int32_t g40 = 0; // R4
int32_t g41 = 0; // R5
int32_t g42 = 0; // R6
int32_t g43 = 0; // R7
int32_t g44 = 0; // R8
int32_t g45 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f637e38
int32_t g2 = -0x1a60cd10; // 0x8f637e98
int32_t g3 = -0x1a60ceec; // 0x8f6383f0
int32_t g4 = -0x1500000c; // 0x8f638508
int32_t g5 = -0x16d2bfed; // 0x8f638524
int32_t g6 = -0x1a60ffa0; // 0x8f638958
int32_t g7 = -0x1a60ff98; // 0x8f638b94
int32_t g8 = -0x16d2bfed; // 0x8f638c08
int32_t g9 = -0x709c73f8; // 0x8f6ac374
int32_t g10 = 0; // 0x8f6ac394
int32_t g11 = 0; // 0x8f6b1608
int32_t g12 = 0; // 0x8f6b16e0
int32_t g13 = 0; // 0x8f6e07ac
char * g14; // 0x8f6e07c8
int32_t g15 = 0; // 0x8f6e07cc
int32_t g16 = 0; // 0x8f6e07e8
int32_t g17 = 0; // 0x8f6e07ec
int32_t g18 = 0; // 0x8f6e07f4
int32_t g19 = 0; // 0x8f6e0808
int32_t g20 = 0; // 0x8f6e080c
int32_t g21 = 0; // 0x8f6e0828
int32_t g22 = 0; // 0x8f6e082c
char * g23; // 0x8f6e0849
int32_t g24 = 0; // 0x8f6e084c
int32_t g25 = 0; // 0x8f6e0854
int32_t g26 = 0; // 0x8f6e0858
int32_t g27 = 0; // 0x8f6e085c
int32_t g28 = 0; // 0x8f6e0878
int32_t g29 = 0; // 0x8f6e0894
int32_t g30 = 0; // 0x8f6e08b0
int32_t g31 = 0; // 0x8f6e08b4
int32_t g32 = 0; // 0x8f7112f4
int32_t g33 = 0; // 0x8f7125d0

// ------------------------ Functions -------------------------

// Address range: 0x8f63867c - 0x8f638713
int32_t turn_on_display(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g32;
    char v2 = *(char *)&g23; // 0x8f6386981
    int32_t v3 = v2; // 0x8f6386982
    int32_t v4; // 0x8f6386b4
    int32_t result; // 0x8f6386d4
    if (v2 != 0) {
        // 0x8f6386b0
        v4 = mutex_acquire((int32_t)&g28, a2, v1, v3, a1, v1, g40, g41, g42, g34, a5);
        result = is_display_on(v4);
        if (a1 == 0) {
            // 0x8f6386d4
            if (result != 0) {
                // 0x8f6386e0
                return display_turn_off(result, a2, v1, v3, a1, v1);
            }
            // 0x8f6386e4
            if (v1 == g32) {
                // 0x8f6386f8
                return mutex_release((int32_t)&g28, a2, v1, v1, g40, g41, g42);
            }
            // 0x8f6386f4
            __stack_chk_fail();
            return result;
        }
        // 0x8f6386c0
        if (result == 0) {
            // 0x8f6386cc
            return display_turn_on(0, a2, v1, v3, a1, v1, g40, g41);
        }
        // 0x8f6386e4
        if (v1 == g32) {
            // 0x8f6386f8
            return mutex_release((int32_t)&g28, a2, v1, v1, g40, g41, g42);
        }
        // 0x8f6386f4
        __stack_chk_fail();
        return result;
    }
    thread_sleep(10, a2, v1, v3, a1, v1, g40, g41);
    char v5 = *(char *)&g23; // 0x8f638698
    int32_t v6 = v5; // 0x8f638698
    v3 = v6;
    while (v5 == 0) {
        // 0x8f6386a4
        thread_sleep(10, a2, v1, v6, a1, v1, g40, g41);
        v5 = *(char *)&g23;
        v6 = v5;
        v3 = v6;
        // continue -> 0x8f6386a4
    }
    // 0x8f6386b0
    v4 = mutex_acquire((int32_t)&g28, a2, v1, v3, a1, v1, g40, g41, g42, g34, a5);
    result = is_display_on(v4);
    if (a1 == 0) {
        // 0x8f6386d4
        if (result != 0) {
            // 0x8f6386e0
            return display_turn_off(result, a2, v1, v3, a1, v1);
        }
    } else {
        // 0x8f6386c0
        if (result == 0) {
            // 0x8f6386cc
            return display_turn_on(0, a2, v1, v3, a1, v1, g40, g41);
        }
    }
    // 0x8f6386e4
    if (v1 == g32) {
        // 0x8f6386f8
        return mutex_release((int32_t)&g28, a2, v1, v1, g40, g41, g42);
    }
    // 0x8f6386f4
    __stack_chk_fail();
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 19
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:36
