//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t set_ldo(int32_t * a1, int32_t a2);
int32_t set_lvs(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g2 = 0; // R4
int32_t g3 = 0; // R5
int32_t g4 = 0; // R6
int32_t g1 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f617d98 - 0x8f617ef7
int32_t set_ldo(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = (bool)false ? (int32_t)&g1 : 0; // 0x8f617d98
    int32_t v3 = 0; // 0x8f617d98
    int32_t v4 = (int32_t)"set"; // R2
    int32_t v5 = g1;
    int32_t v6 = (int32_t)"set"; // 0x8f617dd0
    if (a2 != 0) {
        // if_8f617dc8_0_true
        v4 = (int32_t)"clear";
        v6 = (int32_t)"clear";
        // branch -> after_if_8f617dc8_0
    }
    int32_t v7 = *a1; // 0x8f617dcc
    int32_t v8;
    print_log(2, (int32_t)"%s ldo: %d\n", v6, v7, v1, v5, g2, g3, g4, v2, v3, 0, v8);
    int32_t v9 = *(int32_t *)v1; // 0x8f617dd4
    int32_t result = pm8x41_ldo_get(v9, (int32_t)"%s ldo: %d\n", v4, v7); // 0x8f617dd8
    if (result == 0) {
        // 0x8f617de4
        if (v5 == g1) {
            // 0x8f617df4
            return print_log(-1, (int32_t)"%s: invalid LDO\n", (int32_t)"set_ldo", v5, g2, g3, g4, v2, v3, 0, v8, 0, 0);
        }
        // 0x8f617ed4
        __stack_chk_fail();
        // branch -> 0x8f617ed8
        // 0x8f617ed8
        return result;
    }
    uint32_t v10 = *(int32_t *)(v1 + 8); // 0x8f617e0c
    uint32_t v11 = v10 - 1; // 0x8f617e10
    if (v11 > 8) {
        // 0x8f617e24
        if (v10 >= 10) {
            // 0x8f617e2c
            thread_sleep(v10, (int32_t)"%s ldo: %d\n", v4, v11, v1, v5, g2, g3);
            // branch -> 0x8f617e30
        }
    } else {
        // 0x8f617e1c
        mdelay(v10, (int32_t)"%s ldo: %d\n", v4, v11);
        // branch -> 0x8f617e30
    }
    // 0x8f617e30
    if (a2 == 0) {
        int32_t v12 = *(int32_t *)(v1 + 4); // 0x8f617e3c
        pm8x41_ldo_set_voltage(result, v12, v4, v11, v1, v5, g2, g3, g4, v2, v3);
        // branch -> 0x8f617e44
    }
    int32_t v13 = a2 ^ 1; // 0x8f617e48
    pm8x41_ldo_control(result, v13, v4, v11);
    int32_t result2 = *(int32_t *)(v1 + 12); // 0x8f617e50
    uint32_t v14 = result2 - 1; // 0x8f617e54
    if (v14 <= 8) {
        // 0x8f617e60
        return mdelay(result2, v13, v4, v14);
    }
    // 0x8f617e68
    if (result2 >= 10) {
        // 0x8f617e70
        return thread_sleep(result2, v13, v4, v14, v1, v5, g2, g3);
    }
    int32_t v15 = *(int32_t *)(v1 + 16); // 0x8f617e74
    if (v15 == 1) {
        // 0x8f617e84
        if (v5 == g1) {
            // 0x8f617e90
            return set_gpio(v1 + 20, a2, v5, v5, g2, g3, g4, v2, v3);
        }
        // 0x8f617ed4
        __stack_chk_fail();
        // branch -> 0x8f617ed8
        // 0x8f617ed8
        return result2;
    }
    int32_t v16 = g1;
    if (v15 == 2) {
        // 0x8f617eb0
        if (v5 == v16) {
            // 0x8f617eb8
            return set_pmic_gpio(v1 + 20, a2, v5, v5, g2, g3, g4, v2, v3, 0, v8);
        }
    } else {
        // 0x8f617ecc
        if (v5 == v16) {
            // 0x8f617ed8
            return result2;
        }
    }
    // 0x8f617ed4
    __stack_chk_fail();
    // branch -> 0x8f617ed8
    // 0x8f617ed8
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 2
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 07:49:59
