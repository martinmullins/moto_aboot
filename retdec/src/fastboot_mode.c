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

int32_t __utags_protect(int32_t a1, int32_t a2);
int32_t __utags_unprotect(int32_t a1, int32_t a2);
int32_t bd65060_write_reg(int32_t a1, int32_t a2);
int32_t calculate_clock_config(int32_t * a1);
int32_t dbval_check_timer(int32_t a1, int32_t a2);
int32_t dbval_start_timer(int32_t a1, int32_t a2);
int32_t fastboot_mode(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
void function_8f64b108(void);
void function_8f64b154(char * str, int32_t a2, int32_t a3);
int32_t is_factory_mode(void);
int32_t is_qcom_mode(void);
int32_t is_udc_active(void);
int32_t isl98611_read_reg(int32_t a1, int32_t a2);
int32_t max17042_get_temp_thresholds(char * a1, int32_t a2, int32_t a3);
int32_t max17042_is_batt_temp_ok(void);
int32_t mdss_intf_fetch_start_config(int32_t * a1, int32_t a2);
int32_t mdss_layer_mixer_setup(int32_t a1, int32_t a2);
int32_t mmc_get_wp_group_size(int32_t a1);
char * mmc_get_wp_status(char * a1, int32_t a2, int32_t a3);
int32_t oem_bd65060(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_ldo_control(int32_t a1, int32_t a2);
int32_t pm8x41_ldo_set_voltage(char * a1, int32_t a2, int32_t a3);
int32_t qcom_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t register_msm_gpio_int_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t spmi_enable_periph_interrupts(int32_t a1, int32_t a2, int32_t a3);
int32_t spmi_irq(int32_t a1, int32_t a2);
int32_t udc_request_alloc(void);
int32_t udc_request_free(char * a1, int32_t a2, int32_t a3);
int32_t udc_stop(int32_t a1, int32_t a2);
int32_t unregister_msm_gpio_int_handler(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g44 = 0; // R0
int32_t g45 = 0; // R1
int32_t g46 = 0; // R2
int32_t g47 = 0; // R4
int32_t g48 = 0; // R5
int32_t g49 = 0; // R6
int32_t g50 = 0; // R7
int32_t g51 = 0; // R8
int32_t g1 = -0x1a60cf8c; // 0x8f612158
int32_t g2 = -0x1a60cf78; // 0x8f61d5f8
char * g3; // 0x8f61de60
int32_t g4 = -0x16d2bc09; // 0x8f638ab0
int32_t g5 = 1; // 0x8f6ac0f0
char * g6 = "\n"; // 0x8f6ac1b0
char * g7 = "\x01"; // 0x8f6ac1b4
int32_t g8 = 768; // 0x8f6acab3
char * g9 = "\x03"; // 0x8f6acab4
int32_t g10 = 0; // 0x8f6b505c
int32_t g11 = 0; // 0x8f6b5060
int32_t g12 = 0; // 0x8f6b792c
int32_t g13 = 0; // 0x8f6b794c
int32_t g14 = 0; // 0x8f6b8b00
int32_t g15 = 0; // 0x8f6c02e8
int32_t g16 = 0; // 0x8f6c02ec
int32_t g17 = 0; // 0x8f6e0a94
int32_t g18 = 0; // 0x8f6e0ab0
int32_t g19 = 0; // 0x8f6e0ab8
int32_t g20 = 0; // 0x8f6e0abc
int32_t g21 = 0; // 0x8f6e0ac0
int32_t g22 = 0; // 0x8f6e0ac4
int32_t g23 = 0; // 0x8f6e0acc
char g24 = 0; // 0x8f6e0acd
char g25 = 0; // 0x8f6e0ace
int32_t g26 = 0; // 0x8f6e0acf
int32_t g27 = 0; // 0x8f6e0ad0
int32_t g28 = 0; // 0x8f6e0ad1
int32_t g29 = 0; // 0x8f6e0ad4
int32_t g30 = 0; // 0x8f6e0ad8
int32_t g31 = 0; // 0x8f6e0adc
int32_t g32 = 0; // 0x8f6e0ae0
int32_t g33 = 0; // 0x8f6e0ae1
int32_t g34 = 0; // 0x8f6e0ae2
int32_t g35 = 0; // 0x8f6e0ae3
int32_t g36 = 0; // 0x8f6e0ae8
char * g37; // 0x8f6e0aec
int32_t g38 = 0; // 0x8f6e0b38
int32_t g39 = 0; // 0x8f6e0b40
int32_t g40 = 0; // 0x8f70dab0
int32_t g41 = 0; // 0x8f7112f4
int32_t g42 = 0; // 0x8f7114b4
int32_t g43 = 0; // 0x8f7114b8

// ------------------------ Functions -------------------------

// Address range: 0x8f61dca0 - 0x8f61de63
int32_t fastboot_mode(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = (int32_t)a1; // 0x8f61dca0_0
    int32_t result = g41;
    print_log(1, (int32_t)"Entering fastboot mode\n", a3, result, v1, a2, a3, result, g47, g48, g49, 0, a5);
    int32_t v2 = print_log(6, (int32_t)"Fastboot Reason: %s", (int32_t)&g16, result, v1, a2, a3, result, g47, g48, g49, 0, a5); // 0x8f61dccc
    int32_t v3 = sod_ramdump_pending_pull(v2, (int32_t)"Fastboot Reason: %s", (int32_t)&g16, result, v1, a2); // 0x8f61dcd0
    if (v3 != 0) {
        // 0x8f61dcdc
        print_log(6, (int32_t)"New RAM dump available", (int32_t)&g16, result, v1, a2, a3, result, g47, g48, g49, 0, a5);
        print_log(6, (int32_t)"  (see 'fastboot oem ramdump')", (int32_t)&g16, result, v1, a2, a3, result, g47, g48, g49, 0, a5);
        // branch -> 0x8f61dcf4
    }
    int32_t v4 = 0; // R4
    *(char *)&g6 = 6;
    *(char *)&g7 = 0;
    event_init((int32_t)&g43, 0, 1, (int32_t)&g7);
    int32_t v5 = &g2; // R1
    int32_t v6 = thread_create((int32_t)"boot_handler", (int32_t)&g2, v4, 16, 0x2000, a2, a3, result, g47, g48, g49, 0, a5, a6, 0, 0); // 0x8f61dd34
    int32_t v7 = &g15; // R2
    g15 = v6;
    int32_t v8;
    if (v6 == v4) {
        // 0x8f61dd48
        v5 = (int32_t)"%s: boot_handler thread_create fail\n";
        v7 = (int32_t)"fastboot_mode";
        v8 = print_log(-1, (int32_t)"%s: boot_handler thread_create fail\n", (int32_t)"fastboot_mode", 16, 0x2000, a2, a3, result, g47, g48, g49, 0, a5);
        // branch -> 0x8f61dd60
    } else {
        int32_t v9 = thread_resume(v6, v5, (int32_t)&g15, 16, 0x2000, a2, a3, result); // 0x8f61dd5c
        v8 = v9;
        // branch -> 0x8f61dd60
    }
    // 0x8f61dd60
    cid_init(init_barcodes(v8, v5, v7, 16, 0x2000, a2), v5, v7, 16, 0x2000, a2, a3, result, g47, g48);
    int32_t v10 = disable_cont_splash_screen(50, v5, backlight_set_brightness_level(50, v5)); // 0x8f61dd74
    v5 = 1;
    int32_t v11 = &g4; // R3
    show((int32_t)"fastboot_screen", 1, v10, (int32_t)&g4, 0x2000, a2, a3, result, g47, g48, g49, 0, a5, a6, 0);
    int32_t v12 = fastboot_usb_udc_device_setup(g42, v5, v10, v11); // 0x8f61dd90
    v7 = v12;
    int32_t v13 = udc_init(g42, v5, v12, v11, 0x2000, a2, a3, result, g47, g48, g49, 0); // 0x8f61dd98
    int32_t v14 = v13; // 0x8f61ddd4
    if (v13 == -1) {
        // 0x8f61dda4
        v5 = (int32_t)"udc_init FAILURE: System Reboot !!!\n";
        int32_t v15 = print_log(-1, (int32_t)"udc_init FAILURE: System Reboot !!!\n", v7, v11, 0x2000, a2, a3, result, g47, g48, g49, 0, a5); // 0x8f61dda8
        v7 = &g5;
        int32_t v16 = g5;
        int32_t v17 = v16 + 1; // 0x8f61ddb4
        v11 = v17;
        g5 = v17;
        int32_t v18 = &g5; // 0x8f61ddc8
        int32_t v19 = v15; // 0x8f61ddc8
        if (v16 == 0) {
            // 0x8f61ddc4
            v17 = v11;
            v18 = v7;
            v19 = function_8f619448(v15);
            // branch -> 0x8f61ddc8
        }
        // 0x8f61ddc8
        platform_uninit((char *)v19, v5, v18, v17);
        v14 = reboot_device(g3, v5, v7, v11, 0x2000, a2, a3, result, g47, g48);
        // branch -> 0x8f61ddd4
    }
    int32_t v20 = target_get_scratch_address(target_fastboot_init(v14, v5, v7, v11), v5); // 0x8f61ddd8
    int32_t v21 = target_get_max_flash_size(v20, v5, v7, v11); // 0x8f61dde0
    int32_t v22 = start_usb_detection(fastboot_init(v20, v21, v7, v11, 0x2000, a2, a3, result, g47), v21, v7, v11); // 0x8f61ddf0
    if (result == g41) {
        // 0x8f61de08
        udc_start(v22, v21, result, result, g47, g48, g49, 0, a5, a6);
        return result;
    }
    // 0x8f61de04
    __stack_chk_fail();
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:14:28
