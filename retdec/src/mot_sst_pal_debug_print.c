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

int32_t add_dump_region(int32_t a1, char * a2);
int32_t add_sp_block(int32_t a1, int32_t a2, int32_t a3);
int32_t alloc_scm_command(int32_t a1, int32_t a2, int32_t a3);
int32_t check_cid_provisioned(void);
int32_t cmd_overlay_command_tokens(char * str6, int32_t a2);
int32_t confession_redirect_to_logger(char a1, int32_t a2, int32_t a3);
int32_t delay(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);
void function_8f67b584(void);
int32_t get_canary(int32_t a1);
int32_t get_db_cid_version_byte(int32_t a1, int32_t a2);
int32_t get_imei_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_reset_gpt(char * a1, int32_t a2);
int32_t get_sku_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_sp_block(int32_t a1, int32_t a2, int32_t a3);
int32_t gic_register_int_handler(uint32_t a1);
int32_t gpio_set_dir(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_set_value(uint32_t a1, int32_t a2, int32_t a3);
int32_t hlos_iface_init(void);
int32_t is_scm_arm_support(int32_t a1);
int32_t mdss_source_pipe_config(int32_t * a1, int32_t * a2, int32_t * a3);
int32_t mot_sst_pal_debug_print(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_cmac_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t oem_smb1359(int32_t a1, int32_t a2, int32_t a3);
int32_t partition_resize(uint32_t a1, int32_t a2, int32_t a3);
int32_t reboot_device(char * a1);
char * scm_random(int32_t a1, int32_t a2);
int32_t sod_dump_to_sd(int32_t a1, int32_t a2);
char * token_present(char * str, char * a2, char * str3);
int32_t unlock_volatile_write_access(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g30 = 0; // LR
int32_t g31 = 0; // R1
int32_t g32 = 0; // R10
int32_t g33 = 0; // R11
int32_t g34 = 0; // R2
int32_t g35 = 0; // R3
int32_t g36 = 0; // R4
int32_t g37 = 0; // R5
int32_t g38 = 0; // R6
int32_t g39 = 0; // R7
int32_t g40 = 0; // R8
int32_t g41 = 0; // R9
int32_t g1 = -0x16d2b010; // 0x8f65597c
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = 0; // 0x8f6b7d48
int32_t g4 = 0; // 0x8f6c02aa
int32_t g5 = 0; // 0x8f6c02ca
char * g6; // 0x8f6e0780
char * g7; // 0x8f6e0788
int32_t g8 = 0; // 0x8f6e0bd4
char * g9; // 0x8f6e12e8
int32_t g10 = 0; // 0x8f6e130c
int32_t g11 = 0; // 0x8f6e1310
int32_t g12 = 0; // 0x8f6e1318
char * g13; // 0x8f6e131c
char * g14; // 0x8f6e1400
int32_t g15 = 0; // 0x8f6e9600
char g16 = 0; // 0x8f70da98
char * g17; // 0x8f70da9b
int32_t g18 = 0; // 0x8f710c38
int32_t g19 = 0; // 0x8f710c3c
int32_t g20 = 0; // 0x8f710c48
int32_t g21 = 0; // 0x8f710c60
char * g22; // 0x8f710c70
int32_t g23 = 0; // 0x8f710e70
char * g24; // 0x8f710e74
int32_t g25 = 0; // 0x8f710e78
int32_t g26 = 0; // 0x8f710e7c
int32_t g27 = 0; // 0x8f7112f4
char * g28; // 0x8f7114b0
int32_t g29 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f672d58 - 0x8f672d93
int32_t mot_sst_pal_debug_print(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g27;
    int32_t v2;
    return print_log(1, a1, v1, v1, g30, v2, 0, 0, 0, 0, 0, 0, 0);
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int rand(void);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// char * strdup(const char * s);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// char * strstr(char * haystack, const char * needle);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:25:52
