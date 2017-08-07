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

int32_t cache_state_to_sp(void);
int32_t get_boot_component_version(int32_t a1);
int32_t get_policy_executor(char * a1);
int32_t get_primary_gpt_partition(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_add_verified_blocks(char * a1, int32_t a2, int32_t a3);
int32_t hab_code_hash(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t hab_code_sig_verification(int32_t a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t hab_parse_certificate(int32_t a1, char * a2, int32_t * a3, int16_t * a4, int32_t * a5);
int32_t hab_rsa_verification(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t hab_skip_identifier(int32_t a1);
int32_t hab_sw_rsa(char * str, char * str2, uint32_t n, int32_t a4, uint32_t a5);
int32_t locking_phone(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_X509Certificate_decodeExtension(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_X509Certificate_extractAlgorithm(int32_t a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t mcs_X509Certificate_extractNames(int32_t a1, int32_t a2, int32_t * a3, int16_t * a4);
int32_t mcs_X509Certificate_getExtensions(int32_t a1, int32_t * a2, int16_t * a3);
int32_t mcs_X509Certificate_removePadding(int32_t a1, int32_t a2);
int32_t set_current_secure_state(char a1, int32_t a2, int32_t a3);
int32_t unlock_phone(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_sparse_partition(int32_t a1, int32_t a2);
int32_t write_protect_on_partition(int32_t a1, int32_t a2);
int32_t write_protect_was_enabled(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g54 = 0; // LR
int32_t g55 = 0; // R0
int32_t g56 = 0; // R1
int32_t g57 = 0; // R10
int32_t g58 = 0; // R11
int32_t g59 = 0; // R2
int32_t g60 = 0; // R3
int32_t g61 = 0; // R4
int32_t g62 = 0; // R5
int32_t g63 = 0; // R6
int32_t g64 = 0; // R7
int32_t g65 = 0; // R8
int32_t g66 = 0; // R9
int32_t g1 = 1; // 0x8f6b0044
int32_t g2 = 0; // 0x8f6b0070
char g3 = 0; // 0x8f70dad8
int32_t g4 = 0; // 0x8f70dcf4
int32_t g5 = 0; // 0x8f70ddf8
int32_t g6 = 0; // 0x8f70ddfc
int32_t g7 = 0; // 0x8f70dff4
int32_t g8 = 0; // 0x8f70dff8
char * g9; // 0x8f70dffc
int32_t g10 = 0; // 0x8f70e3fc
char g11 = 0; // 0x8f70e500
char g12 = 0; // 0x8f70e604
char * g13; // 0x8f70e708
char g14 = 0; // 0x8f70e709
char g15 = 0; // 0x8f70e70a
char g16 = 0; // 0x8f70e70b
char g17 = 0; // 0x8f70e70c
char g18 = 0; // 0x8f70e70d
int32_t g19 = 0; // 0x8f70e718
int32_t g20 = 0; // 0x8f70e719
int32_t g21 = 0; // 0x8f70e71a
int32_t g22 = 0; // 0x8f70e71b
char g23 = 0; // 0x8f70e71c
char g24 = 0; // 0x8f70e71d
char g25 = 0; // 0x8f70e71e
char g26 = 0; // 0x8f70e71f
char * g27; // 0x8f70f724
int32_t g28 = 0; // 0x8f70f725
int32_t g29 = 0; // 0x8f70f745
int32_t g30 = 0; // 0x8f70f746
int32_t g31 = 0; // 0x8f70f747
int32_t g32 = 0; // 0x8f70f748
int32_t g33 = 0; // 0x8f70f749
int32_t g34 = 0; // 0x8f70f74a
int32_t g35 = 0; // 0x8f70f74b
int32_t g36 = 0; // 0x8f70f74c
int32_t g37 = 0; // 0x8f70f74d
int32_t g38 = 0; // 0x8f70f74e
int32_t g39 = 0; // 0x8f70f74f
int32_t g40 = 0; // 0x8f70f750
int32_t g41 = 0; // 0x8f70f751
int32_t g42 = 0; // 0x8f70f752
int32_t g43 = 0; // 0x8f70f753
int32_t g44 = 0; // 0x8f70f754
char g45 = 0; // 0x8f70f755
char g46 = 0; // 0x8f70f756
char * g47; // 0x8f70f75d
char * g48; // 0x8f710a25
int32_t g49 = 0; // 0x8f7112f4
int32_t g50 = 0; // 0x8f7129dc
int32_t g51 = 0; // 0x8f712e1c
int32_t g52 = 0; // 0x8f712f2c
int32_t g53 = 0; // 0x8f71302c

// ------------------------ Functions -------------------------

// Address range: 0x8f6746bc - 0x8f674773
int32_t cache_state_to_sp(void) {
    int32_t v1 = g61; // 0x8f6746bc
    int32_t v2 = 0x1000000 * g55 / 0x1000000; // bp-25
    int32_t v3 = g49;
    int32_t v4;
    int32_t v5;
    int32_t v6 = get_sp_block((int32_t)"secure_state", g56, 1, 0, (int32_t)&v5, 0, 0, 0, 0, v3, 0, v1, g62, g54, v4); // 0x8f6746e8
    int32_t v7 = &v2; // 0x8f6746ec_0
    int32_t result;
    if (v6 == 0) {
        // 0x8f674728
        if (update_sp_block((int32_t)"secure_state", g56, 1, 0, v7, 0, 0, 0, 0, v3, 0, v1, g62, g54) != 0) {
            // 0x8f674734
            // branch -> 0x8f67473c
            // 0x8f67473c
            print_log(v6, (int32_t)"Failed to update state block: %d\n", 0x1000000 * v2 / 0x1000000, 0, v7, 0, 0, 0, 0, v3, 0, v1, g62);
            result = -1;
            // branch -> 0x8f674748
        } else {
            result = 0;
        }
        // 0x8f674748
        if (v3 != g49) {
            // 0x8f674758
            __stack_chk_fail();
            // branch -> 0x8f67475c
        }
        // 0x8f67475c
        g61 = v1;
        return result;
    }
    // 0x8f674708
    if (add_sp_block((int32_t)"secure_state", g56, 1, 0, v7, 0, 0, 0, 0, v3, 0, v1, g62, g54, v4, 0, 0) != 0) {
        // 0x8f67471c
        // branch -> 0x8f67473c
        // 0x8f67473c
        print_log(0, (int32_t)"failed to cache state block: %d\n", 0x1000000 * v2 / 0x1000000, 0, v7, 0, 0, 0, 0, v3, 0, v1, g62);
        result = -1;
        // branch -> 0x8f674748
    } else {
        result = 0;
    }
    // 0x8f674748
    if (v3 != g49) {
        // 0x8f674758
        __stack_chk_fail();
        // branch -> 0x8f67475c
    }
    // 0x8f67475c
    g61 = v1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:28
