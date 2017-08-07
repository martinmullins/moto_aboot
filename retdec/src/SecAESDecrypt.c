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

int32_t backlight_set_brightness(int32_t a1, int32_t a2);
int32_t backlight_set_brightness_level(int32_t a1);
int32_t cxo_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t cxo_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t disable_source_detect_irq(void);
int32_t enable_fastchg_irq(int32_t a1);
int32_t fdt32_to_cpu_100(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt_move(char * a1, char * a2, int32_t a3);
int32_t fti_serialno(int32_t a1, int32_t a2, int32_t a3);
int32_t get_default_backup_zone(int32_t a1, int32_t a2);
int32_t halt(int32_t result, int32_t a2, int32_t a3);
int32_t init_gpt(void);
int32_t max17050_get_battery_voltage(int32_t a1, int32_t a2);
int32_t max17050_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t max17058_get_temp_thresholds(char * a1, int32_t a2, int32_t a3);
int32_t max17058_is_batt_temp_ok(void);
int32_t mdss_dsi_phy_contention_detection(int32_t a1, int32_t a2);
int32_t mdss_dsi_phy_init(int32_t a1, int32_t a2, int32_t a3);
int32_t scm_call(int32_t a1, int32_t a2, char * a3, int32_t a4, char * a5);
int32_t scm_call_a32(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t SecAESDecrypt(char * a1, int32_t a2, int32_t a3);
int32_t SecBoundSigAllowed(void);
int32_t SecLockFuse(void);
int32_t SecMakeProduction(int32_t a1, int32_t a2, int32_t a3);
int32_t set_gpt_opts(char * a1, int32_t result, int32_t a3);
int32_t sod_has_error(int32_t a1, int32_t a2);
int32_t sod_update(char * a1, int32_t a2, int32_t a3);
int32_t strings_delete(char * a1, int32_t a2);
int32_t strings_new(int32_t a1, int32_t a2, int32_t a3);
int32_t tps65132_config(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g31 = false; // LR
int32_t g32 = 0; // R0
int32_t g33 = 0; // R1
int32_t g34 = 0; // R10
int32_t g35 = 0; // R11
int32_t g36 = 0; // R2
int32_t g37 = 0; // R4
int32_t g38 = 0; // R5
int32_t g39 = 0; // R6
int32_t g40 = 0; // R7
int32_t g41 = 0; // R8
int32_t g42 = 0; // R9
int32_t g1 = 1; // 0x8f6ac0f0
int32_t g2 = 100; // 0x8f6aca78
int32_t g3 = 768; // 0x8f6acab7
char * g4 = "\x03"; // 0x8f6acab8
int32_t g5 = -0x709adbb4; // 0x8f6afe20
char * g6; // 0x8f6b7c28
int32_t g7 = 0; // 0x8f6b7c48
int32_t g8 = 0; // 0x8f6e0a88
int32_t g9 = 0; // 0x8f6e0b48
int32_t g10 = 0; // 0x8f6e0b4c
int32_t g11 = 0; // 0x8f6e0b54
int32_t g12 = 0; // 0x8f6e0b90
int32_t g13 = 0; // 0x8f6e0bd0
int32_t g14 = 0; // 0x8f6e0bd8
int32_t g15 = 0; // 0x8f6e0bdc
int32_t g16 = 0; // 0x8f6e0be0
char * g17; // 0x8f6e12f4
char * g18; // 0x8f6e12f8
int32_t g19 = 0; // 0x8f6e130c
int32_t g20 = 0; // 0x8f6e1310
int32_t g21 = 0; // 0x8f6e1318
char * g22; // 0x8f6e131c
char * g23; // 0x8f6e1320
char * g24; // 0x8f6e1328
char * g25; // 0x8f6e1400
char g26 = 0; // 0x8f6e15c2
char * g27; // 0x8f6e9600
int32_t g28 = 0; // 0x8f6ed600
int32_t g29 = 0; // 0x8f7112f4
int32_t g30 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f60736c - 0x8f60740b
int32_t SecAESDecrypt(char * a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)a1; // 0x8f60736c_0
    int32_t v2 = g31 ? -0x709c0700 : 0; // 0x8f60736c
    int32_t v3 = &g7; // R5
    int32_t v4 = g29;
    memcpy((char *)&g6, a1, 16);
    int32_t v5 = clock_ce_enable(1, v1, 16, v1, v1, v4, a3); // 0x8f60739c
    int32_t v6;
    char * v7 = mot_tzbsp_call(v5 & -0x10000 | 1014, (int32_t)&g6, (int32_t)&g7, v1, v1, v4, a3, g37, g38, g39, g40, v2, v6); // 0x8f6073ac
    int32_t v8 = (int32_t)v7; // R7
    if (v7 != NULL) {
        // 0x8f6073e4
        if (v4 != g29) {
            // 0x8f6073f4
            __stack_chk_fail();
            // branch -> 0x8f6073f8
        }
        // 0x8f6073f8
        return 16;
    }
    // 0x8f6073bc
    cache_inv_range(v3, 16, (int32_t)&g7, v1);
    *(char *)(a2 + v8) = *(char *)(v3 + v8);
    int32_t v9 = v8 + 1; // 0x8f6073d4
    // branch -> 0x8f6073cc
    while (v9 != 16) {
        // 0x8f6073cc
        v8 = v9;
        *(char *)(a2 + v8) = *(char *)(v3 + v8);
        v9 = v8 + 1;
        // continue -> 0x8f6073cc
    }
    // 0x8f6073e4
    if (v4 != g29) {
        // 0x8f6073f4
        __stack_chk_fail();
        // branch -> 0x8f6073f8
    }
    // 0x8f6073f8
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:59:59
