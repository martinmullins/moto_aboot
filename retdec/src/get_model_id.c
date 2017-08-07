//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int8_t int7_t;

// ------------------- Function Prototypes --------------------

int32_t arch_init(int32_t a1, int32_t a2);
int32_t clear_flash_fail(int32_t a1, int32_t a2);
int32_t display_clear_rect(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_draw_vertical_line(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fastboot_init_validators(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_8f61919c(int32_t * a1, int32_t a2);
void function_8f64ab44(void);
void function_8f64ab9c(int32_t a1, int32_t a2, int32_t a3);
int32_t get_device_setting_offset(int32_t a1, int32_t a2);
int32_t get_model_id(void);
int32_t get_powerup_reason(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_powerup_reason_string(char * a1, int32_t a2);
int32_t get_srk_name(char * a1, int32_t a2);
int32_t gfx_fillrect(int32_t a1, uint32_t a2, uint32_t a3, int32_t a4, int32_t a5);
int32_t gfx_putpixel(int32_t a1, uint32_t a2, uint32_t a3);
int32_t hab_skip_identifier(int32_t a1);
int32_t is_flash_fail(int32_t a1, int32_t a2);
int32_t mcs_bytes_to_mpint(int32_t a1);
int32_t mcs_ctx_init_cert(int16_t * a1);
int32_t mcs_hashSHA(int32_t a1, int32_t * a2, int32_t * a3);
int32_t mcs_rng_seed_data(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_verify_cert_chain(int32_t a1, int16_t * a2);
int32_t mmc_read(int64_t a1, int32_t a2);
int32_t mmc_write(int64_t a1);
int32_t mot_sst_pal_get_sbd_dis_otp_bit(char * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_sbd_en_otp_bit(char * a1);
int32_t qup_blsp_i2c_init(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t qup_i2c_sec_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t utag_parent_exists(int32_t a1);
int32_t validate_utag_range(char * a1, int32_t a2, char * str);

// --------------------- Global Variables ---------------------

int32_t g40 = 0; // LR
int32_t g41 = 0; // R0
int32_t g42 = 0; // R1
int32_t g43 = 0; // R12
int32_t g44 = 0; // R2
int32_t g45 = 0; // R3
int32_t g46 = 0; // R4
int32_t g47 = 0; // R5
int32_t g48 = 0; // R6
int32_t g49 = 0; // R7
int32_t g50 = 0; // R8
int32_t g51 = 0; // R9
int32_t g1 = -0x1a60cef8; // 0x8f612228
int32_t g2 = -0x16d2bf8d; // 0x8f624998
int32_t g3 = -0x1a60cfd8; // 0x8f62dd14
int32_t g4 = -0x1a60cfd8; // 0x8f62dd48
int32_t g5 = -0x16d2bfed; // 0x8f62dd7c
int32_t g6 = -0x16d2bf09; // 0x8f62dee0
int32_t g7 = -0x16d2bf8d; // 0x8f62e0bc
int32_t g8 = -0x16d2bfc9; // 0x8f62e21c
int32_t g9 = -0x16d2bf8d; // 0x8f62e284
int32_t g10 = -0x16d2bfc9; // 0x8f62e74c
int32_t g11 = -0x16d2b010; // 0x8f62e900
int32_t g12 = -0x16d2bc10; // 0x8f62eb6c
int32_t g13 = -0x1a60c1d8; // 0x8f62f18c
int32_t g14 = -0x16d2bf8d; // 0x8f630638
int32_t g15 = 0x7325002c; // 0x8f682749
int32_t g16 = 0x7325002f; // 0x8f686fbc
char * g17 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g18 = -0x79b779d6; // 0x8f6a69c9
int32_t g19 = 0x2b0b0455; // 0x8f6a69d2
int32_t g20 = 0x20494b50; // 0x8f6a69dd
int32_t g21 = 0x67251d55; // 0x8f6a69e7
int32_t g22 = -1; // 0x8f6ac1e8
int32_t g23 = -1; // 0x8f6ac1f8
int32_t g24 = -1; // 0x8f6ac204
int32_t g25 = -1; // 0x8f6ac20c
int32_t g26 = -1; // 0x8f6ac214
int32_t g27 = 0; // 0x8f6b8b14
int32_t g28 = 0; // 0x8f6e07a0
char * g29; // 0x8f6e07a4
int32_t g30 = 0; // 0x8f6e07a8
int32_t g31 = 0; // 0x8f6e0c00
int32_t g32 = 0; // 0x8f6e0c08
int32_t g33 = 0; // 0x8f6e0c38
char * g34; // 0x8f6e0c40
int32_t g35 = 0; // 0x8f7112f4
int32_t g36 = 0; // 0x8f7114f4
int32_t g37 = 0; // 0x8f7114f8
int32_t g38 = 0; // 0x8f71150c
int32_t g39 = 0; // 0x8f711510

// ------------------------ Functions -------------------------

// Address range: 0x8f63279c - 0x8f63284b
int32_t get_model_id(void) {
    // 0x8f63279c
    int32_t v1; // bp-16
    int32_t v2 = &v1; // 0x8f6327a0_1
    int32_t v3 = g35;
    v1 = -1;
    int32_t v4 = g26;
    int32_t v5;
    int32_t v6; // 0x8f6327fc
    int32_t result; // 0x8f632814
    if (v4 <= -1) {
        // 0x8f6327c8
        print_log(-1, (int32_t)"No product setting\n", (int32_t)&g26, (int32_t)&g35, -1, v3, g46, g40, v5, 0, 0, 0, 0);
        // branch -> 0x8f6327fc
        // 0x8f6327fc
        v6 = v1;
        result = -1;
        if (v6 != -1) {
            int32_t v7 = &g35; // 0x8f632810
            print_log(2, (int32_t)"MODEL_ID defined: %d\n", v6, v7, v6, v3, g46, g40, v5, 0, 0, 0, 0);
            result = v1;
            // branch -> 0x8f632814
        }
        // 0x8f632814
        // branch -> 0x8f632818
        // 0x8f632818
        if (v3 != g35) {
            // 0x8f632828
            __stack_chk_fail();
            // branch -> 0x8f63282c
        }
        // 0x8f63282c
        return result;
    }
    int32_t v8 = get_int_prop((int32_t)"model_id", v4, v2, (int32_t)&g35, -1, v3, g46); // 0x8f6327dc
    int32_t result2 = v8; // R0
    int32_t v9; // 0x8f632830_24
    if (v8 != -1) {
        int32_t v10 = v1; // 0x8f6327f4
        print_log(2, (int32_t)"get prop %s: 0x%x\n", (int32_t)"model_id", v10, v10, v3, g46, g40, v5, 0, 0, 0, 0);
        // branch -> 0x8f6327fc
        // 0x8f6327fc
        v6 = v1;
        result = -1;
        if (v6 != -1) {
            // 0x8f632808
            print_log(2, (int32_t)"MODEL_ID defined: %d\n", v6, v10, v6, v3, g46, g40, v5, 0, 0, 0, 0);
            result = v1;
            // branch -> 0x8f632814
        }
        // 0x8f632814
        result2 = result;
        v9 = result;
        // branch -> 0x8f632818
    } else {
        v9 = -1;
    }
    // 0x8f632818
    if (v3 != g35) {
        // 0x8f632828
        __stack_chk_fail();
        // branch -> 0x8f63282c
    } else {
        result2 = v9;
    }
    // 0x8f63282c
    return result2;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:37:56
