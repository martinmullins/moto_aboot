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

// Address range: 0x8f60923c - 0x8f6092db
int32_t mmc_stop_command(char * a1) {
    int32_t v1 = g20; // 0x8f60923c
    int32_t v2 = g21; // 0x8f60923c
    int32_t v3;
    int32_t v4 = &v3; // 0x8f609240_0
    g20 = &g14;
    g21 = (int32_t)a1;
    int32_t result = g14;
    memset((char *)&v3, 0, 64);
    v3 = 12;
    int32_t v5 = g21; // 0x8f60926c
    int32_t v6 = 0x10000 * *(int32_t *)(v5 + 48); // 0x8f609278
    int32_t v7;
    int32_t v8 = sdhci_send_command((char *)v5, v4, 64, 1, 12, v6, 0, v7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); // 0x8f609290
    g21 = v8;
    if (v8 == 0) {
        // 0x8f6092b0
        mmc_parse_response((char *)v7, v4);
        // branch -> 0x8f6092b8
    } else {
        // 0x8f60929c
        print_log(-1, (int32_t)"Failed to send stop command\n", 64, 1, v3, v6, 0, v7, 0, 0, 0, 0, 0);
        // branch -> 0x8f6092b8
    }
    // 0x8f6092b8
    if (result != g14) {
        // 0x8f6092c8
        __stack_chk_fail();
        // branch -> 0x8f6092cc
    }
    // 0x8f6092cc
    g20 = v1;
    g21 = v2;
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
