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

int32_t check_reboot_mode(char * a1, int32_t a2, int32_t a3);
int32_t delay(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);
void function_8f60e190(int32_t a1);
int32_t mdp_select_pipe_type_isra_0(int32_t a1, int32_t * a2);
int32_t mdss_mdp_set_flush_isra_1(int32_t a1, int32_t * a2);
int32_t mdss_smp_alloc(int32_t a1, int32_t a2, int32_t a3, int32_t result2);
int32_t mdss_source_pipe_config(int32_t * a1, int32_t * a2, int32_t * a3);
int32_t mmc_erase_card(void);
int32_t mmc_get_ext_csd_isra_11(char * a1, int32_t * a2);
int32_t mmc_parse_response(char * a1, int32_t a2);
int32_t mmc_set_ddr_mode(int32_t a1, int32_t * a2, int32_t a3);
int32_t mmc_set_drv_type(char * a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t mmc_set_hs200_mode(char * a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t mmc_set_hs_interface(char * a1);
int32_t mmc_stop_command(char * a1);
int32_t mmc_zero_out(int32_t a1, int32_t a2, int32_t a3);
int32_t msm_boot_uart_dm_write(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_set_periodic_timer(int32_t a1, int32_t a2, int32_t a3);
int32_t qtimer_get_frequency(void);
int32_t qtimer_irq(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t set_restart_reason(int32_t a1);
int32_t uart_dm_init(int32_t a1, int32_t * a2, int32_t * a3);

// --------------------- Global Variables ---------------------

int32_t g15 = 0; // LR
int32_t g16 = 0; // R0
int32_t g17 = 0; // R1
int32_t g18 = 0; // R2
int32_t g19 = 0; // R3
int32_t g20 = 0; // R4
int32_t g21 = 0; // R5
int32_t g22 = 0; // R6
int32_t g23 = 0; // R7
int32_t g24 = 0; // R8
int32_t g25 = 0; // R9
bool g1 = false; // flagz
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = 0; // 0x8f6b8abc
int32_t g4 = 0; // 0x8f6b8ac0
int32_t g5 = 0; // 0x8f6b8ac4
int32_t (*g6)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) = NULL; // 0x8f6b8ac8
int32_t g7 = 0; // 0x8f6b8acc
int32_t g8 = 0; // 0x8f6b8ad8
int32_t g9 = 0; // 0x8f6b8adc
char * g10; // 0x8f6b8aec
char g11 = 0; // 0x8f6b8aed
int32_t g12 = 0; // 0x8f6b8af0
char * g13; // 0x8f6b8af4
int32_t g14 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f60bafc - 0x8f60bbd3
int32_t mmc_zero_out(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g20; // 0x8f60bafc
    int32_t v2 = g21; // 0x8f60bafc
    int32_t v3 = g22; // 0x8f60bafc
    int32_t v4 = g23; // 0x8f60bafc
    int32_t v5 = g24; // 0x8f60bafc
    int32_t v6 = g25; // 0x8f60bafc
    g24 = &g14;
    g21 = a3;
    g20 = a2;
    int32_t v7 = g14;
    int32_t v8 = mmc_get_device_blocksize(a1); // 0x8f60bb1c
    int32_t v9 = g21 * v8; // R6
    g23 = target_get_max_flash_size(v8, a2, a3, v7);
    int32_t v10;
    int32_t v11 = print_log(1, (int32_t)"erasing 0x%x:0x%x\n", g20, g21, v10, 0, 0, v7, 0, v1, v2, v3, v4); // 0x8f60bb3c
    uint32_t v12 = g23; // 0x8f60bb40
    int32_t v13;
    if (v9 > v12) {
        // 0x8f60bb90
        print_log(-1, (int32_t)"Erase Fail: Erase size: %u is bigger than scratch region:%u\n", v9, v12, v10, 0, 0, v7, 0, v1, v2, v3, v4);
        // branch -> 0x8f60bba4
        // 0x8f60bba4
        // branch -> 0x8f60bba8
        // 0x8f60bba8
        v13 = g14;
        g1 = v7 == v13;
        if (v7 != v13) {
            // 0x8f60bbb8
            __stack_chk_fail();
            // branch -> 0x8f60bbbc
        }
        // 0x8f60bbbc
        g20 = v1;
        g21 = v2;
        g22 = v3;
        g23 = v4;
        g24 = v5;
        g25 = v6;
        return 1;
    }
    int32_t v14 = target_get_scratch_address(v11, (int32_t)"erasing 0x%x:0x%x\n"); // 0x8f60bb48
    g23 = v14;
    memset((char *)v14, 0, v9);
    int32_t v15;
    char * v16 = mmc_sdhci_write(a1, v14, g20, 0, g21, 0, 0, v7, 0, v1, v2, v3, v4, v5, v6, g15, v15, 0, 0, 0, 0); // 0x8f60bb70
    int32_t v17 = (int32_t)v16; // 0x8f60bb70_22
    int32_t result = v17; // R0
    int32_t v18; // 0x8f60bbc0_22
    if (v16 != NULL) {
        // 0x8f60bb7c
        print_log(-1, (int32_t)"failed to erase the partition: %x\n", g20, 0, g21, 0, 0, v7, 0, v1, v2, v3, v4);
        // branch -> 0x8f60bba4
        // 0x8f60bba4
        result = 1;
        v18 = 1;
        // branch -> 0x8f60bba8
    } else {
        v18 = v17;
    }
    // 0x8f60bba8
    v13 = g14;
    g1 = v7 == v13;
    if (v7 != v13) {
        // 0x8f60bbb8
        __stack_chk_fail();
        // branch -> 0x8f60bbbc
    } else {
        result = v18;
    }
    // 0x8f60bbbc
    g20 = v1;
    g21 = v2;
    g22 = v3;
    g23 = v4;
    g24 = v5;
    g25 = v6;
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void * memalign(size_t alignment, size_t size);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:33:58