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

int32_t _dputc(char a1, int32_t a2);
int32_t clear_for_auto_detect(void);
int32_t disable_charger_mode(int32_t a1, int32_t a2);
int32_t display_init(int32_t a1);
int32_t display_shutdown(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b154(void);
void function_8f64b1b0(char * str, int32_t a2, int32_t a3);
int32_t generic_mmc_read_logical(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4);
int32_t generic_mmc_write_sector(int64_t a1, int64_t a2, int32_t a3);
int32_t get_partition_count(void);
int32_t invalidate_current_panel(int32_t a1);
int32_t is_charger_mode(char * a1, int32_t a2);
int32_t max17058_get_battery_voltage(int32_t a1, int32_t a2);
int32_t max17058_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_clear_hash_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_hash_end(char * a1, int32_t result, int32_t * a3);
int32_t mdss_fbc_cfg(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_qos_remapper_setup(int32_t result, int32_t a2, int32_t a3);
int32_t mot_sst_create_token(void);
int32_t mot_sst_pal_get_processor_uid_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_security_version(char * a1, int32_t a2, int32_t a3);
int32_t mot_sst_validate_token(void);
int32_t need_auto_detect(void);
int32_t platform_halt(int32_t a1, int32_t a2);
int32_t set_gpt_opts(char * a1, int32_t result, int32_t a3);
int32_t set_panel_supplier_id(int32_t a1);
int32_t thread_block(int32_t a1, int32_t a2);
int32_t thread_timer_tick(int32_t a1, int32_t a2, int32_t a3);
int32_t wait_queue_block(int32_t a1, int32_t a2);
int32_t wait_queue_wake_one(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g37 = 0; // LR
int32_t g38 = 0; // R0
int32_t g39 = 0; // R1
int32_t g40 = 0; // R2
int32_t g41 = 0; // R3
int32_t g42 = 0; // R4
int32_t g43 = 0; // R5
int32_t g44 = 0; // R6
int32_t g45 = 0; // R7
int32_t g46 = 0; // R8
int32_t g47 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f61bf74
int32_t g2 = 0x1000; // 0x8f6ab03c
int32_t g3 = 0; // 0x8f6ab040
int32_t g4 = 0; // 0x8f6ab044
int32_t g5 = 0; // 0x8f6ab048
int32_t g6 = 1; // 0x8f6ac0f0
char * g7 = "\xff\xff"; // 0x8f6ac218
int32_t g8 = 0xffffff; // 0x8f6afe08
int32_t g9 = 2; // 0x8f6afe0c
int32_t g10 = 2; // 0x8f6afe14
int32_t g11 = -0x709adbb4; // 0x8f6afe20
char * g12 = "\x01"; // 0x8f6affac
char * g13; // 0x8f6e06ac
char * g14; // 0x8f6e06ad
int32_t g15 = 0; // 0x8f6e06b0
int32_t g16 = 0; // 0x8f6e0b5c
int32_t g17 = 0; // 0x8f6e0bfc
int32_t g18 = 0; // 0x8f6e0c10
char g19 = 0; // 0x8f6e0c14
int32_t g20 = 0; // 0x8f6e0c18
int32_t g21 = 0; // 0x8f6e0c1c
int32_t g22 = 0; // 0x8f6e0c20
int32_t g23 = 0; // 0x8f6e0c24
int32_t g24 = 0; // 0x8f6e0c28
int32_t g25 = 0; // 0x8f6e0c30
int32_t g26 = 0; // 0x8f6e0c34
int32_t g27 = 0; // 0x8f6e0c38
int32_t g28 = 0; // 0x8f6e0c3c
char * g29; // 0x8f6e0c80
int32_t g30 = 0; // 0x8f6e1310
int32_t g31 = 0; // 0x8f7112f4
int32_t g32 = 0; // 0x8f7114a8
int32_t g33 = 0; // 0x8f7114ac
int32_t g34 = 0; // 0x8f711550
int32_t g35 = 0; // 0x8f711554
int32_t g36 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f64b154 - 0x8f64b1af
void function_8f64b154(void) {
    int32_t size = strlen((char *)g38) + 1; // 0x8f64b16c
    char * mem = malloc(size); // 0x8f64b174
    if (mem != NULL) {
        // 0x8f64b180
        memcpy(mem, (char *)g38, size);
        // branch -> 0x8f64b18c
    }
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
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
// Decompilation date: 2017-08-06 19:16:18
