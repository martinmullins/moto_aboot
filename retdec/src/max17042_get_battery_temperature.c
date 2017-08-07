//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int8_t int4_t;

// ------------------- Function Prototypes --------------------

int32_t __utag_defined(int32_t a1, int32_t a2);
int32_t __utag_exists(int32_t a1, int32_t a2);
int32_t bootstrap2(int32_t a1, int32_t a2);
int32_t clock_config_cdc(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_pal_cid_get_secondary_serial_num_type(char * a1, int32_t a2, int32_t a3);
int32_t dbval_pal_cid_get_secondary_serial_number(int32_t a1, int32_t a2);
void event_unsignal(int32_t a1);
int32_t fboot_oem_init(void);
int32_t fboot_usb_write_queue(int32_t a1, uint32_t a2, int32_t a3);
int32_t fboot_usb_write_wait(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_code_hash_verification(int32_t a1, int32_t a2, char * str);
int32_t hab_publickey_verification(int32_t a1, int32_t a2, char * a3);
int32_t handle_fboot_command_oem(int32_t a1, int32_t a2);
int32_t heap_free(void);
int32_t heap_realloc(char * a1);
int32_t is_charging_enabled(int32_t a1, int32_t a2, int32_t a3);
int32_t max17042_get_battery_temperature(void);
int32_t max17050_get_battery_capacity(int32_t a1, int32_t a2);
int32_t platform_boot_dev_isemmc(int32_t a1, int32_t a2, int32_t a3);
int32_t pmic_arb_write_cmd(char * a1);
int32_t pmic_charger_cleanup(int32_t a1, int32_t a2);
int32_t register_spmi_int_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sod_ramdump_set_test_cookie(int32_t a1, int32_t a2);
int32_t sod_share(char * a1, int32_t a2, int32_t a3);
int32_t spmi_acc_irq(uint32_t a1, int32_t a2, int32_t result2, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t spmi_init(int32_t a1, int32_t a2, int32_t a3);
int32_t unregister_spmi_int_handler(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

bool g27 = false; // LR
int32_t g28 = 0; // R0
int32_t g29 = 0; // R1
int32_t g30 = 0; // R2
int32_t g31 = 0; // R3
int32_t g32 = 0; // R4
int32_t g33 = 0; // R5
int32_t g34 = 0; // R6
int32_t g35 = 0; // R7
int32_t g36 = 0; // R8
int32_t g37 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f626204
int32_t g2 = -0x16d2be0d; // 0x8f627388
int32_t g3 = -0x1a60cf3c; // 0x8f627420
int32_t g4 = -0x1a60cfc4; // 0x8f62d6e8
int32_t g5 = 0x746e6300; // 0x8f6a4e20
int32_t g6 = 0x10100; // 0x8f6a9f58
int32_t g7 = 0x10100; // 0x8f6a9f64
int32_t g8 = 0x7ffd14f4; // 0x8f6aa114
int32_t g9 = 1; // 0x8f6ac0f0
int32_t g10 = 0; // 0x8f6b8afc
int32_t g11 = 0; // 0x8f6b8b00
int32_t g12 = 0; // 0x8f6b8b04
int32_t g13 = 0; // 0x8f6b8b08
char * g14; // 0x8f6b8b0c
char * g15; // 0x8f6b8b10
int32_t g16 = 0; // 0x8f6c064c
int32_t g17 = 0; // 0x8f6c0650
int32_t g18 = 0; // 0x8f6c0654
int32_t g19 = 0; // 0x8f6c0658
int32_t g20 = 0; // 0x8f6c0660
int32_t g21 = 0; // 0x8f6c066c
int32_t g22 = 0; // 0x8f6e0b48
char * g23; // 0x8f6e0b60
int32_t g24 = 0; // 0x8f7112f4
int32_t g25 = 0; // 0x8f7129dc
int32_t g26 = 0; // 0x8f712a1c

// ------------------------ Functions -------------------------

// Address range: 0x8f643474 - 0x8f643567
int32_t max17042_get_battery_temperature(void) {
    int32_t v1 = g27 ? -0x709d4b24 : 0; // 0x8f643474
    int32_t v2 = g24;
    int32_t v3 = 0; // bp-30
    if (g22 == 0) {
        // 0x8f64353c
        // branch -> 0x8f643540
        // 0x8f643540
        if (v2 != g24) {
            // 0x8f643550
            __stack_chk_fail();
            // branch -> 0x8f643554
        }
        // 0x8f643554
        return -20;
    }
    // 0x8f6434a0
    qup_i2c_write_word(g22, 54, 29, 532, g28, v2, g30, g32, g33, g34, g35, v1);
    int32_t v4;
    if (g22 <= -1) {
        // 0x8f6434b8
        print_log(-1, (int32_t)"Read MAX17050 error %d\n", g22, 532, g28, v2, g30, g32, g33, g34, g35, v1, v4);
        // branch -> 0x8f643540
        // 0x8f643540
        if (v2 != g24) {
            // 0x8f643550
            __stack_chk_fail();
            // branch -> 0x8f643554
        }
        // 0x8f643554
        return g22;
    }
    int32_t v5 = &v3; // 0x8f6434dc_0
    qup_i2c_read_word(g22, 54, 8, v5, g28, v2, g30, g32, g33, g34, g35, v1, v4, 0, 0);
    int32_t result; // R0
    if (g22 > -1) {
        // 0x8f643504
        result = 0;
        int32_t v6 = 0x10000 * v3; // 0x8f643518
        int32_t v7 = 10 * v6 / 0x10000; // 0x8f643520
        int32_t v8 = v7; // 0x8f643530
        if (v6 < 0) {
            // if_8f64352c_0_true
            v8 = v7 + 255;
            // branch -> after_if_8f64352c_0
        }
        // after_if_8f64352c_0
        *(int16_t *)g28 = (int16_t)(v8 / 256);
        // branch -> 0x8f643540
    } else {
        // 0x8f6434ec
        print_log(-1, (int32_t)"Read MAX17050 error %d\n", g22, v5, g28, v2, g30, g32, g33, g34, g35, v1, v4);
        result = g22;
        // branch -> 0x8f643540
    }
    // 0x8f643540
    if (v2 != g24) {
        // 0x8f643550
        __stack_chk_fail();
        // branch -> 0x8f643554
    }
    // 0x8f643554
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 27
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:33:17
