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

int32_t __utag_read(char * a1, int32_t a2, char * a3, int32_t a4);
int32_t __utag_write(char * a1, int32_t a2, char * a3, int32_t size);
void function_8f64b05c(void);
void function_8f64b0ac(int32_t a1, int32_t a2);
int32_t get_current_panel(void);
int32_t gfx_flush(int32_t * a1, int32_t a2, int32_t a3);
int32_t gfx_putpixel(int32_t a1, uint32_t a2, uint32_t a3);
int32_t handle_fboot_oem_command_write_protect_test(int32_t a1, int32_t a2);
int32_t is_gpt_initialized(int32_t a1);
int32_t is_usb_connected(int32_t a1, int32_t a2);
int32_t kpdpwr_n_irq_handler(int32_t a1, int32_t a2);
int32_t max17058_get_battery_capacity(int32_t a1, int32_t a2);
int32_t max17058_get_temp_thresholds(char * a1, int32_t a2, int32_t a3);
int32_t mp_mont_prod(int32_t * a1, int32_t result, int32_t a3, int32_t a4);
int32_t mp_mont_reduce(int32_t * a1, int32_t a2, int32_t a3);
int32_t pm8x41_ldo_get(int32_t a1, int32_t a2);
int32_t pm8x41_ldo_set_voltage(char * a1, int32_t a2, int32_t a3);
int32_t register_int_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t send_usb_status_command(char a1, int32_t a2, int32_t a3, int32_t a4);
int32_t set_current_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t speedo_delete(int32_t a1, int32_t a2);
int32_t speedo_start(int32_t a1, int32_t a2, int32_t a3);
int32_t target_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t target_get_reset_status(char * a1, int32_t a2, int32_t a3);
int32_t thread_unblock_from_wait_queue(int32_t a1, int32_t a2, int32_t a3);
int32_t uninit_gpt(char * a1, int32_t a2);
int32_t unmask_interrupt(int32_t a1, int32_t a2, int32_t a3);
int32_t update_usb_status(int32_t a1, int32_t a2, int32_t a3);
int32_t wait_queue_timeout_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t write_protect_enabled_on_eng_hw(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g21 = 0; // LR
int32_t g22 = 0; // R0
int32_t g23 = 0; // R1
int32_t g24 = 0; // R10
int32_t g25 = 0; // R11
int32_t g26 = 0; // R12
int32_t g27 = 0; // R2
int32_t g28 = 0; // R3
int32_t g29 = 0; // R4
int32_t g30 = 0; // R5
int32_t g31 = 0; // R6
int32_t g32 = 0; // R7
int32_t g33 = 0; // R8
int32_t g34 = 0; // R9
int32_t g1 = 0x746e6300; // 0x8f6a4e20
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = 0xffff; // 0x8f6ac218
int32_t g4 = 1; // 0x8f6afd7c
char * g5; // 0x8f6e06b0
int32_t g6 = 0; // 0x8f6e06b4
int32_t g7 = 0; // 0x8f6e0718
int32_t g8 = 0; // 0x8f6e071c
int32_t g9 = 0; // 0x8f6e0748
int32_t g10 = 0; // 0x8f6e0764
int32_t g11 = 0; // 0x8f6e0b4c
int32_t g12 = 0; // 0x8f6e0b5c
int32_t g13 = 0; // 0x8f6e1310
char * g14; // 0x8f6e131c
char * g15; // 0x8f6e1400
char * g16; // 0x8f6e9400
int32_t g17 = 0; // 0x8f710e80
int32_t g18 = 0; // 0x8f7112f4
int32_t g19 = 0; // 0x8f711550
int32_t g20 = 0; // 0x8f711554

// ------------------------ Functions -------------------------

// Address range: 0x8f645994 - 0x8f6459fb
int32_t pm8x41_ldo_get(int32_t a1, int32_t a2) {
    int32_t v1 = 0; // 0x8f6459c8
    // branch -> 0x8f6459b8
    while (true) {
        int32_t result = v1 + (int32_t)&g4; // 0x8f6459b8
        g22 = result;
        int32_t v2 = *(int32_t *)(v1 + (int32_t)&g4 + 4); // 0x8f6459bc
        if (v2 == 256 * a1 + 0x13f00) {
            // 0x8f6459ec
            return result;
        }
        int32_t v3 = v1 + 8; // 0x8f6459c8
        if (v3 == 96) {
            // break -> 0x8f6459d4
            break;
        }
        v1 = v3;
        // continue -> 0x8f6459b8
    }
    // 0x8f6459d4
    g22 = 0;
    // branch -> 0x8f6459ec
    // 0x8f6459ec
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:31:13
