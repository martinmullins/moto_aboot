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

int32_t cid_get_cid_data(char * a1);
int32_t cid_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t cmd_flash_mmc_motoboot_img(int32_t * a1);
int32_t cmd_flash_mmc_sparse_img(int32_t a1, int32_t a2);
int32_t display_get_image_location(void);
int32_t display_get_logo_size(int32_t a1, int32_t a2);
int32_t event_init(int32_t * a1, char a2, int32_t a3);
int32_t event_wait_timeout(int32_t a1, int32_t a2);
int32_t get_current_secure_state(int32_t a1, int32_t a2);
int32_t get_entry_name(int32_t a1, int32_t a2);
int32_t get_panel_info(int32_t * a1, int32_t a2, uint32_t a3);
int32_t hab_install_super_root_key(char * a1, int32_t a2);
int32_t hab_mcs_ctx_init_hash(void);
int32_t is_warranty_void(int32_t a1);
int32_t mdelay(int32_t a1, int32_t a2, int32_t a3);
int32_t mdp_clock_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t mdp_clock_enable(void);
int32_t mipi_dsi_off(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_on(int32_t a1, int32_t a2);
int32_t mot_sst_pal_delete_user_partition(int32_t a1, int32_t a2);
int32_t mot_sst_pal_set_sbd_en_otp_bit(int32_t a1, int32_t a2);
int32_t panel_common_init(void);
int32_t partition_get_name(int32_t a1, int32_t a2);
void platform_fiq(void);
int32_t platform_irq(int32_t a1, int32_t a2);
int32_t qtimer_uninit(void);
int32_t target_cpu(void);
int32_t target_uninit(int32_t a1, int32_t a2, int32_t a3);
int32_t thread_create(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t thread_exit(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g40 = 0; // LR
int32_t g41 = 0; // R0
int32_t g42 = 0; // R1
int32_t g43 = 0; // R10
int32_t g44 = 0; // R11
int32_t g45 = 0; // R2
int32_t g46 = 0; // R3
int32_t g47 = 0; // R4
int32_t g48 = 0; // R5
int32_t g49 = 0; // R6
int32_t g50 = 0; // R7
int32_t g51 = 0; // R8
int32_t g52 = 0; // R9
int32_t g1 = -0x1a60df68; // 0x8f61b3e8
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0x1010000; // 0x8f6a6b09
int32_t g4 = 0x40402014; // 0x8f6a6c1c
int32_t g5 = 0x6a6ba040; // 0x8f6a6c1f
int32_t g6 = 1; // 0x8f6ac0f0
int32_t g7 = 4; // 0x8f6acabc
int32_t g9 = 0xffff; // 0x8f6acae4
int32_t g10 = 0xffff; // 0x8f6acaec
int32_t g11 = 0xffff; // 0x8f6acb2c
int32_t g12 = -0x7fc8ffff; // 0x8f6acb50
int32_t g13 = 0xffff; // 0x8f6acb6c
int16_t * g14 = (int16_t *)0xffff; // 0x8f6affa4
char * g15; // 0x8f6b5000
int32_t g16 = 0; // 0x8f6b503f
int32_t g17 = 0; // 0x8f6b8ab4
int32_t g18 = 0; // 0x8f6c0164
int32_t g19 = 0; // 0x8f6c0168
char * g20; // 0x8f6c03bc
int32_t g21 = 0; // 0x8f6e0c38
int32_t g22 = 0; // 0x8f6e1310
int32_t g23 = 0; // 0x8f6e9400
char * g24; // 0x8f70da97
int32_t g25 = 0; // 0x8f70da98
char * g26; // 0x8f70da99
int32_t g27 = 0; // 0x8f70da9a
char * g28; // 0x8f70da9b
char * g29; // 0x8f710a25
int32_t g30 = 0; // 0x8f7112dc
int32_t g31 = 0; // 0x8f7112f4
int32_t g32 = 0; // 0x8f7114ac
int32_t g33 = 0; // 0x8f7125ec
char * g34; // 0x8f712e1c
char * g35; // 0x8f712e20
int16_t g36 = 0; // 0x8f712e24
int16_t g37 = 0; // 0x8f712e26
int32_t g38 = 0; // 0x8f712e28
char * g39; // 0x8f712e2c
int32_t * g8 = &g12; // 0x8f6acac0

// ------------------------ Functions -------------------------

// Address range: 0x8f64f20c - 0x8f64f27b
int32_t display_get_logo_size(int32_t a1, int32_t a2) {
    int32_t v1 = g47; // 0x8f64f20c
    int32_t v2 = g48; // 0x8f64f20c
    int32_t v3 = g49; // 0x8f64f20c
    g47 = &g21;
    int32_t v4 = g21;
    g41 = v4;
    int32_t v5 = g31;
    g48 = &g31;
    int32_t v6 = 0; // 0x8f64f270_22
    int32_t v7 = v5;
    if (v4 != 0) {
        // 0x8f64f230
        int32_t v8;
        int32_t v9 = get_current_panel(v4, a2, v5, (int32_t)&g31, a1, v5, v1, v2, v3, g40, v8); // 0x8f64f230
        int32_t v10 = *(int32_t *)(v9 + 504); // 0x8f64f234
        int32_t v11 = get_current_panel(v9, a2, v5, v10, a1, v5, v1, v2, v3, g40, v8); // 0x8f64f23c
        int32_t v12 = *(int32_t *)(*(int32_t *)(v11 + 504) + 4); // 0x8f64f244
        int32_t v13 = *(int32_t *)(g21 + 28); // 0x8f64f250
        int32_t v14 = v13 * v12 * *(int32_t *)(v10 + 4); // 0x8f64f254
        g41 = v14;
        v6 = v14;
        v7 = g31;
        // branch -> 0x8f64f258
    }
    // 0x8f64f258
    g45 = v5;
    g46 = v7;
    int32_t result; // 0x8f64f270_2
    if (v5 != v7) {
        // 0x8f64f268
        __stack_chk_fail();
        result = g41;
        // branch -> 0x8f64f26c
    } else {
        result = v6;
    }
    // 0x8f64f26c
    g47 = v1;
    g48 = v2;
    g49 = v3;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strstr(char * haystack, const char * needle);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:11
