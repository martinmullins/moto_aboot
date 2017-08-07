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

int32_t __utag_gets_constprop_4_4(char * a1, int32_t a2, int32_t a3);
char * __utag_puts_constprop_5(char * str2, char * a2);
int32_t app_thread_entry(int32_t a1, int32_t a2);
int32_t apps_init(int32_t a1, int32_t a2, int32_t a3);
int32_t gpt_get_back_zone_address(int32_t a1, int32_t a2, int32_t a3);
int32_t insert_timer_in_queue(int32_t a1, int32_t a2, int32_t a3);
char * mbm_entry(void);
int32_t pmic_decode_reg(int32_t a1, int32_t a2);
int32_t pmic_get_name(void);
int32_t pmic_get_version(int32_t a1);
int32_t pmic_read_reg(int32_t a1, int32_t a2);
int32_t pmic_write_reg(int32_t a1, uint32_t a2);
int32_t timer_initialize(int32_t * a1, int32_t a2, int32_t a3);
int32_t timer_set(int32_t a1, int32_t a2, int32_t a3);
int32_t timer_tick(int32_t a1, int32_t a2, int32_t a3);
int32_t type_atoi_3(char * str, int32_t a2, int32_t a3);
int32_t type_itoa(int32_t a1, int32_t a2, int32_t a3);
int32_t wait_queue_timeout_handler(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g33 = 0; // LR
int32_t g34 = 0; // R0
int32_t g35 = 0; // R1
int32_t g36 = 0; // R2
int32_t g37 = 0; // R3
int32_t g38 = 0; // R4
int32_t g39 = 0; // R5
int32_t g40 = 0; // R6
int32_t g41 = 0; // R7
int32_t g42 = 0; // R8
int32_t g43 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f61c6b4
int32_t g2 = -0x16d2be10; // 0x8f61cfe4
int32_t g3 = -0x16d2bf90; // 0x8f61db1c
int32_t g4 = -0x16d2bf81; // 0x8f61dca0
int32_t g5 = -0x1a60ced0; // 0x8f638854
int32_t g6 = -0x16d2bfe1; // 0x8f6389cc
char * g7[28] = {
    "unknown",
    "pm8941",
    "pm8841",
    "pm8019",
    "pm8026",
    "pm8110",
    "pma8084",
    "pmi8962",
    "pmd9635",
    "pm8994",
    "pmi8994",
    "pm8916",
    "reserved",
    "warm reset",
    "immediate XVDD shutdown",
    "reserved",
    "shutdown",
    "DVDD shutdown",
    "XVDD shutdown",
    "hardware reset",
    "DVDD hardware reset",
    "XVDD hardware reset",
    "warm reset and DVDD shutdown",
    "warm reset and XVDD shutdown",
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681dcc
char * g8[12] = {
    "shutdown",
    "DVDD shutdown",
    "XVDD shutdown",
    "hardware reset",
    "DVDD hardware reset",
    "XVDD hardware reset",
    "warm reset and DVDD shutdown",
    "warm reset and XVDD shutdown",
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e0c
char * g9[8] = {
    "DVDD hardware reset",
    "XVDD hardware reset",
    "warm reset and DVDD shutdown",
    "warm reset and XVDD shutdown",
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e1c
char * g10[7] = {
    "XVDD hardware reset",
    "warm reset and DVDD shutdown",
    "warm reset and XVDD shutdown",
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e20
char * g11[6] = {
    "warm reset and DVDD shutdown",
    "warm reset and XVDD shutdown",
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e24
char * g12[5] = {
    "warm reset and XVDD shutdown",
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e28
char * g13[4] = {
    "warm reset and shutdown",
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e2c
char * g14[3] = {
    "warm reset then hardware reset",
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e30
char * g15[2] = {
    "warm reset then DVDD hardware reset",
    "warm reset then XVDD hardware reset"
}; // 0x8f681e34
char (*g16)[36] = "warm reset then XVDD hardware reset"; // 0x8f681e38
int32_t g17 = 0x2020003a; // 0x8f686ac4
int32_t g20 = -0x709d39dc; // 0x8f6a93e4
int32_t g21 = 1; // 0x8f6ac0f0
char * g24[2] = {
    "ttyHSL0,115200,n8",
    "ttyHSL0,115200,n8"
}; // 0x8f6ac1a8
int32_t g25 = 0; // 0x8f6c01d0
int32_t g26 = 0; // 0x8f6c01d4
char * g27; // 0x8f6c01d8
char * g28; // 0x8f6c0258
char * g29; // 0x8f6c0298
int32_t g30 = 0; // 0x8f7112f4
char * g31; // 0x8f7114b0
int32_t g32 = 0; // 0x8f7114b4
char * g18[2] = {
    "mbm",
    (char *)&g2
}; // 0x8f6a93c4
char * g19[3] = {
    "screen_manager",
    (char *)&g6,
    (char *)&g5
}; // 0x8f6a93d4
char * g22[4] = {
    "null",
    "fastboot",
    (char *)&g3,
    (char *)&g4
}; // 0x8f6ac108
char * g23[3] = {
    "fastboot",
    (char *)&g3,
    (char *)&g4
}; // 0x8f6ac10c

// ------------------------ Functions -------------------------

// Address range: 0x8f61c534 - 0x8f61c5a7
int32_t pmic_get_name(void) {
    int32_t result = *(int32_t *)&g7; // 0x8f61c550
    int32_t v1 = *(int32_t *)((int32_t)&g7 + 4); // 0x8f61c550
    int32_t v2 = *(int32_t *)((int32_t)&g7 + 8); // 0x8f61c550
    int32_t v3 = *(int32_t *)((int32_t)&g7 + 12); // 0x8f61c550
    int32_t v4; // bp-44
    int32_t v5 = &v4; // 0x8f61c554_0
    int32_t v6 = *(int32_t *)((int32_t)&g7 + 20); // 0x8f61c558
    v4 = *(int32_t *)((int32_t)&g7 + 16);
    int32_t v7 = *(int32_t *)((int32_t)&g7 + 32); // 0x8f61c560
    int32_t v8 = *(int32_t *)((int32_t)&g7 + 36); // 0x8f61c560
    int32_t v9 = *(int32_t *)((int32_t)&g7 + 40); // 0x8f61c560
    int32_t v10 = *(int32_t *)((int32_t)&g7 + 44); // 0x8f61c560
    *(int32_t *)(v5 + 16) = v7;
    *(int32_t *)(v5 + 20) = v8;
    *(int32_t *)(v5 + 24) = v9;
    *(int32_t *)(v5 + 28) = v10;
    int32_t v11;
    if (pm8x41_reg_read(v7 & -0x10000 || 261, v8, v9, v10, v11, result, v1, v2, v3, v4, v6) > 11) {
        // if_8f61c57c_0_true
        // branch -> after_if_8f61c57c_0
    }
    // after_if_8f61c57c_0
    g34 = result;
    // 0x8f61c598
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:36:16
