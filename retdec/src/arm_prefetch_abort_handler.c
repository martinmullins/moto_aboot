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

int32_t arm_mmu_map_section(int32_t a1, uint32_t a2, int32_t a3);
void arm_prefetch_abort_handler(void);
int32_t disable_fastchg_irq(void);
int32_t disable_kpdpwr_n_irq(int32_t a1);
int32_t display_get_screen_height(int32_t a1, int32_t a2, int32_t a3);
int32_t draw_text_in_portrait(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t enable_fastchg_irq(int32_t a1);
int32_t enable_kpdpwr_n_irq(int32_t a1);
int32_t enable_resin_n_irq(int32_t a1);
int32_t fboot_cmd_download_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_cmd_multiflash_post_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t font_draw_char(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t font_set_type(char * str, int32_t a2, int32_t a3);
void function_8f649ffc(void);
void function_8f64a048(int32_t a1, int32_t a2, int32_t a3);
int32_t get_line_width(int32_t a1, int32_t a2, int32_t a3);
int32_t is_gpio_107_asserted(int32_t a1, int32_t a2);
int32_t keys_get_state(uint32_t a1);
int32_t keys_post_event(uint32_t a1, int32_t a2);
int32_t logger_early_init(int32_t a1, int32_t a2);
int32_t mask_interrupt(int32_t a1);
char * mot_sst_pal_get_flash_uid(char * a1, int32_t a2);
int32_t mot_sst_pal_get_sbd_dis_otp_bit(char * a1, int32_t a2, int32_t a3);
void platform_fiq(void);
int32_t register_msm_gpio_int_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t set_line_width(int32_t a1);
int32_t set_logger_status(int32_t a1, char a2);
int32_t shutdown_modem(char * a1, int32_t a2, int32_t a3);
int32_t target_reboot_device(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g25 = 0; // LR
int32_t g26 = 0; // R0
int32_t g27 = 0; // R1
int32_t g28 = 0; // R10
int32_t g29 = 0; // R2
int32_t g30 = 0; // R3
int32_t g31 = 0; // R4
int32_t g32 = 0; // R5
int32_t g33 = 0; // R6
int32_t g34 = 0; // R7
int32_t g35 = 0; // R8
int32_t g36 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f645680
int32_t g2 = -0x16d2bfed; // 0x8f645700
int32_t g3 = 0; // 0x8f69eef0
int32_t g5 = 0x10100; // 0x8f6a9f58
int32_t g6 = 1; // 0x8f6ac0f0
int32_t g7 = 3; // 0x8f6afe18
int32_t g8; // 0x8f6afe74
int32_t g9 = 0; // 0x8f6b505c
int32_t g10 = 0; // 0x8f6bc000
int32_t g11 = 0; // 0x8f6e0af4
char * g12; // 0x8f6e0b34
int32_t g13 = 0; // 0x8f6e0b90
int32_t g14 = 0; // 0x8f6e0be4
int32_t g15 = 0; // 0x8f6e0c00
int32_t g16 = 0; // 0x8f6e0c04
int32_t g17 = 0; // 0x8f6e0c08
int32_t g18 = 0; // 0x8f6e0c18
int32_t g19 = 0; // 0x8f6e0c1c
int32_t g20 = 0; // 0x8f6e0c38
char * g21; // 0x8f6e0c40
char * g22; // 0x8f6ed801
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7125d0
int32_t * g4 = &g3; // 0x8f6a9eec

// ------------------------ Functions -------------------------

// Address range: 0x8f619948 - 0x8f61996b
void arm_prefetch_abort_handler(void) {
    int32_t v1 = g23;
    exception_die(g26, -4, (int32_t)"prefetch abort, halting\n", v1, g26, v1, g29, g25, 0, 0, 0, 0, 0, 0);
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:49:10
