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

int32_t clock_config_mmc(int32_t a1, int32_t a2);
int32_t clock_init_mmc(int32_t a1);
int32_t dev_diag_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t display_clear_rows(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_draw_text_at_line(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b5d8(void);
void function_8f64b638(int32_t a1, int32_t a2, int32_t a3);
int32_t get_last_status(void);
int32_t get_sector_start(void);
int32_t hab_mcs_hashSHA512(int32_t a1, int32_t * a2, int32_t * a3);
int32_t hab_su_uid(char * a1);
int32_t handle_poweroff_callback(int32_t a1, int32_t a2, int32_t a3);
int32_t is_dev_diag_mode(void);
int32_t mcs_memclear(char * a1, int32_t a2, int32_t a3);
int32_t mcs_mp_mont_reduce(int32_t * a1, int32_t a2, int32_t a3);
int32_t mcs_mp_mont_sqr(int32_t * a1, int32_t a2, int32_t a3);
int32_t mcs_multi_convert_to_multi_digit_byte_len(int32_t a1, int32_t * a2, uint32_t a3);
int32_t misc_clear_mode(char * a1, int32_t a2, int32_t a3);
int32_t panel_manager_set_panel_hbm_feat(char a1, int32_t a2, int32_t a3);
char * restore_secure_cfg(int32_t a1, int32_t a2);
int32_t scm_protect_keystore(int32_t a1, int32_t a2, int32_t a3);
int32_t sdhci_msm_init(int32_t * a1, int32_t * a2);
int32_t sdhci_msm_set_mci_clk(int32_t * a1, int32_t a2, int32_t a3);
int32_t SecHashFinal(int32_t a1, int32_t a2);
int32_t SecHashUpdate(int32_t a1, int32_t a2);
int32_t target_mmc_init(int32_t * a1, int32_t a2);
int32_t udc_descriptor_register(int32_t * a1, int32_t a2, int32_t a3);
int32_t udc_string_desc_alloc(char * str, int32_t a2);
int32_t XXH32_init(char * a1, int32_t a2);
int32_t XXH32_resetState(int32_t * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

// Detected cryptographic pattern: Hash_constant_words_K_for_SHA_384_and_SHA_512 (64-bit, little endian)
int64_t Hash_constant_words_K_for_SHA_384_and_SHA_512_at_8f6a6d68[80] = {0x428a2f98d728ae22, 0x7137449123ef65cd, -0x4a3f043013b2c4d1, -0x164a245a7e762444, 0x3956c25bf348b538, 0x59f111f1b605d019, -0x6dc07d5b50e6b065, -0x54e3a12a25927ee8, -0x27f855675cfcfdbe, 0x12835b0145706fbe, 0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2, 0x72be5d74f27b896f, -0x7f214e01c4e9694f, -0x6423f958da38edcb, -0x3e640e8b3096d96c, -0x1b64963e610eb52e, -0x1041b879c7b0da1d, 0xfc19dc68b8cd5b5, 0x240ca1cc77ac9c65, 0x2de92c6f592b0275, 0x4a7484aa6ea6e483, 0x5cb0a9dcbd41fbd4, 0x76f988da831153b5, -0x67c1aead11992055, -0x57ce3992d24bcdf0, -0x4ffcd8376704dec1, -0x40a680384110f11c, -0x391ff40cc257703e, -0x2a586eb86cf558db, 0x6ca6351e003826f, 0x142929670a0e6e70, 0x27b70a8546d22ffc, 0x2e1b21385c26c926, 0x4d2c6dfc5ac42aed, 0x53380d139d95b3df, 0x650a73548baf63de, 0x766a0abb3c77b2a8, -0x7e3d36d1b812511a, -0x6d8dd37aeb7dcac5, -0x5d40175eb30efc9c, -0x57e599b443bdcfff, -0x3db4748f2f07686f, -0x3893ae5cf9ab41d0, -0x2e6d17e62910ade8, -0x2966f9dbaa9a56f0, -0xbf1ca7aa88edfd6, 0x106aa07032bbd1b8, 0x19a4c116b8d2d0c8, 0x1e376c085141ab53, 0x2748774cdf8eeb99, 0x34b0bcb5e19b48a8, 0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb, 0x5b9cca4f7763e373, 0x682e6ff3d6b2b8a3, 0x748f82ee5defb2fc, 0x78a5636f43172f60, -0x7b3787eb5e0f548e, -0x7338fdf7e59bc614, -0x6f410005dc9ce1d8, -0x5baf9314217d4217, -0x41065c084d3986eb, -0x398e870d1c8dacd5, -0x35d8c13115d99e64, -0x2e794738de3f3df9, -0x15258229321f14e2, -0xa82b08011912e88, 0x6f067aa72176fba, 0xa637dc5a2c898a6, 0x113f9804bef90dae, 0x1b710b35131c471b, 0x28db77f523047d84, 0x32caab7b40c72493, 0x3c9ebe0a15c9bebc, 0x431d67c49c100d4c, 0x4cc5d4becb3e42b6, 0x597f299cfc657e2a, 0x5fcb6fab3ad6faec, 0x6c44198c4a475817}; // 0x8f6a6d68
int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R10
int32_t g28 = 0; // R11
int32_t g29 = 0; // R2
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g34 = 0; // R8
int32_t g35 = 0; // R9
int32_t g1 = -0x1a60cfd8; // 0x8f606470
int32_t g2 = -0x1a60cfd8; // 0x8f6064a4
int32_t g3 = -0x16d2bfc9; // 0x8f6064d8
int32_t g4 = -0x16d2bfc9; // 0x8f606530
int32_t g5 = -0x16d2bfc9; // 0x8f60658c
int32_t g6 = -0x16d2bfed; // 0x8f608218
int32_t g7 = -0x1d7bfff8; // 0x8f6342dc
int32_t g8 = 0x65440030; // 0x8f69c66f
int32_t g9 = 1; // 0x8f6ac048
char * g10 = "\n"; // 0x8f6ac1b0
char * g11 = "\x01"; // 0x8f6ac21c
int32_t g12 = 0xffffff; // 0x8f6afe08
char (*g13)[14] = "boot-recovery"; // 0x8f6aff94
int32_t g14 = -1; // 0x8f6affb0
int32_t g15 = 0; // 0x8f6b7948
char * g16; // 0x8f6b7977
int32_t g17 = 0; // 0x8f6b7c24
int32_t g18 = 0; // 0x8f6e0c00
int32_t g19 = 0; // 0x8f6e0c08
int32_t g20 = 0; // 0x8f6e0c34
int32_t g21 = 0; // 0x8f6e0c38
char * g22; // 0x8f6e0c40
int32_t g23 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f602254 - 0x8f602383
int32_t clock_config_mmc(int32_t a1, int32_t a2) {
    int32_t str;
    int32_t v1 = &str; // 0x8f602268_0
    int32_t v2 = g23;
    snprintf((char *)&str, 64, "sdc%u_core_clk", a1);
    int32_t v3; // 0x8f6022c8
    int32_t result2; // 0x8f602334
    int32_t v4; // R0
    int32_t result; // 0x8f602350_2
    int32_t v5; // 0x8f602350_27
    int32_t v6;
    if (a2 == 0x61a80) {
        // 0x8f6022c4
        v3 = clk_get_set_enable(v1, 0x61a80, 1, 0x61a80, v6, 0, 0, str, 0, 0);
        v4 = v3;
        v5 = 0;
        if (v3 != 0) {
            // 0x8f60230c
            print_log(-1, (int32_t)"failed to set %s ret = %d\n", v1, v1, v6, 0, 0, str, 0, 0, 0, 0, 0);
            result2 = _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 144, (int32_t)&g8, 0, 0);
            v4 = result2;
            v5 = result2;
            // branch -> 0x8f602338
        }
        // 0x8f602338
        if (v2 != g23) {
            // 0x8f602348
            __stack_chk_fail();
            result = v4;
            // branch -> 0x8f60234c
        } else {
            result = v5;
        }
        // 0x8f60234c
        return result;
    }
    // 0x8f602290
    if (a2 == 0x2ee0000) {
        // 0x8f6022c4
        v3 = clk_get_set_enable(v1, 0x2faf080, 1, 0x2ee0000, v6, 0, 0, str, 0, 0);
        v4 = v3;
        v5 = 0;
        if (v3 != 0) {
            // 0x8f60230c
            print_log(-1, (int32_t)"failed to set %s ret = %d\n", v1, v1, v6, 0, 0, str, 0, 0, 0, 0, 0);
            result2 = _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 144, (int32_t)&g8, 0, 0);
            v4 = result2;
            v5 = result2;
            // branch -> 0x8f602338
        }
        // 0x8f602338
        if (v2 != g23) {
            // 0x8f602348
            __stack_chk_fail();
            result = v4;
            // branch -> 0x8f60234c
        } else {
            result = v5;
        }
        // 0x8f60234c
        return result;
    }
    // 0x8f6022a4
    if (a2 == 0xbebc200) {
        // 0x8f6022c4
        v3 = clk_get_set_enable(v1, 0xbebc200, 1, 0xbebc200, v6, 0, 0, str, 0, 0);
        v4 = v3;
        v5 = 0;
        if (v3 != 0) {
            // 0x8f60230c
            print_log(-1, (int32_t)"failed to set %s ret = %d\n", v1, v1, v6, 0, 0, str, 0, 0, 0, 0, 0);
            result2 = _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 144, (int32_t)&g8, 0, 0);
            v4 = result2;
            v5 = result2;
            // branch -> 0x8f602338
        }
        // 0x8f602338
        if (v2 != g23) {
            // 0x8f602348
            __stack_chk_fail();
            result = v4;
            // branch -> 0x8f60234c
        } else {
            result = v5;
        }
        // 0x8f60234c
        return result;
    }
    // 0x8f6022b0
    if (a2 != 0xa988e10) {
        // 0x8f6022dc
        print_log(-1, (int32_t)"sdc frequency (%u) is not supported\n", a2, 0xa988e10, v6, 0, 0, str, 0, 0, 0, 0, 0);
        _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 138, (int32_t)&g8, 0, 0);
        int32_t v7 = &g8;
        // branch -> 0x8f60230c
        // 0x8f60230c
        print_log(-1, (int32_t)"failed to set %s ret = %d\n", v1, -1, v7, 0, 0, str, 0, 0, 0, 0, 0);
        result2 = _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 144, (int32_t)&g8, 0, 0);
        // branch -> 0x8f602338
        // 0x8f602338
        if (v2 != g23) {
            // 0x8f602348
            __stack_chk_fail();
            // branch -> 0x8f60234c
        }
        // 0x8f60234c
        return result2;
    }
    // 0x8f6022c4
    v3 = clk_get_set_enable(v1, 0xa988e10, 1, 0xa988e10, v6, 0, 0, str, 0, 0);
    v4 = v3;
    v5 = 0;
    if (v3 != 0) {
        // 0x8f60230c
        print_log(-1, (int32_t)"failed to set %s ret = %d\n", v1, v1, v6, 0, 0, str, 0, 0, 0, 0, 0);
        result2 = _panic(g24, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm8916/acpuclock.c", 144, (int32_t)&g8, 0, 0);
        v4 = result2;
        v5 = result2;
        // branch -> 0x8f602338
    }
    // 0x8f602338
    if (v2 != g23) {
        // 0x8f602348
        __stack_chk_fail();
        result = v4;
        // branch -> 0x8f60234c
    } else {
        result = v5;
    }
    // 0x8f60234c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void bzero(void * s, size_t n);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:14:13
