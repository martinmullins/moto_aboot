//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t board_platform_id(int32_t a1);
int32_t bq24296_get_ibuslim(int32_t a1, int32_t a2);
int32_t bq24296_init(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_pal_rand(char * a1, int32_t a2);
int32_t dbval_write_datablock(int32_t a1, int32_t a2, uint32_t a3);
int32_t dpc_thread_routine(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t fdt32_to_cpu_99(int32_t a1, int32_t a2, int32_t a3);
void function_8f649c50(void);
void function_8f649d24(char * str, int32_t a2, int32_t a3);
void function_8f64b7f0(void);
int32_t get_detected_panel(int32_t a1);
int32_t hab_mcs_hash_data(char * a1, char * a2);
int32_t hab_mcs_hash_end(char * a1, int32_t a2);
int32_t is_skip_validation(int32_t a1);
int32_t max17042_is_batt_temp_ok(void);
int32_t max17058_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mmc_get_device_blocksize(void);
int32_t mmc_write(int64_t a1);
int32_t panel_manager_auto_detect_on(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_get_is_cold_boot(void);
int32_t pm8x41_uninit(int32_t a1);
int32_t qcom_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t SecHashInit(int32_t a1, int32_t a2, int32_t a3);
int32_t SecHashUpdate(int32_t a1, int32_t a2);
int32_t security_policy_init(char * a1, int32_t a2, int32_t a3);
int32_t target_display_pre_on(int32_t a1, int32_t a2, int32_t a3);
int32_t uart_putc(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t validate_gpt_image(char * a1, int32_t a2);
int32_t validate_hw_type(char * a1, int32_t a2);
int32_t wififlash_mode(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g32 = 0; // LR
int32_t g33 = 0; // R0
int32_t g34 = 0; // R1
int32_t g35 = 0; // R10
int32_t g36 = 0; // R11
int32_t g37 = 0; // R12
int32_t g38 = 0; // R2
int32_t g39 = 0; // R3
int32_t g40 = 0; // R4
int32_t g41 = 0; // R5
int32_t g42 = 0; // R6
int32_t g43 = 0; // R7
int32_t g44 = 0; // R8
int32_t g45 = 0; // R9
int32_t g1 = -0x7f7fbfc0; // 0x8f6a6b2d
int32_t g2 = -0x709918c4; // 0x8f6a6b38
int32_t g3 = 0x40302014; // 0x8f6a6b88
int32_t g4 = 0; // 0x8f6a6b8c
int32_t g5 = 0x1010000; // 0x8f6a6b9c
int32_t g6 = -0x7f7fbfc0; // 0x8f6a6bb4
int32_t g7 = -0x709918c4; // 0x8f6a6bb8
int32_t g8 = 0; // 0x8f6a6bc8
int32_t g9 = 0x1010000; // 0x8f6a6bd8
int32_t g10 = 0; // 0x8f6ac068
int32_t g11; // 0x8f6ac0e8
int32_t g13 = 1; // 0x8f6ac0f0
char * g14 = "\n"; // 0x8f6ac1b0
int32_t g15 = 0xffff; // 0x8f6ac218
int32_t g16 = -1; // 0x8f6acaac
int32_t g17 = 768; // 0x8f6acab3
char * g18 = "\x03"; // 0x8f6acab4
int32_t g19 = 0; // 0x8f6b7c24
int32_t g20 = 0; // 0x8f6b8ad8
int32_t g21 = 0; // 0x8f6b8adc
int32_t g22 = 0; // 0x8f6c0044
char * g23; // 0x8f6e06ad
int32_t g24 = 0; // 0x8f6e0aa0
char * g25; // 0x8f6e0aa4
int32_t g26 = 0; // 0x8f6e0b38
int32_t g27 = 0; // 0x8f6e0b40
int32_t g28 = 0; // 0x8f6e0b5c
char ** g29 = NULL; // 0x8f6e0bf8
int32_t g30 = 0; // 0x8f7112f4
int32_t g31 = 0; // 0x8f711550
int32_t * g12 = &g11; // 0x8f6ac0ec

// ------------------------ Functions -------------------------

// Address range: 0x8f64b82c - 0x8f64b87f
int32_t fdt32_to_cpu_99(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f64b874
    int32_t v1;
    int32_t v2;
    int32_t v3;
    return 0x1000000 * v3 / 256 | 0x1000000 * a1 | 0x1000000 * v2 / 0x10000 | 0x1000000 * v1 / 0x1000000;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// void free(void * ptr);
// int isdigit(int c);
// int isxdigit(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:51:16
