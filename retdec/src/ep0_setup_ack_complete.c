//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int32_t ep0_setup_ack_complete(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_descriptor_alloc(char a1, uint32_t a2, int16_t a3);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x8f6b7924
int32_t g2 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f604cbc - 0x8f604d5f
int32_t ep0_setup_ack_complete(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = 0; // R4
    int32_t result = a1; // R0
    int32_t v2 = g2;
    int32_t v3;
    switch (g1) {
        case 1024: {
            int32_t v4 = print_log(1, (int32_t)"Entering test mode for TST_PKT\n", (int32_t)&g2, 1024, a1, v2, v1, 0, v3, 0, 0, 0, 0); // 0x8f604cf8
            result = v4;
            // branch -> 0x8f604d2c
            break;
        }
        case 768: {
            int32_t v5 = print_log(1, (int32_t)"Entering test mode for SE0-NAK\n", (int32_t)&g2, 768, a1, v2, v1, 0, v3, 0, 0, 0, 0); // 0x8f604d18
            result = v5;
            // branch -> 0x8f604d2c
            break;
        }
    }
    // 0x8f604d44
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 06:00:20
