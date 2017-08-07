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

int32_t __utag_gets_107(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t __utag_sizeof(char * a1, int32_t a2, int32_t a3);
int32_t _dputc(char a1, int32_t a2);
int32_t board_baseband(int32_t a1);
int32_t board_hardware_id(int32_t a1, int32_t a2, int32_t a3);
int32_t boot_linux(int32_t (*a1)(int32_t, int32_t, int32_t), int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t bs_set_timestamp(int32_t a1);
int32_t build_sig_for_all(char * str, int32_t (*a2)(int32_t, int32_t), int32_t a3);
int32_t build_sig_is_uniform(void);
int32_t dev_tree_add_mem_info(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t dev_tree_get_entry_info(int32_t a1, int32_t * a2);
int32_t disable_usbin_valid_irq(int32_t a1);
int32_t do_dead_battery_recovery(int32_t a1, int32_t a2, int32_t a3);
int32_t enable_usbin_valid_irq(int32_t a1, int32_t a2);
void function_8f64aa80(void);
void function_8f64aacc(int32_t a1, int32_t a2, int32_t a3);
void function_8f678528(void);
void function_8f6786f0(int32_t * timep, int32_t a2, int32_t a3);
int32_t get_udc_device(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_ui_coordinates(int32_t a1, int32_t a2);
int32_t init(int32_t a1, int32_t a2, int32_t a3);
int32_t is_fastboot_busy(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_phy_regulator_init(int32_t * a1, int32_t a2);
int32_t mdss_dsi_phy_sw_reset(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t on_confirm_timeout(int32_t a1, int32_t a2, char * a3);
int32_t select_device_tree(int32_t a1, int32_t a2);
int32_t start_charging(int32_t a1);
int32_t stop_charging(int32_t a1, int32_t a2);
int32_t target_platform_id(char * a1, int32_t a2, int32_t a3);
int32_t target_restart_reason_addr(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g58 = 0; // LR
int32_t g59 = 0; // R0
int32_t g60 = 0; // R1
int32_t g61 = 0; // R10
int32_t g62 = 0; // R11
int32_t g63 = 0; // R2
int32_t g64 = 0; // R3
int32_t g65 = 0; // R4
int32_t g66 = 0; // R5
int32_t g67 = 0; // R6
int32_t g68 = 0; // R7
int32_t g69 = 0; // R8
int32_t g70 = 0; // R9
int32_t g1 = -0x1a60cfd8; // 0x8f603944
int32_t g2 = -0x1a60cfd0; // 0x8f603978
int32_t g3 = -0x16d2bfc9; // 0x8f603ad8
int32_t g4 = -0x16d2bfc9; // 0x8f603c64
int32_t g5 = -0x1a60cd10; // 0x8f637e98
int32_t g6 = -0x1a60cf7c; // 0x8f63867c
int32_t g7 = -0x16d2bfc9; // 0x8f6387c0
int32_t (*g8)() = (int32_t (*)())-0x16d2bf8d; // 0x8f64338c
int32_t g9 = -0x16d2bf8d; // 0x8f64385c
int32_t g10 = -0x16d2bf8d; // 0x8f645798
int32_t g11 = -0x16d2bf10; // 0x8f651560
int32_t g12 = 0x2020003a; // 0x8f686ac4
int32_t g13 = 0x65440030; // 0x8f69c66f
char * g14 = "S"; // 0x8f6a4aed
char * g15; // 0x8f6a4e20
int32_t g16 = 31; // 0x8f6a9020
int32_t g17 = 365; // 0x8f6a9080
char * g18 = "\x01"; // 0x8f6ab02c
int32_t g19 = 0x1000; // 0x8f6ab03c
int32_t g20 = 0; // 0x8f6ab040
int32_t g21 = 0; // 0x8f6ab044
int32_t g22 = 0; // 0x8f6ab048
int32_t g23 = 0x2e8022b8; // 0x8f6ac050
char * g24; // 0x8f6ac05c
int32_t g25 = 0; // 0x8f6ac074
int32_t g26 = 0; // 0x8f6ac080
int32_t g27 = -1; // 0x8f6ac0c0
int32_t g28 = 1; // 0x8f6ac0f0
int32_t g29 = 1; // 0x8f6afe1c
int32_t g30 = 0; // 0x8f6b5064
int32_t g31 = 0; // 0x8f6b5080
char * g32; // 0x8f6b509c
int32_t g33 = 0; // 0x8f6b50a0
int32_t g34 = 0; // 0x8f6b7950
char * g35; // 0x8f6b7954
int32_t g36 = 0; // 0x8f6b8bdc
int32_t g37 = 0; // 0x8f6b8be0
int32_t g38 = 0; // 0x8f6b8be4
int32_t g39 = 0; // 0x8f6b8be8
int32_t g40 = 0; // 0x8f6b8bec
int32_t g41 = 0; // 0x8f6c0398
int32_t g42 = 0; // 0x8f6c03d0
int32_t g43 = 0; // 0x8f6e07ac
int32_t g44 = 0; // 0x8f6e07cc
int32_t g45 = 0; // 0x8f6e07e8
int32_t g46 = 0; // 0x8f6e07ec
int32_t g47 = 0; // 0x8f6e07f4
int32_t g48 = 0; // 0x8f6e0808
int32_t g49 = 0; // 0x8f6e080c
char * g50; // 0x8f6e0848
char * g51; // 0x8f6e1000
char * g52; // 0x8f6e1200
int32_t g53 = 0; // 0x8f6e1228
int32_t g54 = 0; // 0x8f6e12dc
int32_t g55 = 0; // 0x8f6e12e0
struct tm * g56 = NULL; // 0x8f710e90
int32_t g57 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6381d8 - 0x8f6382ff
int32_t start_charging(int32_t a1) {
    int32_t v1 = g57;
    if (is_charging_enabled(a1, g60, g63, v1) == 0) {
        int32_t result = is_factory_cable(0); // 0x8f638200
        if (result == 0) {
            // 0x8f63820c
            int32_t v2;
            enable_charger_gone_irq(0, g60, g63, v1, v2);
            g45 = a1;
            int32_t v3 = g48;
            if (v3 != 0) {
                // 0x8f6382a8
                event_signal((int32_t)&g44, 1, g63, (int32_t)&g45, v2, 0, 0, v1);
                // branch -> 0x8f6382b8
                // 0x8f6382b8
                if (v1 != g57) {
                    // 0x8f6382c8
                    __stack_chk_fail();
                    // branch -> 0x8f6382cc
                }
                // 0x8f6382cc
                return result;
            }
            // 0x8f638228
            event_init((int32_t)&g46, 0, 1, (int32_t)&g45);
            event_init((int32_t)&g44, 1, 1, (int32_t)&g45);
            event_init((int32_t)&g43, v3, 1, (int32_t)&g45);
            timer_initialize((int32_t)&g49, v3, 1, (int32_t)&g45);
            int32_t v4;
            int32_t v5 = thread_create((int32_t)"usb_charging_thread", (int32_t)&g5, v3, 16, 0x1000, 0, 0, v1, 0, g65, g66, g67, g68, g58, v4, 0); // 0x8f638278
            *(int32_t *)(int32_t)&g48 = v5;
            int32_t v6; // R0
            int32_t v7; // 0x8f6382d0_22
            if (v5 == 0) {
                // 0x8f638288
                print_log(0, (int32_t)"%s: usb_charging  thread_create fail\n", (int32_t)"start_charging", 16, 0x1000, 0, 0, v1, 0, g65, g66, g67, g68);
                // branch -> 0x8f638294
                // 0x8f638294
                v6 = -1;
                v7 = -1;
                // branch -> 0x8f6382b8
            } else {
                // 0x8f63829c
                thread_resume(v5, (int32_t)&g5, v3, 16, 0x1000, 0, 0, v1);
                v6 = v3;
                v7 = v3;
                // branch -> 0x8f6382b8
            }
            // 0x8f6382b8
            int32_t result2; // 0x8f6382d0_2
            if (v1 != g57) {
                // 0x8f6382c8
                __stack_chk_fail();
                result2 = v6;
                // branch -> 0x8f6382cc
            } else {
                result2 = v7;
            }
            // 0x8f6382cc
            return result2;
        }
    }
    // 0x8f638294
    // branch -> 0x8f6382b8
    // 0x8f6382b8
    if (v1 != g57) {
        // 0x8f6382c8
        __stack_chk_fail();
        // branch -> 0x8f6382cc
    }
    // 0x8f6382cc
    return -1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// struct tm * gmtime_r(const time_t * restrict timer, struct tm * restrict tp);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// int vsprintf(char * restrict s, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:51:25
