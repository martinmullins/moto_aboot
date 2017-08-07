//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t charger_gone_shutdown_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t display_dbr_logo(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g5 = 0; // R4
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
char * g2 = "\x01"; // 0x8f6ab02c
int32_t g3 = 0; // 0x8f6b5064
int32_t g4 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f603c08 - 0x8f603c63
int32_t display_dbr_logo(int32_t a1, int32_t a2) {
    int32_t v1 = g4;
    int32_t v2 = set_logo_screen_mode(1, a2, set_logo(2, a2, 0, v1), v1); // 0x8f603c24
    int32_t v3;
    int32_t result = show((int32_t)"logo_screen", 1, v2, (int32_t)&g1, a1, v1, g5, 0, v3, 0, 0, 0, 0, 0, 0); // 0x8f603c38
    if (v1 != g4) {
        // 0x8f603c4c
        __stack_chk_fail();
        // branch -> 0x8f603c50
    }
    // 0x8f603c50
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 05:52:27
