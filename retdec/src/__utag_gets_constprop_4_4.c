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

// Address range: 0x8f61caf4 - 0x8f61cc93
int32_t __utag_gets_constprop_4_4(char * a1, int32_t a2, int32_t a3) {
    // 0x8f61caf4
    int32_t v1;
    int32_t str = v1; // bp-68
    int32_t str2 = (int32_t)a1; // 0x8f61caf4_0
    int32_t v2 = g38; // 0x8f61caf4
    int32_t v3 = g39; // 0x8f61caf4
    g39 = a2;
    g35 = str2;
    int32_t v4 = g30;
    g37 = v4;
    int32_t v5;
    uint32_t v6 = __utag_sizeof(NULL, str2, a3, v4, v5, v1, 0, 0, 0); // 0x8f61cb1c
    g38 = v6;
    int32_t v7;
    if (v6 == 0) {
        // after_if_8f61cb34_0.thread
        // branch -> 0x8f61cc48
        // 0x8f61cc48
        if (v6 > a3) {
            // 0x8f61cc50
            g35 = (int32_t)"!!! Cannot get utag %s: payload overflow\n";
            // branch -> 0x8f61cc04
            // 0x8f61cc04
            print_log(-1, (int32_t)"!!! Cannot get utag %s: payload overflow\n", str2, g37, v5, v1, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f61cc60
        }
        // 0x8f61cc60
        g36 = v4;
        v7 = g30;
        g37 = v7;
        if (v4 != v7) {
            // 0x8f61cc70
            __stack_chk_fail();
            // branch -> 0x8f61cc74
        }
        // 0x8f61cc74
        g38 = v2;
        g39 = v3;
        return 0;
    }
    // after_if_8f61cb34_0
    if (v6 > a3) {
        // 0x8f61cc48
        if (v6 > a3) {
            // 0x8f61cc50
            g35 = (int32_t)"!!! Cannot get utag %s: payload overflow\n";
            // branch -> 0x8f61cc04
            // 0x8f61cc04
            print_log(-1, (int32_t)"!!! Cannot get utag %s: payload overflow\n", str2, g37, v5, v1, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f61cc60
        }
        // 0x8f61cc60
        g36 = v4;
        v7 = g30;
        g37 = v7;
        if (v4 != v7) {
            // 0x8f61cc70
            __stack_chk_fail();
            // branch -> 0x8f61cc74
        }
        // 0x8f61cc74
        g38 = v2;
        g39 = v3;
        return 0;
    }
    // 0x8f61cb40
    g35 = str2;
    if (__utag_read(NULL, str2, g39, v6, v5, v1, 0, 0, 0, 0, 0, 0, 0) == 0) {
        // 0x8f61cc60
        g36 = v4;
        v7 = g30;
        g37 = v7;
        if (v4 != v7) {
            // 0x8f61cc70
            __stack_chk_fail();
            // branch -> 0x8f61cc74
        }
        // 0x8f61cc74
        g38 = v2;
        g39 = v3;
        return 0;
    }
    int32_t v8 = g39 + g38; // 0x8f61cb5c
    int32_t v9; // 0x8f61cb84_0
    char * found_char_pos; // 0x8f61cb9c
    int32_t v10; // 0x8f61cba8
    char * found_char_pos2; // 0x8f61cbdc
    int32_t v11; // 0x8f61cbe8
    int32_t v12; // 0x8f61cbf4
    int32_t v13; // 0x8f61cc20
    int32_t result;
    int32_t v14; // 0x8f61cbec
    if (*(char *)(v8 - 1) == 0) {
        // 0x8f61cb7c
        v9 = &str;
        strncpy((char *)&str, (char *)str2, 31);
        found_char_pos = strrchr((char *)&str, 58);
        v10 = type_atoi_3((char *)((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos), 58, 31);
        v14 = v10;
        if (v10 == 0) {
            // 0x8f61cbb4
            strlcat(v9, (int32_t)&g17, 31, g37, v5, str, 0, 0, 0, 0, 0, 0);
            strlcat(v9, (int32_t)"str", 31, g37, v5, str, 0, 0, 0, 0, 0, 0);
            found_char_pos2 = strrchr((char *)&str, 58);
            v11 = type_atoi_3((char *)((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2), 58, 31);
            v14 = v11;
            // branch -> 0x8f61cbec
        }
        // 0x8f61cbec
        if (v14 == 255) {
            // 0x8f61cbf4
            v12 = type_itoa(255, g35, g36);
            g35 = (int32_t)"Error: not a string type: %s\n";
            // branch -> 0x8f61cc04
            // 0x8f61cc04
            print_log(-1, (int32_t)"Error: not a string type: %s\n", v12, g37, v5, str, 0, 0, 0, 0, 0, 0, 0);
            // branch -> 0x8f61cc60
            // 0x8f61cc60
            g36 = v4;
            v7 = g30;
            g37 = v7;
            if (v4 != v7) {
                // 0x8f61cc70
                __stack_chk_fail();
                // branch -> 0x8f61cc74
            }
            // 0x8f61cc74
            g38 = v2;
            g39 = v3;
            return 0;
        }
        // 0x8f61cc10
        g35 = v9;
        v13 = __utag_validate(NULL, v9, g39, g38, v5, str, 0, 0, 0, 0, 0, 0, 0, v4);
        if (v13 == 0) {
            // 0x8f61cc30
            g35 = (int32_t)"!!! utag_validation FAIL for %s:%s\n";
            print_log(-1, (int32_t)"!!! utag_validation FAIL for %s:%s\n", str2, g39, v5, str, 0, 0, 0, 0, 0, 0, 0);
            result = 0;
            // branch -> 0x8f61cc60
        } else {
            // if_8f61cc28_0_true
            result = g39;
            // branch -> 0x8f61cc60
        }
        // 0x8f61cc60
        g36 = v4;
        v7 = g30;
        g37 = v7;
        if (v4 != v7) {
            // 0x8f61cc70
            __stack_chk_fail();
            // branch -> 0x8f61cc74
        }
        // 0x8f61cc74
        g38 = v2;
        g39 = v3;
        return result;
    }
    // 0x8f61cb6c
    if (g38 == a3) {
        // 0x8f61cc60
        g36 = v4;
        v7 = g30;
        g37 = v7;
        if (v4 != v7) {
            // 0x8f61cc70
            __stack_chk_fail();
            // branch -> 0x8f61cc74
        }
        // 0x8f61cc74
        g38 = v2;
        g39 = v3;
        return 0;
    }
    // if_8f61cb70_0_true
    *(char *)v8 = 0;
    // branch -> 0x8f61cb7c
    // 0x8f61cb7c
    v9 = &str;
    strncpy((char *)&str, (char *)str2, 31);
    found_char_pos = strrchr((char *)&str, 58);
    v10 = type_atoi_3((char *)((int32_t)(found_char_pos != NULL) + (int32_t)found_char_pos), 58, 31);
    v14 = v10;
    if (v10 == 0) {
        // 0x8f61cbb4
        strlcat(v9, (int32_t)&g17, 31, g37, v5, str, 0, 0, 0, 0, 0, 0);
        strlcat(v9, (int32_t)"str", 31, g37, v5, str, 0, 0, 0, 0, 0, 0);
        found_char_pos2 = strrchr((char *)&str, 58);
        v11 = type_atoi_3((char *)((int32_t)(found_char_pos2 != NULL) + (int32_t)found_char_pos2), 58, 31);
        v14 = v11;
        // branch -> 0x8f61cbec
    }
    // 0x8f61cbec
    if (v14 == 255) {
        // 0x8f61cbf4
        v12 = type_itoa(255, g35, g36);
        g35 = (int32_t)"Error: not a string type: %s\n";
        // branch -> 0x8f61cc04
        // 0x8f61cc04
        print_log(-1, (int32_t)"Error: not a string type: %s\n", v12, g37, v5, str, 0, 0, 0, 0, 0, 0, 0);
        // branch -> 0x8f61cc60
        // 0x8f61cc60
        g36 = v4;
        v7 = g30;
        g37 = v7;
        if (v4 != v7) {
            // 0x8f61cc70
            __stack_chk_fail();
            // branch -> 0x8f61cc74
        }
        // 0x8f61cc74
        g38 = v2;
        g39 = v3;
        return 0;
    }
    // 0x8f61cc10
    g35 = v9;
    v13 = __utag_validate(NULL, v9, g39, g38, v5, str, 0, 0, 0, 0, 0, 0, 0, v4);
    if (v13 == 0) {
        // 0x8f61cc30
        g35 = (int32_t)"!!! utag_validation FAIL for %s:%s\n";
        print_log(-1, (int32_t)"!!! utag_validation FAIL for %s:%s\n", str2, g39, v5, str, 0, 0, 0, 0, 0, 0, 0);
        result = 0;
        // branch -> 0x8f61cc60
    } else {
        // if_8f61cc28_0_true
        result = g39;
        // branch -> 0x8f61cc60
    }
    // 0x8f61cc60
    g36 = v4;
    v7 = g30;
    g37 = v7;
    if (v4 != v7) {
        // 0x8f61cc70
        __stack_chk_fail();
        // branch -> 0x8f61cc74
    }
    // 0x8f61cc74
    g38 = v2;
    g39 = v3;
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
