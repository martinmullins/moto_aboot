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

int32_t can_write_partition(int32_t a1, uint32_t a2, int32_t a3);
int32_t display_auto_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t display_init(int32_t a1);
int32_t fdt_subnode_offset(char * a1, int32_t a2, char * str, int32_t a4, int32_t a5);
int32_t fdt_subnode_offset_namelen(int32_t a1, int32_t a2, char * a3, int32_t n);
int32_t generic_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t get_bar_length(int32_t a1, char * str);
int32_t get_charger_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
int32_t is_battery_max17050(void);
int32_t is_battery_max17058(void);
int32_t lcm(int32_t a1, int32_t a2, int32_t a3);
int32_t led_blink(int32_t a1, int32_t a2);
int32_t led_blink_stop(int32_t a1, int32_t a2, int32_t a3);
int32_t longlong_to_string_constprop_0(int32_t a1, int32_t a2, int64_t a3, int32_t a4);
int32_t mcs_habp_rsa_crt(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t mcs_habp_rsa_mod(int32_t a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t platform_led_off(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_led_on(int32_t a1, int32_t a2, int32_t a3);
int32_t pmic_arb_read_cmd(char * a1);
int32_t pmic_arb_write_cmd(char * a1);
int32_t qtimer_init(void);
int32_t qtimer_tick_rate(void);
int32_t SecHABTest(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t SecTest(int32_t a1, int32_t a2);
int32_t SecWriteFuse(int32_t a1, uint32_t a2);
int32_t setup_tx(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t test_HAB(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t type_itoa_12(char * a1, int32_t a2, int32_t a3);
int32_t udc_request_queue(int32_t a1, int32_t * a2);
int32_t write_protect_partition(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g42 = 0; // LR
int32_t g43 = 0; // R0
int32_t g44 = 0; // R1
int32_t g45 = 0; // R2
int32_t g46 = 0; // R3
int32_t g47 = 0; // R4
int32_t g48 = 0; // R5
int32_t g49 = 0; // R6
int32_t g50 = 0; // R7
int32_t g51 = 0; // R8
int32_t g1 = -0x1a60cfa4; // 0x8f6055d0
int32_t g2 = -0x1a60df94; // 0x8f6502a8
int32_t (*g3)() = (int32_t (*)())-0x16d2bff0; // 0x8f665d64
int32_t g4 = -0x16d2bff0; // 0x8f665ddc
int32_t g5 = 1; // 0x8f6ac0f0
int32_t g6 = 0xffffff; // 0x8f6afe08
int32_t g7 = 2; // 0x8f6afe0c
int32_t g8 = 2; // 0x8f6afe14
int32_t g9 = 3; // 0x8f6afe18
int32_t g10 = 0; // 0x8f6b7938
int32_t g11 = 0; // 0x8f6b7940
int32_t g12 = 0; // 0x8f6b8ab0
uint32_t g13 = 0; // 0x8f6b8ab4
int32_t g14 = 0; // 0x8f6b8ab8
int32_t g15 = 0; // 0x8f6b8afc
int32_t g16 = 0; // 0x8f6b8b04
int32_t g17 = 0; // 0x8f6b8b08
char * g18; // 0x8f6e0699
char * g19; // 0x8f6e069a
char * g20; // 0x8f6e069b
char * g21; // 0x8f6e06a9
int32_t g22 = 0; // 0x8f6e0bfc
int32_t g23 = 0; // 0x8f6e0c10
char g24 = 0; // 0x8f6e0c14
int32_t g25 = 0; // 0x8f6e0c18
int32_t g26 = 0; // 0x8f6e0c1c
int32_t g27 = 0; // 0x8f6e0c20
int32_t g28 = 0; // 0x8f6e0c24
int32_t g29 = 0; // 0x8f6e0c28
int32_t g30 = 0; // 0x8f6e0c2c
int32_t g31 = 0; // 0x8f6e0c30
int32_t g32 = 0; // 0x8f6e0c34
int32_t g33 = 0; // 0x8f6e0c38
int32_t g34 = 0; // 0x8f6e0c3c
int32_t g35 = 0; // 0x8f6e0c44
char * g36; // 0x8f6e0c48
int32_t g37 = 0; // 0x8f6e0c49
int32_t g38 = 0; // 0x8f6e0c4c
int32_t g39 = 0; // 0x8f70f724
char * g40; // 0x8f7112f4
int32_t g41 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f633070 - 0x8f6330af
int32_t get_charger_offset_by_type(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)g40;
    int32_t result = get_device_offset_by_type((int32_t)"charger", a1, v1, v1, g42); // 0x8f6330a4
    g43 = result;
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memalign(size_t alignment, size_t size);
// void * memchr(void * s, int c, size_t n);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:14
