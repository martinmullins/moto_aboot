//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t mmc_parse_response(char * a1, int32_t a2);
char * mmc_send_app_cmd_isra_5(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6090e4 - 0x8f60916f
char * mmc_send_app_cmd_isra_5(char * a1, int32_t a2) {
    int32_t v1 = 0x10000 * a2; // 0x8f609108
    int32_t v2;
    memset((char *)&v2, 0, 64);
    v2 = 55;
    int32_t v3 = 1; // R4
    int32_t v4 = sdhci_send_command(a1, (int32_t)&v2, 64, 55, 55, v1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); // 0x8f609130
    int32_t v5 = v4; // R0
    int32_t v6 = 0; // 0x8f609164_24
    if (v4 != 0) {
        // 0x8f60913c
        print_log(-1, (int32_t)"Failed Sending CMD55\n", 64, 55, v2, v1, 0, 0, 0, 0, 0, 0, 0);
        v5 = v3;
        v6 = v3;
        // branch -> 0x8f60914c
    }
    v5 = v6;
    // 0x8f609160
    return (char *)v5;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 06:25:05