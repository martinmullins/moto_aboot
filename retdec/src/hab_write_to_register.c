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

int32_t board_machtype(int32_t a1, int32_t a2, int32_t a3);
int32_t disable_gpio_107_irq(int32_t a1);
int32_t disable_usbin_valid_irq(int32_t a1);
int32_t enable_charger_gone_irq(int32_t a1, int32_t a2);
int32_t enable_gpio_107_irq(void);
int32_t fdt_node_check_compatible(int32_t a1, int32_t a2, char * a3);
int32_t fdt_num_mem_rsv(int32_t a1);
int32_t fdt_path_offset(char * a1, char * str, int32_t a3);
int32_t fdt_subnode_offset_namelen(int32_t a1, int32_t a2, char * a3, int32_t n);
void function_8f64a450(void);
void function_8f64a49c(char * a1, int32_t a2, char * a3, int16_t * a4);
int32_t get_platform_name(void);
int32_t hab_hash_decision(char * a1, int32_t a2);
int32_t hab_mcs_hashSHA256(int32_t a1, int32_t * a2, int32_t * a3);
int32_t hab_write_to_register(int32_t a1, char * a2, int16_t * a3);
int32_t is_emu_charger_present(int32_t a1, int32_t a2, int32_t a3);
int32_t is_hv_charger_present(int32_t a1, int32_t a2);
int32_t mbm_fdt_find_node(int32_t a1, int32_t a2);
int32_t mdelay(int32_t a1, int32_t a2, int32_t a3);
int32_t mdp_disable(int32_t a1);
int32_t mdp_dma_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mmc_init(char * a1);
char * mmc_sd_set_hs(char * a1);
int32_t sdhci_set_bus_width(int32_t * a1, int32_t a2);
int32_t sdhci_set_uhs_mode(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t shutdown_device(void);
int32_t udelay(int32_t a1, int32_t a2, int32_t a3);
int32_t unit_modular_inverse(int64_t a1);

// --------------------- Global Variables ---------------------

int32_t g17 = 0; // LR
int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g27 = 0; // R9
// Detected cryptographic pattern: SHA256_Hash_constant_words_K__0x428a2f98_ (32-bit, little endian)
int32_t SHA256_Hash_constant_words_K__0x428a2f98__at_8f6a6c68[64] = {0x428a2f98, 0x71374491, -0x4a3f0431, -0x164a245b, 0x3956c25b, 0x59f111f1, -0x6dc07d5c, -0x54e3a12b, -0x27f85568, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, -0x7f214e02, -0x6423f959, -0x3e640e8c, -0x1b64963f, -0x1041b87a, 0xfc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da, -0x67c1aeae, -0x57ce3993, -0x4ffcd838, -0x40a68039, -0x391ff40d, -0x2a586eb9, 0x6ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, -0x7e3d36d2, -0x6d8dd37b, -0x5d40175f, -0x57e599b5, -0x3db47490, -0x3893ae5d, -0x2e6d17e7, -0x2966f9dc, -0xbf1ca7b, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, -0x7b3787ec, -0x7338fdf8, -0x6f410006, -0x5baf9315, -0x41065c09, -0x398e870e}; // 0x8f6a6c68
int32_t g1 = -0x16d2bf8d; // 0x8f602e98
int32_t g2 = -0x16d2bfc9; // 0x8f64587c
int32_t g3 = 0; // 0x8f67dbd4
int32_t g4 = 1; // 0x8f67dc14
int32_t g5 = 100; // 0x8f67ea70
int32_t g6 = 0; // 0x8f67eaa8
int32_t g7 = 0x65440030; // 0x8f69c66f
char * g8 = "\n"; // 0x8f6afe00
int32_t g9 = 0; // 0x8f6b5040
char * g10; // 0x8f6b7c80
int32_t g11 = 0; // 0x8f6b7cc0
char * g12; // 0x8f6b7d00
int32_t g13 = 0; // 0x8f6b8ab4
int32_t g14 = 0; // 0x8f6b8ab8
int32_t g15 = 0; // 0x8f6e06a0
int32_t g16 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f66d21c - 0x8f66d2b3
int32_t hab_write_to_register(int32_t a1, char * a2, int16_t * a3) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = g16;
    if (a3 < (int16_t *)0x8000) {
        // 0x8f66d294
        if (v2 != g16) {
            // 0x8f66d2a4
            __stack_chk_fail();
            // branch -> 0x8f66d2a8
        }
        // 0x8f66d2a8
        return 102;
    }
    // 0x8f66d234
    if (a1 == 1) {
        // if_8f66d238_0_true
        *(char *)a3 = *a2;
        // branch -> 0x8f66d294
        // 0x8f66d294
        if (v2 != g16) {
            // 0x8f66d2a4
            __stack_chk_fail();
            // branch -> 0x8f66d2a8
        }
        // 0x8f66d2a8
        return 240;
    }
    // 0x8f66d244
    int32_t result;
    if (a1 == 2) {
        char v3 = *(char *)(v1 + 1); // 0x8f66d24c
        *a3 = (int16_t)((int32_t)v3 | 256 * (int32_t)*a2);
        result = 240;
        // branch -> 0x8f66d294
    } else {
        // 0x8f66d25c
        if (a1 == 4) {
            char v4 = *(char *)(v1 + 1); // 0x8f66d264
            char v5 = *a2; // 0x8f66d268
            char v6 = *(char *)(v1 + 3); // 0x8f66d274
            char v7 = *(char *)(v1 + 2); // 0x8f66d278
            *(int32_t *)a3 = 256 * (int32_t)v7 | 0x1000000 * (int32_t)v5 | 0x10000 * (int32_t)v4 | (int32_t)v6;
            result = 240;
            // branch -> 0x8f66d294
        } else {
            result = 102;
        }
    }
    // 0x8f66d294
    if (v2 != g16) {
        // 0x8f66d2a4
        __stack_chk_fail();
        // branch -> 0x8f66d2a8
    }
    // 0x8f66d2a8
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void bzero(void * s, size_t n);
// void * malloc(size_t size);
// void * memchr(void * s, int c, size_t n);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// char * strchr(char * s, int c);
// size_t strlen(const char * s);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 28
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:26:23
