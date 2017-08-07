//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t arg_free(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t arg_split(char * a1, int32_t * a2);
int32_t disable_fastchg_irq(void);
int32_t enable_smb1359_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t factory_kill_is_supported(char * a1, int32_t a2);
int32_t fdt_get_property_by_offset(int32_t a1, int32_t a2, int32_t * a3);
int32_t fdt_next_property_offset(int32_t a1, int32_t a2, int32_t a3);
int32_t get_ctrl_code128(int32_t a1, int32_t a2, int32_t a3);
int32_t get_logger_iterator(int32_t a1);
char * get_memtest_params(char * a1, int32_t a2);
int32_t get_num_of_sims(char * a1, int32_t a2, int32_t a3);
int32_t get_string_prop(int32_t a1, int32_t a2);
int32_t get_termination_code128(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_oem_command_cid_prov_req(int32_t a1, int32_t a2);
int32_t is_factory_reset_protect_locked(void);
int32_t logger_init(char * a1, int32_t a2);
char * mbm_fdt_init(void);
int32_t mcs_array_bit_length(int32_t a1, int32_t a2);
int32_t mcs_array_unpadded_length(int32_t a1, int32_t a2);
int32_t set_current_boot_mode(char a1, int32_t a2, int32_t a3);
int32_t set_launch_to_fastboot_log(char a1, int32_t a2, int32_t a3);
int32_t smb1359_write_reg(int32_t a1, int32_t a2);
int32_t speedo_delete(int32_t a1, int32_t a2);
int32_t speedo_log(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t target_mot_prod_id(char * a1, int32_t a2, int32_t a3);
int32_t target_set_hw_id(char * a1, int32_t a2, int32_t a3);
int32_t unlock_volatile_write_access(int32_t a1, int32_t a2, int32_t a3);
int32_t usb_cable_is_charger(int32_t a1, int32_t a2);
int32_t wait_queue_wake_all(int32_t a1, int32_t a2, int32_t a3);
int32_t wait_queue_wake_one(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g29 = false; // LR
int32_t g30 = 0; // R0
int32_t g31 = 0; // R1
int32_t g32 = 0; // R2
int32_t g33 = 0; // R3
int32_t g34 = 0; // R4
int32_t g35 = 0; // R5
int32_t g36 = 0; // R6
int32_t g37 = 0; // R7
int32_t g38 = 0; // R8
int32_t g1 = -0x16d2bf10; // 0x8f647764
int32_t g2 = -0x16d2b810; // 0x8f656af0
char * g3 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
char g4[2] = "0"; // 0x8f69c66f
int32_t g5 = 0x66c06cc; // 0x8f6a28d8
char * g6; // 0x8f6a4e20
char * g7 = "\xff\xff\xff\xff\xff\xff\xff\xff\xe8\xc0\x6a\x8f\xe8\xc0\x6a\x8f\x01"; // 0x8f6ac0e0
int32_t g8 = -1; // 0x8f6ac0e4
int32_t g9 = 1; // 0x8f6ac0f0
char * g10 = "\n"; // 0x8f6ac1b0
int32_t g11 = -1; // 0x8f6ac1e8
int32_t g12 = -1; // 0x8f6ac1f4
int32_t g13 = -1; // 0x8f6ac1f8
int32_t g14 = -1; // 0x8f6ac200
int32_t g15 = -1; // 0x8f6ac204
int32_t g16 = -1; // 0x8f6ac20c
int32_t g17 = -1; // 0x8f6ac214
int32_t g18; // 0x8f6afe74
char * g19; // 0x8f6c032c
char * g20; // 0x8f6e069d
char * g21; // 0x8f6e06a0
char * g22; // 0x8f6e06a4
char * g23; // 0x8f6e0b64
int32_t g24 = 0; // 0x8f6e0b90
int32_t g25 = 0; // 0x8f6e0bd4
char * g26; // 0x8f6ed800
int32_t g27 = 0; // 0x8f7112f4
int32_t g28 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f647270 - 0x8f6472db
int32_t smb1359_write_reg(int32_t a1, int32_t a2) {
    int32_t v1 = g27;
    int32_t v2 = g25; // R0
    int32_t v3; // 0x8f6472d0_22
    if (g25 == 0) {
        // 0x8f6472b4
        v2 = -3;
        v3 = -3;
        // branch -> 0x8f6472b8
    } else {
        // 0x8f64729c
        int32_t v4;
        qup_i2c_write_byte(g25, 28, a1, a2, a1, v1, g34, g29 ? -0x709a9838 : 0, v4, 0, 0);
        int32_t v5 = v2; // 0x8f6472a4
        int32_t v6 = v5; // 0x8f6472d0_23
        if (v5 > -1) {
            // if_8f6472a8_0_true
            v2 = 0;
            v6 = 0;
            // branch -> after_if_8f6472a8_0
        }
        // after_if_8f6472a8_0
        if (v5 < 0) {
            // if_8f6472ac_0_true
            v2 = -20;
            v3 = -20;
            // branch -> 0x8f6472b8
        } else {
            v3 = v6;
        }
    }
    // 0x8f6472b8
    int32_t result; // 0x8f6472d0_2
    if (v1 != g27) {
        // 0x8f6472c8
        __stack_chk_fail();
        result = v2;
        // branch -> 0x8f6472cc
    } else {
        result = v3;
    }
    // 0x8f6472cc
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isspace(int c);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strdup(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strndup(const char * string, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:42:05
