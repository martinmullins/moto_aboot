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

int32_t __utag_gets_constprop_6_14(int32_t a1, int32_t a2);
char * __utag_puts_constprop_8(char * a1);
int32_t check_and_backup_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fboot_cmd_erase_post_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_flash_post_backup_validate(int32_t * a1);
int32_t fboot_cmd_flash_post_validate(int32_t * a1);
int32_t get_device_offset_by_type(int32_t a1, char * a2);
int32_t get_device_setting_offset(int32_t a1, int32_t a2);
int32_t get_subnode_offset(int32_t a1, int32_t a2, int32_t a3);
int32_t get_temperature_setting(int32_t * a1, int32_t a2, int32_t a3);
int32_t handle_poweroff_callback(int32_t a1, int32_t a2, int32_t a3);
int32_t panel_manager_init(int32_t a1, int32_t a2, int32_t a3);
int32_t power_off(void);
int32_t poweroff_handler_init_part_0(int32_t a1, int32_t a2);
int32_t poweroff_handler_start(char * a1, int32_t a2, int32_t a3);
int32_t register_cmd_validator(int32_t * a1, char a2, int32_t a3);
int32_t register_pre_cmd_validator(int32_t a1, int32_t a2);
int32_t shutdown_timer_func(int32_t a1, int32_t a2);
int32_t source_detect_status(int32_t a1, int32_t a2, int32_t a3);
int32_t type_atoi_13(char * str, int32_t a2, int32_t a3);
int32_t type_itoa_12(char * a1, int32_t a2, int32_t a3);
int32_t update_fastchg_status(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_sparse_data(int32_t a1, int32_t * a2, char * a3);

// --------------------- Global Variables ---------------------

int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R2
int32_t g28 = 0; // R3
int32_t g29 = 0; // R4
int32_t g30 = 0; // R5
int32_t g31 = 0; // R6
int32_t g32 = 0; // R7
int32_t g33 = 0; // R8
int32_t g34 = 0; // R9
int32_t g1 = -0x16d2bfc9; // 0x8f6342ac
int32_t g2 = -0x1d7bfff8; // 0x8f6342dc
int32_t g3 = -0x16d2bf10; // 0x8f634310
int32_t g4 = 0x2020003a; // 0x8f686ac4
char * g5 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g6 = 1; // 0x8f6ac0f0
int32_t g7 = -1; // 0x8f6ac1e8
int32_t g8 = -1; // 0x8f6ac1f8
int32_t g9 = -1; // 0x8f6ac204
int32_t g10 = -1; // 0x8f6ac20c
char * g11; // 0x8f6c0690
char * g12; // 0x8f6e0698
char * g13; // 0x8f6e06ae
int32_t g14 = 0; // 0x8f6e06b8
int32_t g15 = 0; // 0x8f6e06bc
int32_t g16 = 0; // 0x8f6e06c0
char * g17; // 0x8f6e06dc
int32_t g18 = 0; // 0x8f6e06e0
int32_t g19 = 0; // 0x8f7112f4
int32_t g20 = 0; // 0x8f71150c
int32_t g21 = 0; // 0x8f711550
int32_t g22 = 0; // 0x8f711554
int32_t g23 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f62e7fc - 0x8f62e8ff
int32_t check_and_backup_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g29; // 0x8f62e7fc
    int32_t v2 = g30; // 0x8f62e7fc
    int32_t v3 = g31; // 0x8f62e7fc
    int32_t v4 = g32; // 0x8f62e7fc
    int32_t v5 = g33; // 0x8f62e7fc
    int32_t v6 = g34; // 0x8f62e7fc
    int32_t v7 = g24; // 0x8f62e7fc
    g29 = &g19;
    g32 = a1;
    g31 = a2;
    g34 = a3;
    int32_t v8 = g19;
    g33 = &g19;
    int32_t v9;
    int32_t result = get_backup_partition(a1, a2, a3, v8, v9, 0, 0, v8, 0, v1, v2, v3); // 0x8f62e820
    g30 = result;
    if (result == 0) {
        // 0x8f62e8d4
        g27 = v8;
        if (v8 == g19) {
            // 0x8f62e8e8
            g29 = v1;
            g30 = v2;
            g31 = v3;
            g32 = v4;
            g33 = v5;
            g34 = v6;
            return 0;
        }
        // 0x8f62e8e4
        __stack_chk_fail();
        // branch -> 0x8f62e8e8
        // 0x8f62e8e8
        g29 = v1;
        g30 = v2;
        g31 = v3;
        g32 = v4;
        g33 = v5;
        g34 = v6;
        return result;
    }
    int32_t v10 = partition_get_index(result, a2, a3, v8, v9, 0); // 0x8f62e82c
    int32_t result2 = v10; // R0
    int32_t v11;
    int32_t v12;
    if (v10 == -1) {
        // 0x8f62e838
        g27 = v8;
        if (v8 == g19) {
            int32_t v13 = g30; // 0x8f62e850
            g27 = v13;
            int32_t v14 = g32; // 0x8f62e854
            g29 = v1;
            g30 = v2;
            g31 = v3;
            g32 = v4;
            g33 = v5;
            g34 = v6;
            g24 = v7;
            return print_log(1, (int32_t)"backup partition %s for %s not exists\n", v13, v14, v1, v2, v3, v4, v5, v6, v7, v11, v12);
        }
    } else {
        int32_t v15 = is_sparse_image(g31, a2, a3, v8); // 0x8f62e868
        result2 = v15;
        if (v15 == 0) {
            // 0x8f62e874
            g27 = g30;
            return print_log(1, (int32_t)"flash backup partition %s for %s\n", g30, g32, v9, 0, 0, v8, 0, v1, v2, v3, v4);
        }
        // 0x8f62e8b0
        g27 = v8;
        if (v8 == g19) {
            // 0x8f62e8c0
            g29 = v1;
            g30 = v2;
            g31 = v3;
            g32 = v4;
            g33 = v5;
            g34 = v6;
            g24 = v7;
            return print_log(1, (int32_t)"backup not supported for SPARSE image\n", v8, v8, v1, v2, v3, v4, v5, v6, v7, v11, v12);
        }
    }
    // 0x8f62e8e4
    __stack_chk_fail();
    // branch -> 0x8f62e8e8
    // 0x8f62e8e8
    g29 = v1;
    g30 = v2;
    g31 = v3;
    g32 = v4;
    g33 = v5;
    g34 = v6;
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 23
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:40:36
