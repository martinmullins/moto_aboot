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

int32_t board_foundry_id(int32_t a1, int32_t a2, int32_t a3);
int32_t board_hardware_subtype(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_clear(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_gather(int32_t a1, int32_t a2);
int32_t display_draw_horizontal_line(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_draw_vertical_line(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt_get_property(int32_t a1, int32_t a2, char * str, int32_t a4);
int32_t fdt_get_property_namelen(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t freeset(int32_t a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t get_char_array_prop(char a1, int32_t a2, int32_t a3, int32_t a4);
char * get_hw_id_by_rev(char * a1, int32_t a2);
int32_t get_validated_piv_size(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_oem_command_lock(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_verified(int32_t a1, int32_t a2);
int32_t is_emu_charger_present(int32_t a1, int32_t a2, int32_t a3);
int32_t is_inductive_charger_present(int32_t a1, int32_t a2, int32_t a3);
int32_t is_resin_n_asserted(void);
int32_t mipi_dsi_calibration(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_uninit(int32_t a1);
int32_t mmc_read(int64_t a1, int32_t a2);
int32_t mmc_sdhci_get_wp_group_size(void);
int32_t mmc_zero_out(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_resin_status(int32_t a1, int32_t a2);
int32_t power_check(int32_t a1, int32_t a2);
int32_t qgic_init(void);
int32_t SecTest(int32_t a1, int32_t a2);
int32_t try_load_clogo(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t validate_boot_components_version(int32_t a1);
int32_t wait_clogo(int32_t a1, int32_t a2, int32_t a3);
int32_t write_protect_partition(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g20 = 0; // LR
int32_t g21 = 0; // R0
int32_t g22 = 0; // R1
int32_t g23 = 0; // R2
int32_t g24 = 0; // R3
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
bool g1 = false; // flagc
int32_t g2 = -0x16d2bc09; // 0x8f638ab0
int32_t g3 = -0x16d2b010; // 0x8f639250
char * g4 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g5 = 0; // 0x8f6ac06c
int32_t g6 = 0; // 0x8f6ac078
char * g7 = "\n"; // 0x8f6afe00
char * g8; // 0x8f6e06a0
int32_t g9 = 0; // 0x8f6e08b8
int32_t g10 = 0; // 0x8f6e0918
int32_t g11 = 0; // 0x8f6e0c00
int32_t g12 = 0; // 0x8f6e0c08
int32_t g13 = 0; // 0x8f6e0c38
char * g14; // 0x8f6e0c40
char * g15; // 0x8f6e12ec
int32_t g16 = 0; // 0x8f6e12f0
int32_t g17 = 0; // 0x8f70da60
int32_t g18 = 0; // 0x8f70f724
char * g19; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f65b224 - 0x8f65b25f
int32_t get_validated_piv_size(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f65b250
    return g17;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:40:14