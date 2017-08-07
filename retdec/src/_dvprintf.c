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

int32_t _dvprintf(char * format);
int32_t _panic(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t gcc_dsi_clocks_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t get_bool_prop(int32_t a1, int32_t a2);
int32_t get_reset_gpt(char * a1, int32_t a2);
void gic_platform_fiq(int32_t a1);
int32_t gic_platform_irq(void);
int32_t isl98611_masked_write_reg(int32_t a1, int32_t a2, int32_t a3);
int32_t isl98611_set_brightness(int32_t a1, int32_t a2, int32_t a3);
int32_t mbm_fdt_get_int(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_initialize_montgomery_alg(int32_t * a1, int32_t a2);
int32_t mcs_memclear(char * a1, int32_t a2, int32_t a3);
int32_t mcs_memmove(uint32_t a1, uint32_t a2, int32_t a3);
int32_t mcs_mp_mont_sqr(int32_t * a1, int32_t a2, int32_t a3);
int32_t mdss_bus_clocks_enable(void);
int32_t mdss_dsi_panel_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_dsi_panel_pre_initialize(int32_t a1, int32_t a2, int32_t a3);
int32_t mmc_get_eraseunit_size(int32_t a1, int32_t a2);
int32_t mmc_get_psn(int32_t a1, int32_t a2);
int32_t mot_sst_get_unlock_data(char * a1, char * a2);
int32_t mot_sst_get_unlock_data_length(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_gen_aes_cmac(char * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_cmac_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t panel_manager_auto_detect_on(int32_t a1, int32_t a2, int32_t a3);
int32_t panel_manager_set_cont_splash(char a1, int32_t a2, int32_t a3);
int32_t parse_setting_list(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t qgic_init(void);
int32_t set_power_supply_list(int32_t a1, int32_t a2, int32_t a3);
int32_t write_gpt(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g21 = 0; // LR
int32_t g22 = 0; // R0
int32_t g23 = 0; // R1
int32_t g24 = 0; // R10
int32_t g25 = 0; // R2
int32_t g26 = 0; // R4
int32_t g27 = 0; // R5
int32_t g28 = 0; // R6
int32_t g29 = 0; // R7
int32_t g30 = 0; // R8
int32_t g31 = 0; // R9
int32_t g1 = -0x1201f230; // 0x8f68ac00
int32_t g2 = 0x65440030; // 0x8f69c66f
char * g3[7] = {
    "utags",
    "pds",
    "persist",
    "mdm1hob",
    "sp",
    "cid",
    "hw"
}; // 0x8f6a2b9c
char * g4 = "\x01"; // 0x8f6ac220
int32_t g5 = 0; // 0x8f6b7d48
int32_t g6 = 0; // 0x8f6b8c94
char * g7; // 0x8f6e06ad
int32_t g8 = 0; // 0x8f6e0ae8
char * g9; // 0x8f6e0aec
int32_t g10 = 0; // 0x8f6e130c
char * g11; // 0x8f6e1314
int32_t g12 = 0; // 0x8f6e1318
char * g13; // 0x8f6e131c
int32_t g14 = 0; // 0x8f6e1320
int32_t g15 = 0; // 0x8f6e1324
char * g16; // 0x8f6e1400
char * g17; // 0x8f6e9404
char * g18; // 0x8f6e9408
int32_t g19 = 0; // 0x8f7112f4
int32_t g20 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f648454 - 0x8f6484ab
int32_t _dvprintf(char * format) {
    int32_t str;
    int32_t chars_printed = vsnprintf((char *)&str, 512, format, g23); // 0x8f648478
    int32_t v1;
    _dputs((int32_t)&str, 512, (int32_t)format, g23, v1, str, 0);
    // 0x8f6484a0
    return chars_printed;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:40:00
