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

int32_t fastboot_handler(int32_t a1, int32_t a2);
int32_t handle_fboot_command_reboot(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g23 = 0; // LR
int32_t g24 = 0; // R0
int32_t g25 = 0; // R2
int32_t g26 = 0; // R3
int32_t g27 = 0; // R4
int32_t g1 = -0x16d2bf10; // 0x8f621a7c
int32_t g2 = -0x16d2b801; // 0x8f621dcc
int32_t g3 = -0x16d2bf09; // 0x8f622f94
int32_t g4 = -0x16d2bc10; // 0x8f623c30
int32_t g5 = -0x16d2bf8d; // 0x8f623db0
int32_t g6 = -0x16d2b010; // 0x8f62d370
int32_t g7 = -0x16d2bfed; // 0x8f638714
int32_t g8 = -0x16d2bc09; // 0x8f638ab0
int32_t g10 = 0x746e6300; // 0x8f6a4e20
int32_t g11 = 1; // 0x8f6ac0f0
int32_t g12 = 0; // 0x8f6c0390
int32_t g13 = 0; // 0x8f6c0398
int32_t g14 = 0; // 0x8f6c03d0
int32_t g15 = 0; // 0x8f7112f4
int32_t g16 = 0; // 0x8f7114f4
int32_t g17 = 0; // 0x8f7114f8
int32_t g18 = 0; // 0x8f7114fc
int32_t g19 = 0; // 0x8f711508
int32_t g20 = 0; // 0x8f71150c
int32_t g21 = 0; // 0x8f711510
int32_t g22 = 0; // 0x8f711534
char * g9[13] = {
    "download",
    (char *)&g1,
    "flash",
    (char *)&g3,
    "multiflash",
    (char *)&g4,
    "getvar",
    (char *)&g6,
    "erase",
    (char *)&g5,
    "boot",
    (char *)&g2,
    "reboot"
}; // 0x8f68422c

// ------------------------ Functions -------------------------

// Address range: 0x8f6215cc - 0x8f62165f
int32_t handle_fboot_command_reboot(int32_t a1, int32_t a2) {
    int32_t v1 = g27; // 0x8f6215cc
    int32_t v2;
    print_log(1, (int32_t)"rebooting the device\n", g25, g15, a1, g15, v1, g23, v2, 0, 0, 0, 0);
    fboot_ack((int32_t)"OKAY", (int32_t)"rebooting normally", g25, g15, a1, g15, v1, g23, v2, 0);
    int32_t v3 = udc_stop(mdelay(100, (int32_t)"rebooting normally", g25, g15), (int32_t)"rebooting normally", g25, g15, a1); // 0x8f6215fc
    int32_t v4 = g11;
    int32_t v5 = v4 + 1; // 0x8f621608
    g11 = v5;
    int32_t v6 = v3; // 0x8f62161c
    if (v4 == 0) {
        // 0x8f621618
        v6 = function_8f619448(v3);
        // branch -> 0x8f62161c
    }
    int32_t v7 = backlight_turn_off(v6, (int32_t)"rebooting normally", (int32_t)&g11, v5, a1, g15); // 0x8f62161c
    platform_uninit((char *)v7, (int32_t)"rebooting normally", (int32_t)&g11, v5);
    reboot_device(NULL, (int32_t)"rebooting normally", (int32_t)&g11, v5, a1, g15, v1, g23, v2, 0);
    g25 = g15;
    g26 = g15;
    g24 = 1;
    // 0x8f621644
    g27 = v1;
    return 1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 05:29:21
