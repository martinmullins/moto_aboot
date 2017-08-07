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

int32_t __utag_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t __utags_is_protected(int32_t a1, int32_t a2);
int32_t bin2hex(int32_t a1, char * a2, int32_t a3);
int32_t disable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t fastboot_init(int32_t a1, int32_t a2);
int32_t fboot_cmd_boot_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_flash_permission_validate(int32_t a1, int32_t a2);
int32_t get_hw_sku(int32_t a1, int32_t a2, int32_t a3);
int32_t get_product_name(int32_t a1, int32_t a2, int32_t a3);
int32_t get_utags_id(char * str, int32_t a2);
int32_t get_utags_name(int32_t a1, int32_t a2);
int32_t gic_register_int_handler(uint32_t a1);
int32_t gic_unmask_interrupt(uint32_t a1);
int32_t handle_fboot_oem_command_cid_prov_req(int32_t a1, int32_t a2);
int32_t heap_init(int32_t a1, int32_t a2);
int32_t hexval(int32_t a1);
int32_t is_fastboot_busy(int32_t a1, int32_t a2, int32_t a3);
int32_t md5_append(int32_t * a1, char * a2, uint32_t a3);
int32_t md5_init(int32_t * a1, int32_t result, int32_t a3);
int32_t msm_gpio_interrupt(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_led_on(int32_t a1, int32_t a2, int32_t a3);
int32_t pmic_set_chg_set_mode(char a1, int32_t a2, int32_t a3);
int32_t pmic_set_iusb_max(void);
int32_t sod_has_error(int32_t a1, int32_t a2);
int32_t sod_notify(int32_t a1, int32_t a2, int32_t a3);
int32_t spmi_acc_irq(uint32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t spmi_irq(int32_t a1, int32_t a2);
int32_t target_init(int32_t a1, int32_t a2, int32_t a3);
int32_t target_power_up_reason_correction(char * a1, int32_t a2);
int32_t unregister_msm_gpio_int_handler(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

bool g26 = false; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R2
int32_t g30 = 0; // R3
int32_t g31 = 0; // R4
int32_t g32 = 0; // R5
int32_t g33 = 0; // R6
int32_t g34 = 0; // R7
int32_t g35 = 0; // R8
int32_t g36 = 0; // R9
int32_t g1 = -0x1a60cd88; // 0x8f621660
int32_t g2 = 1; // 0x8f6ac0f0
char * g3; // 0x8f6ac1b8
int32_t g4 = -1; // 0x8f6ac1f4
int32_t g5 = -1; // 0x8f6ac214
char * g6[3] = {
    "config",
    "utags",
    "utagsBackup"
}; // 0x8f6b009c
char * g7[2] = {
    "hw",
    "hw"
}; // 0x8f6b00fc
int32_t g8 = 0; // 0x8f6b505c
int32_t g9 = 0; // 0x8f6b5060
int32_t g10 = 0; // 0x8f6b7d48
int32_t g11 = 0; // 0x8f6b8b00
int32_t g12 = 0; // 0x8f6b8b0c
int32_t g13 = 0; // 0x8f6b8b10
int32_t g14 = 0; // 0x8f6c0398
int32_t g15 = 0; // 0x8f6c03d0
int32_t g16 = 0; // 0x8f6c03d8
int32_t g17 = 0; // 0x8f6e0784
char * g18; // 0x8f6e0b60
int32_t g19 = 0; // 0x8f6e0be8
int32_t g20 = 0; // 0x8f6e0bec
int32_t g21 = 0; // 0x8f6e0bf0
int32_t g22 = 0; // 0x8f6e0bf4
int32_t g23 = 0; // 0x8f7112f4
char * g24; // 0x8f7114fc
int32_t g25 = 0; // 0x8f711500

// ------------------------ Functions -------------------------

// Address range: 0x8f6012c8 - 0x8f60145b
int32_t target_power_up_reason_correction(char * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g26 ? -0x709fccd8 : 0; // 0x8f6012c8
    int32_t v3 = g23;
    int32_t result = is_charger_smb1359(v1, a2, g29, v3, v1, v3, g31, g32); // 0x8f6012dc
    if (result == 0) {
        // 0x8f601434
        if (v3 != g23) {
            // 0x8f601444
            __stack_chk_fail();
            // branch -> 0x8f601448
        } else {
            result = 0;
        }
        // 0x8f601448
        return result;
    }
    int32_t result2 = smb1359_get_power_source(result, a2, g29); // 0x8f6012e8
    if (v1 == 0) {
        // 0x8f601434
        if (v3 != g23) {
            // 0x8f601444
            __stack_chk_fail();
            // branch -> 0x8f601448
        }
        // 0x8f601448
        return result2;
    }
    char v4 = *(char *)(v1 + 1); // 0x8f6012f8
    char v5 = *(char *)v1; // 0x8f601300
    char v6 = *(char *)(v1 + 5); // 0x8f601304
    char v7 = *(char *)(v1 + 2); // 0x8f60130c
    char v8 = *(char *)(v1 + 3); // 0x8f601314
    int32_t v9 = 0x1000000 * (int32_t)v8 | 0x10000 * (int32_t)v7 | (int32_t)v5 | 256 * (int32_t)v4; // R8
    char v10 = *(char *)(v1 + 4); // 0x8f60131c
    char v11 = *(char *)(v1 + 6); // 0x8f601324
    int32_t v12 = (int32_t)*(char *)(v1 + 7); // 0x8f60132c
    int32_t v13 = 0x1000000 * v12 | 0x10000 * (int32_t)v11 | (int32_t)v10 | 256 * (int32_t)v6; // R7
    int32_t v14 = smb1359_config_aicl(0, a2, g29, v12, v1); // 0x8f601334
    int32_t result3 = smb1359_is_hvdcp(v14, a2, g29, v12, v1, v3); // 0x8f601338
    if (result3 != 0) {
        // 0x8f601344
        set_accessory_type(9, a2);
        return 9;
    }
    int32_t v15 = (int32_t)*(char *)v1; // 0x8f601358
    int32_t v16;
    if ((v15 & 24 || result2) != 0) {
        // 0x8f60136c
        return print_log(1, (int32_t)"Power source from SMB1359: 0x%02X\n", result2, v15, v1, v3, g31, g32, g33, g34, g35, v2, v16);
    }
    // 0x8f601408
    if (v3 == g23) {
        // 0x8f601418
        return print_log(1, (int32_t)"Power on status updated: 0x%llX\n", v9, v13, g31, g32, g33, g34, g35, v2, v16, 0, 0);
    }
    // 0x8f601444
    __stack_chk_fail();
    // branch -> 0x8f601448
    // 0x8f601448
    return result3;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:29:20
