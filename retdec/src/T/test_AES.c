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

// Address range: 0x8f637168 - 0x8f63726f
char * test_AES(void) {
    int32_t v1 = 16; // R2
    int32_t v2;
    int32_t v3 = &v2; // 0x8f63717c_0
    int32_t v4 = g22;
    int32_t v5 = v4; // R3
    memset((char *)&v2, 65, 16);
    int32_t v6;
    fboot_info((int32_t)"INFO", (int32_t)"Calling AESEncrypt...", v1, v5, v6, 0, 0, v2, 0, 0, 0);
    int32_t v7;
    int32_t v8 = SecAESEncrypt((char *)&v2, (int32_t)&v7, v1, v5, v6, 0, 0, v2); // 0x8f6371a0
    int32_t v9; // 0x8f637234
    if (v8 != 0) {
        // 0x8f63722c
        // branch -> 0x8f637234
        // 0x8f637234
        v9 = fboot_info((int32_t)"INFO", (int32_t)"SecAESEncrypt failed", v1, v5, v6, 0, 0, v2, 0, 0, 0);
        if (v4 != g22) {
            // 0x8f637248
            __stack_chk_fail();
            // branch -> 0x8f63724c
        }
        // 0x8f63724c
        return (char *)v9;
    }
    // 0x8f6371ac
    int32_t v10;
    int32_t v11 = 0x1000000 * v10 / 0x1000000; // 0x8f6371ac
    int32_t str;
    int32_t v12 = &str; // 0x8f6371b0_0
    int32_t v13;
    int32_t v14 = 0x1000000 * v13 / 0x1000000; // 0x8f6371b4
    v5 = v14;
    int32_t v15 = 0x1000000 * v7 / 0x1000000; // 0x8f6371b8
    sprintf((char *)&str, "3 encoded bytes.. %X,%X,%X", v15, v14, v11);
    fboot_info((int32_t)"INFO", v12, v15, v5, v11, 0, 0, v2, 0, 0, 0);
    v1 = 16;
    memset((char *)&v2, v3, 16);
    int32_t v16 = SecAESDecrypt((char *)&v7, v3, v1, v5, v11, 0, 0, v2); // 0x8f6371ec
    int32_t v17; // 0x8f6371f8
    if (v16 == 0) {
        // 0x8f6371f8
        int32_t v18;
        v17 = 0x1000000 * v18 / 0x1000000;
        int32_t v19 = 0x1000000 * v2 / 0x1000000; // 0x8f637200
        v1 = v19;
        int32_t v20;
        int32_t v21 = 0x1000000 * v20 / 0x1000000; // 0x8f637204
        v5 = v21;
        sprintf((char *)&str, "3 decoed bytes.. %X,%X,%X", v19, v21, v17);
        // branch -> 0x8f637234
    } else {
        // 0x8f637220
        v12 = (int32_t)"SecAESDecrypt failed";
        v17 = v11;
        // branch -> 0x8f637234
    }
    // 0x8f637234
    v9 = fboot_info((int32_t)"INFO", v12, v1, v5, v17, 0, 0, v2, 0, 0, 0);
    if (v4 != g22) {
        // 0x8f637248
        __stack_chk_fail();
        // branch -> 0x8f63724c
    }
    // 0x8f63724c
    return (char *)v9;
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