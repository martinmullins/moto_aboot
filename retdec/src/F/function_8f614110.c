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

int32_t board_platform_id(int32_t a1);
int32_t board_target_id(int32_t a1);
int32_t boot_linux_from_flash(void);
int32_t dev_tree_appended(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t dev_tree_validate(int32_t * a1, int32_t a2);
int32_t display_clear_screen(void);
int32_t display_get_image_location(void);
int32_t dsi_pll_toggle_lock_detect_8916_constprop_5(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fastboot_set_reason(char * a1, int32_t a2, int32_t a3);
char * function_8f613f70(int32_t a1, int32_t a2);
char * function_8f6140f8(void);
int32_t function_8f614110(void);
int32_t function_8f614124(int32_t a1);
int32_t function_8f6141fc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, char * a18, int64_t a19, int32_t a20, char * a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25, int32_t a26);
int32_t function_8f614b04(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_8f614b50(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
void function_8f6786f0(void);
void function_8f67872c(int32_t * a1, char * str);
int32_t get_console_string(int32_t a1, int32_t a2);
int32_t get_controller_drv_ver(void);
int32_t get_device_type(void);
char * get_memtest_params(char * a1, int32_t size);
int32_t get_uart_setting(int32_t * a1);
int32_t gpt_notifier(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_command_continue(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t handle_fboot_oem_command_unlock(int32_t a1, int32_t a2);
int32_t is_factory_reset_protect_locked(void);
int32_t is_stick_to_fastboot_mode(int32_t a1, int32_t a2);
int32_t mipi_mot_get_controller_ver(void);
int32_t smb1359_config_aicl(int32_t a1);
int32_t smb1359_config_fastchg_current(int32_t a1, int32_t a2);
int32_t sod_ramdump_run(void);
int32_t sod_timestamp(int32_t a1, int32_t a2, int32_t a3);
int32_t sparse_fill_value_in_blocks(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t target_ddr_cfg_val(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t target_get_max_flash_size(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mot_hw_id(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g30 = 0; // LR
int32_t g31 = 0; // R0
int32_t g32 = 0; // R1
int32_t g33 = 0; // R10
int32_t g34 = 0; // R11
int32_t g35 = 0; // R12
int32_t g36 = 0; // R2
int32_t g37 = 0; // R3
int32_t g38 = 0; // R4
int32_t g39 = 0; // R5
int32_t g40 = 0; // R6
int32_t g41 = 0; // R7
int32_t g42 = 0; // R8
int32_t g43 = 0; // R9
char * g1; // 0x8f622364
int32_t g2 = -0x16d2bfed; // 0x8f627020
int32_t g3 = -0x15ffffb3; // 0x8f6361f4
int32_t g4 = -0x16d2be0d; // 0x8f6385e0
int32_t g5 = -0x16d2bfc9; // 0x8f6387c0
int32_t g6 = -0x16d2bc09; // 0x8f638ab0
int32_t g7 = 0x7325002f; // 0x8f686fbc
char g8[2] = "0"; // 0x8f69c66f
int32_t g9 = 0x746e6300; // 0x8f6a4e20
int32_t g10 = 0; // 0x8f6ac068
int32_t g11 = 0; // 0x8f6ac07c
char * g12 = "\xff\xff\xff\xff\xe8\xc0\x6a\x8f\xe8\xc0\x6a\x8f\x01"; // 0x8f6ac0e4
int32_t g13 = 1; // 0x8f6ac0f0
char * g14 = "\x01"; // 0x8f6ac1b4
int32_t g15 = -0x70a00000; // 0x8f6ac224
int32_t g16 = 0xffff; // 0x8f6acaec
int32_t g17 = 0xffff; // 0x8f6acb6c
int32_t g18 = 4; // 0x8f6acb74
int32_t g19 = 4; // 0x8f6acb94
char * g20; // 0x8f6c02e4
int32_t g21 = 0; // 0x8f6c0330
int32_t g22 = 0; // 0x8f6c0335
int32_t (*g23)(int32_t, int32_t, int32_t) = NULL; // 0x8f6e0784
int32_t g24 = 0; // 0x8f6e0c34
int32_t g25 = 0; // 0x8f6e0c38
int32_t g26 = 0; // 0x8f6e0c3c
struct tm * g27 = NULL; // 0x8f710e90
int32_t g28 = 0; // 0x8f7112f4
int32_t g29 = 0; // 0x8f7114d4

// ------------------------ Functions -------------------------

// Address range: 0x8f614110 - 0x8f614123
int32_t function_8f614110(void) {
    // 0x8f614110
    print_log(-1, (int32_t)"Tags addresses overlap with aboot addresses.\n", g36, g37, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    g31 = 0;
    return (int32_t)function_8f6140f8();
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * asctime(const struct tm * tp);
// void free(void * ptr);
// struct tm * gmtime(const time_t * timer);
// struct tm * gmtime_r(const time_t * restrict timer, struct tm * restrict tp);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 37
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:35:36
