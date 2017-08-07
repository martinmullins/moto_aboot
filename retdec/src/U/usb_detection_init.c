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

int32_t add_dump_region(int32_t a1, char * a2);
int32_t add_pre_crash_regions(int32_t a1);
int32_t disable_shutdown_timer(int32_t a1);
int32_t enable_shutdown_timer(int32_t a1);
int32_t kernel_log_find(char * str, char * a2, int32_t a3);
int32_t send_usb_status_command(char a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sh_erase(int32_t a1);
int32_t sh_flash(int32_t a1);
int32_t sh_recover(int32_t a1);
int32_t shutdown_timer_func(int32_t a1, int32_t a2);
int32_t sod_init(void);
int32_t sod_ramdump_clear(int32_t a1, int32_t a2);
int32_t start_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
char * test_AES(void);
char * test_rand(void);
int32_t type_atoi_15(char * str, int32_t a2, int32_t a3);
int32_t update_usb_status(int32_t a1, int32_t a2, int32_t a3);
int32_t usb_detection_init(void);
int32_t usb_status_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t userdata_resize(int32_t a1, int32_t a2, int32_t a3);
int32_t userdata_stat(int32_t * a1, int32_t * a2, int32_t * a3);

// --------------------- Global Variables ---------------------

int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R10
int32_t g28 = 0; // R2
int32_t g29 = 0; // R3
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g34 = 0; // R8
int32_t g35 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f634630
int32_t g2 = -0x1a60ce68; // 0x8f634848
int32_t g3 = -0x16d2bf09; // 0x8f634ac0
int32_t (*g4)(int32_t) = (int32_t (*)(int32_t))-0x16d2bfed; // 0x8f638714
int32_t g5 = 0x2020003a; // 0x8f686ac4
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = -0x70a00000; // 0x8f6ac224
int32_t g8 = -0x709c73f8; // 0x8f6ac374
int32_t g9 = 0; // 0x8f6e06fc
char * g10; // 0x8f6e0718
char * g11; // 0x8f6e071c
char * g12; // 0x8f6e0720
int32_t g13 = 0; // 0x8f6e0724
int32_t g14 = 0; // 0x8f6e0740
int32_t g15 = 0; // 0x8f6e0744
int32_t g16 = 0; // 0x8f6e0748
int32_t g17 = 0; // 0x8f6e0764
int32_t g18 = 0; // 0x8f6e078c
int32_t g19 = 0; // 0x8f6e0790
char * g20; // 0x8f6e0794
char * g21; // 0x8f6e0798
int32_t g22 = 0; // 0x8f7112f4
int32_t g23 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f6346d0 - 0x8f6347db
int32_t usb_detection_init(void) {
    int32_t v1 = g30; // 0x8f6346d0
    int32_t v2 = g24; // 0x8f6346d0
    char v3 = *(char *)&g12; // 0x8f6346e0
    int32_t v4 = v3; // R5
    int32_t v5 = g22;
    if (v3 != 0) {
        // 0x8f634790
        g28 = v5;
        // 0x8f6347a4
        g30 = v1;
        return g25;
        // 0x8f6347a0
        __stack_chk_fail();
        // branch -> 0x8f6347a4
        // 0x8f6347a4
        g30 = v1;
        return g25;
    }
    int32_t v6 = timer_initialize((int32_t)&g9, g26, g28, v5); // 0x8f6346fc
    g15 = &g14;
    g14 = &g14;
    mutex_init((int32_t)&g13, v6, g28, (int32_t)&g14);
    g11 = (char *)&g10;
    *(int32_t *)&g10 = (int32_t)&g10;
    mutex_init((int32_t)&g16, v6, g28, (int32_t)&g10);
    event_init((int32_t)&g17, v4, 1, (int32_t)&g10);
    g26 = &g2;
    int32_t v7;
    int32_t v8 = thread_create((int32_t)"usb_status_thread", (int32_t)&g2, v4, 16, 0x1000, 0, 0, v5, 0, v1, g31, g32, g33, v2, v7, 0); // 0x8f634750
    g25 = v8;
    if (v8 == 0) {
        // 0x8f63475c
        g28 = v5;
        if (v5 == g22) {
            // 0x8f63476c
            g26 = (int32_t)"%s: usb_status  thread_create fail\n";
            g28 = (int32_t)"usb_detection_init";
            g30 = v1;
            g24 = v2;
            return print_log(-1, (int32_t)"%s: usb_status  thread_create fail\n", (int32_t)"usb_detection_init", v5, v1, g31, g32, g33, v2, v7, 0, 0, 0);
        }
        // 0x8f6347a0
        __stack_chk_fail();
        // branch -> 0x8f6347a4
    } else {
        int32_t v9 = thread_resume(v8, (int32_t)&g2, v4, 16, 0x1000, 0, 0, v5); // 0x8f634784
        g25 = v9;
        *(char *)(int32_t)&g12 = 1;
        // branch -> 0x8f634790
        // 0x8f634790
        g28 = v5;
        if (v5 != g22) {
            // 0x8f6347a0
            __stack_chk_fail();
            // branch -> 0x8f6347a4
        }
    }
    // 0x8f6347a4
    g30 = v1;
    return g25;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:56