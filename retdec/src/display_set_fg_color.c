//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t atoul(char * a1, int32_t a2);
int32_t charger_gone_call_back(int32_t a1, int32_t a2, int32_t a3);
int32_t current_time(void);
int32_t display_set_bg_color(int32_t a1, int32_t a2);
int32_t display_set_fg_color(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt32_to_cpu(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t font_draw_char_moto(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
void function_8f649e14(char * a1, int32_t a2, int32_t a3);
int32_t get_detected_panel(int32_t a1);
int32_t get_next_panel(int32_t a1, int32_t a2);
int32_t get_panel_name_strings(void);
int32_t hab_code_sig_verification(int32_t a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t hab_csf_verification(int32_t * a1);
void hexdump(int32_t * a1, int32_t a2);
int32_t make_product_phone(int32_t a1, int32_t a2);
int32_t mot_sst_pal_get_processor_uid(int32_t a1, int32_t a2);
int32_t mot_sst_pal_get_processor_uid_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t qtimer_uninit(void);
int32_t qup_i2c_write_byte(int32_t a1, int32_t a2, int32_t a3);
int32_t qup_i2c_write_word(int32_t a1, int32_t a2, int32_t a3);
int32_t radio_from_utag(int32_t a1, int32_t a2, int32_t a3);
int32_t reset_current_secure_state(int32_t a1, int32_t a2, int32_t a3);
int32_t scm_arm_support_available(int32_t a1, int32_t a2, int32_t a3);
int32_t scm_call2(int32_t * a1, int32_t a2, int32_t a3);
int32_t set_panel_supplier_id(int32_t a1);
int32_t target_disable_resets(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t target_mmc_device(void);
int32_t target_radio(void);
int32_t temp_timer_func(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

bool g27 = false; // LR
int32_t g28 = 0; // R0
int32_t g29 = 0; // R1
int32_t g30 = 0; // R2
int32_t g31 = 0; // R4
int32_t g32 = 0; // R5
int32_t g33 = 0; // R6
int32_t g34 = 0; // R7
int32_t g35 = 0; // R8
int32_t g1 = -0x16d2be0d; // 0x8f6039b8
char g2[2] = "."; // 0x8f688719
char * g3 = "\xda\x95\x1b\x6d\xdc\x97\x07\xce\x40\xea\x53\x0f\x90\x20\x91\xb5\x20\xdd\x2f\xf3\x0d\x0e\x0f"; // 0x8f6a6af2
char * g4 = "\x01"; // 0x8f6ab02c
char * g5 = "\x01"; // 0x8f6ab030
char * g6 = "\x01"; // 0x8f6ab034
int32_t g7 = 0xffff; // 0x8f6ac218
int32_t g8 = 0xffffff; // 0x8f6afe08
int32_t g9 = 0; // 0x8f6b5064
int32_t g10 = 0; // 0x8f6b5080
int32_t g11 = 0; // 0x8f6c003c
char * g12; // 0x8f6c0040
int32_t g13 = 0; // 0x8f6e0c34
char * g14; // 0x8f710a25
int32_t g15 = 0; // 0x8f7112dc
int32_t g16 = 0; // 0x8f7112f4
int32_t g17 = 0; // 0x8f711550
int32_t g18 = 0; // 0x8f711554
int32_t g19 = 0; // 0x8f7125f0
char g20 = 0; // 0x8f7125f4
char g21 = 0; // 0x8f7125f5
char * g22; // 0x8f7125f6
int32_t g23 = 0; // 0x8f7125fc
int32_t g24 = 0; // 0x8f7129d8
int32_t g25 = 0; // 0x8f7129dc
int32_t g26 = 0; // 0x8f712e1c

// ------------------------ Functions -------------------------

// Address range: 0x8f64ddd4 - 0x8f64de0f
int32_t display_set_fg_color(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f64ddd4
    g8 = a1;
    return g16;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// void free(void * ptr);
// int isdigit(int c);
// int isprint(int c);
// int isxdigit(int c);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int printf(const char * restrict format, ...);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// int tolower(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:21:17
