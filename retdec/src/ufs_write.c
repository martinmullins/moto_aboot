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
#include <time.h>

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int32_t disable_smb1359_irq(int32_t a1);
int32_t display_draw_image(char * str, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t display_draw_logo(char * str, uint32_t a2, uint32_t a3, int32_t a4);
void function_8f67872c(void);
void function_8f6787c8(struct tm * tm, int32_t a2, int32_t a3);
int32_t get_last_powerup_reason(char * a1, int32_t a2, int32_t a3);
int32_t get_lcd_bias_setting(int32_t a1, int32_t * a2);
int32_t get_panel_ver(int32_t a1, int32_t * a2);
int32_t get_powerup_reason_string(char * a1, int32_t a2);
int32_t get_srk_name(char * a1, int32_t a2);
int32_t getvar_kernel_ver(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_version_baseband(char * a1, int32_t a2, int32_t a3);
int32_t init_panel_power_list(int32_t a1, int32_t a2);
int32_t init_panels(void);
int32_t is_sufficient_pwr_for_flash(char * a1, int32_t a2);
int32_t mipi_dsi_cmdmode_enable(void);
int32_t mot_sst_is_warranty_void(int32_t a1);
int32_t mot_sst_validate_hash_password(int32_t a1, char * a2);
int32_t pmic_set_iusb_max(void);
int32_t resume_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t scm_call(int32_t a1, int32_t a2, char * a3, int32_t a4, char * a5);
int32_t scm_call_atomic2(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t stop_usb_detection(int32_t a1, int32_t a2);
int32_t thread_sleep(int32_t a1);
int32_t thread_timer_tick(int32_t a1, int32_t a2, int32_t a3);
int32_t tps65132_init(int32_t a1);
int32_t udc_endpoint_free(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_request_alloc(void);
int32_t ufs_read(int32_t a1, int32_t a2, int32_t a3);
int32_t ufs_write(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g28 = 0; // LR
int32_t g29 = 0; // R0
int32_t g30 = 0; // R1
int32_t g31 = 0; // R10
int32_t g32 = 0; // R2
int32_t g33 = 0; // R4
int32_t g34 = 0; // R5
int32_t g35 = 0; // R6
int32_t g36 = 0; // R7
int32_t g37 = 0; // R8
int32_t g38 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f61b264
int32_t g2 = -0x16d2bf09; // 0x8f634ac0
int32_t g3 = -1; // 0x8f6ac0d0
int32_t g4 = -1; // 0x8f6ac0d4
int32_t g5 = -1; // 0x8f6ac0d8
int32_t g6 = 1; // 0x8f6ac0f0
int32_t g7 = -1; // 0x8f6ac214
int32_t g8 = 2; // 0x8f6afe0c
int32_t g9 = 0; // 0x8f6b015c
int32_t g10 = 0; // 0x8f6b1608
char * g11; // 0x8f6b8c84
int32_t g12 = 0; // 0x8f6b8c88
int32_t g13 = 0; // 0x8f6b8c94
int32_t g14 = 0; // 0x8f6e07a8
int32_t g15 = 0; // 0x8f6e0bd8
int32_t g16 = 0; // 0x8f6e0bdc
int32_t g17 = 0; // 0x8f6e0be0
int32_t g18 = 0; // 0x8f6e0c38
int32_t g19 = 0; // 0x8f6e0c3c
char * g20; // 0x8f6e0c40
char * g21; // 0x8f710eb4
int32_t g22 = 0; // 0x8f7112f4
char * g23; // 0x8f7112fc
char * g24; // 0x8f711374
char * g25; // 0x8f7113ec
int32_t g26 = 0; // 0x8f7114a8
int32_t g27 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f60b4c0 - 0x8f60b4f3
int32_t ufs_write(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f60b4c0
    g29 = 0;
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * asctime_r(const struct tm * restrict tp, char * restrict buf);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:51:12
