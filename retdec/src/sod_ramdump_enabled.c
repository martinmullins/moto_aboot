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

int32_t bd65060_read_reg(int32_t a1, int32_t a2);
int32_t bd65060_write_reg(int32_t a1, int32_t a2);
int32_t clk_init(int32_t a1, int32_t a2, int32_t a3);
int32_t clk_set_rate(int32_t a1);
int32_t generic_mmc_erase_legacy(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t generic_mmc_write_logical(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4);
int32_t get_boot_seq(int32_t a1, int32_t a2, int32_t a3);
int32_t get_piv_image_size(int32_t a1, int32_t a2, int32_t a3);
int32_t LZ4_decompress_safe(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mdp_dsi_video_off(int32_t a1, int32_t a2, int32_t a3);
int32_t mdp_dsi_video_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_bus_clocks_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_bus_clocks_enable(void);
char * mmc_put_card_to_sleep(char * a1);
void mmc_set_power_on_wp_user(char * a1, int32_t a2, int32_t a3);
int32_t piv_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_get_smem_base_addr(void);
int32_t qtmr_irq(int32_t a1, int32_t a2);
int32_t smb1359_get_usbin_power_source_type(int32_t a1);
int32_t smb1359_read_reg(int32_t a1, int32_t a2);
int32_t sod_ramdump_enabled(char * a1, int32_t a2);
int32_t sod_ramdump_flag_pulled(int32_t a1, int32_t a2);
int32_t strings_count(int32_t a1, int32_t a2);
int32_t strings_from(char * a1, int32_t a2, int32_t a3);
int32_t target_fact_cbl_detect(int32_t a1, int32_t a2);
int32_t target_fact_cbl_setup(char * a1, int32_t a2);
int32_t target_mmc_erase_content(int32_t a1, int32_t a2);
int32_t target_mmc_init(int32_t * a1, int32_t a2);
int32_t target_platform_id(char * a1, int32_t a2, int32_t a3);
int32_t target_product_id(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g33 = 0; // LR
int32_t g34 = 0; // R0
int32_t g35 = 0; // R10
int32_t g36 = 0; // R11
int32_t g37 = 0; // R2
int32_t g38 = 0; // R3
int32_t g39 = 0; // R4
int32_t g40 = 0; // R5
int32_t g41 = 0; // R6
int32_t g42 = 0; // R7
int32_t g43 = 0; // R8
int32_t g44 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = -0x1a60cfd8; // 0x8f606470
int32_t g3 = -0x1a60cfd8; // 0x8f6064a4
int32_t g4 = -0x16d2bfc9; // 0x8f6064d8
int32_t g5 = -0x16d2bfc9; // 0x8f606530
int32_t g6 = -0x16d2bfc9; // 0x8f60658c
char * g7; // 0x8f657e58
int32_t g8 = 0x65440030; // 0x8f69c66f
int32_t g9 = 0; // 0x8f6a3f38
int32_t g10 = 0; // 0x8f6a3f44
char * g11; // 0x8f6b7977
int32_t g12 = 0; // 0x8f6b8ad0
int32_t g13 = 0; // 0x8f6e0a94
int32_t g14 = 0; // 0x8f6e0bd4
int32_t g15 = 0; // 0x8f6e0c68
int32_t g16 = 0; // 0x8f6e0c6c
char * g17; // 0x8f6e0c80
int32_t g18 = 0; // 0x8f6ed830
int32_t g19 = 0; // 0x8f70da40
int32_t g20 = 0; // 0x8f70da44
int32_t g21 = 0; // 0x8f70da48
int32_t g22 = 0; // 0x8f70da4c
char * g23; // 0x8f70da50
int32_t g24 = 0; // 0x8f70da54
int32_t g25 = 0; // 0x8f70da58
int32_t g26 = 0; // 0x8f70da60
int32_t g27 = 0; // 0x8f70da64
int32_t g28 = 0; // 0x8f70da68
char * g29; // 0x8f70da6c
char * g30; // 0x8f70da8c
int32_t g31 = 0; // 0x8f7112f4
int32_t g32 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f6364dc - 0x8f63651b
int32_t sod_ramdump_enabled(char * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1; // 0x8f6364dc_0
    g34 = v1;
    int32_t v2 = g31;
    g38 = v2;
    int32_t v3;
    int32_t v4 = sod_init(v1, a2, g37, v2, v1, v2, g39, g33, v3, 0, 0, 0, 0, 0, 0); // 0x8f6364ec
    g34 = v4;
    int32_t v5 = g31;
    g38 = v5;
    int32_t v6 = 0; // 0x8f636514_22
    if (v4 != 0) {
        int32_t v7 = *(int32_t *)(v4 + 4) % 2; // 0x8f636500
        g34 = v7;
        v6 = v7;
        // branch -> after_if_8f636500_0
    }
    // after_if_8f636500_0
    int32_t result; // 0x8f636514_2
    if (v2 != v5) {
        // 0x8f63650c
        __stack_chk_fail();
        result = g34;
        // branch -> 0x8f636510
    } else {
        result = v6;
    }
    // 0x8f636510
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strcpy(char * restrict dest, const char * restrict src);
// char * strdup(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:56:14
