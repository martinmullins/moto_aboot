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

int32_t bare_board_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t blink_callback(int32_t a1, int32_t a2);
int32_t bs_set_timestamp(int32_t a1);
int32_t clear_reboot_bl_flag(int32_t a1, int32_t a2, int32_t a3);
int32_t dev_diag_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t display_get_screen_depth(int32_t a1, int32_t a2);
int32_t display_get_screen_width(int32_t a1, int32_t a2, int32_t a3);
int32_t display_set_margin(int32_t a1, int32_t a2);
int32_t flush_logs(int32_t a1, int32_t a2);
int32_t get_int_prop(int32_t a1, int32_t a2);
int32_t hab_sahara_operation(int32_t * a1);
int32_t hab_su_code(int32_t a1, int32_t a2);
int32_t is_udc_active(void);
int32_t mbm_fdt_get_variant(int32_t a1);
int32_t mcs_DER_decodeInteger(int32_t a1, uint16_t a2, int32_t a3);
int32_t mcs_DER_decodeRaw(int32_t a1, int16_t a2, int32_t a3);
int32_t next_valpair(int32_t * a1, int32_t * a2, int32_t c, int32_t * a4, int32_t a5);
int32_t normal_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t onkey_17(int32_t a1, int32_t a2);
int32_t partition_resize(uint32_t a1, int32_t a2, int32_t a3);
int32_t platform_get_boot_dev(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_halt(int32_t a1, int32_t a2);
int32_t pll_vote_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t pll_vote_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t ramdump_view_init(int32_t a1, int32_t a2);
int32_t sdhci_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t sdhci_send_command(char * a1, int16_t * a2);
int32_t set_reboot_bl_flag(int32_t a1);
int32_t smem_read_alloc_entry(int32_t a1, int32_t a2);
int32_t uart_logger_init(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g35 = 0; // LR
int32_t g36 = 0; // R1
int32_t g37 = 0; // R2
int32_t g38 = 0; // R3
int32_t g39 = 0; // R4
int32_t g40 = 0; // R5
int32_t g41 = 0; // R6
int32_t g42 = 0; // R7
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
int32_t g2 = -0x16d2bf10; // 0x8f639e6c
int32_t g3 = -0x1201f230; // 0x8f68ac00
int32_t g4 = 0x65440030; // 0x8f69c66f
char * g5 = "\n"; // 0x8f6ac1b0
int32_t g6 = -1; // 0x8f6ac1ec
int32_t g7 = -1; // 0x8f6ac214
int32_t g8 = 1; // 0x8f6afeac
int32_t g9 = 0; // 0x8f6b166c
int32_t g10 = 0; // 0x8f6b50a4
int32_t g11 = 0; // 0x8f6b794c
int32_t g12 = 0; // 0x8f6b7950
int32_t g13 = 0; // 0x8f6b8ad8
char * g14; // 0x8f6c02e4
char * g15; // 0x8f6e0849
int32_t g16 = 0; // 0x8f6e0940
int32_t g17 = 0; // 0x8f6e0c00
int32_t g18 = 0; // 0x8f6e0c04
int32_t g19 = 0; // 0x8f6e0c08
int32_t g20 = 0; // 0x8f6e0c0c
int32_t g21 = 0; // 0x8f6e0c18
int32_t g22 = 0; // 0x8f6e0c1c
int32_t g23 = 0; // 0x8f6e0c38
char * g24; // 0x8f6e0c40
char * g25; // 0x8f6e0c48
char g26 = 0; // 0x8f6e0c49
int32_t g27 = 0; // 0x8f6e130c
int32_t g28 = 0; // 0x8f6e1310
int32_t g29 = 0; // 0x8f6e1318
char * g30; // 0x8f6e131c
int32_t g31 = 0; // 0x8f6e1400
int32_t g32 = 0; // 0x8f6e9600
int32_t g33 = 0; // 0x8f7112f4
int32_t g34 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f60ce7c - 0x8f60ced7
int32_t pll_vote_clk_enable(int32_t a1, int32_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)*(int32_t *)(a1 - 20); // 0x8f60ce94_0
    *v1 = *v1 | *(int32_t *)(a1 - 16);
    // branch -> 0x8f60cea8
    while (*(int32_t *)*(int32_t *)(a1 - 12) == *(int32_t *)(a1 - 8)) {
        // 0x8f60cea8
        // continue -> 0x8f60cea8
    }
    // 0x8f60cecc
    return 0;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memalign(size_t alignment, size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// char * strchr(char * s, int c);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:31:24
