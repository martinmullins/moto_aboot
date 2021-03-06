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

int32_t default_uart_flush_log(void);
int32_t flush_logs(int32_t a1, int32_t a2);
int32_t get_first_ui_log(int32_t a1, int32_t a2, int32_t a3);
int32_t get_log_line_from_buffer(void);
int32_t get_next_ui_log(int32_t a1, int32_t a2, int32_t a3);
char * get_ram(char * a1, int32_t a2);
int32_t lock_ui_log_list(int32_t a1, int32_t a2, int32_t a3);
int32_t on_loglevel_utag_change(char * a1, char * a2, uint32_t a3);
int32_t remove_oldest_log(int32_t result);
int32_t set_logger_level(char * a1, char a2, int32_t a3);
char * token_present(char * str, char * a2, char * str3);
int32_t type_atoi_105(char * str, int32_t a2, int32_t a3);
int32_t uart_logger_init(int32_t a1);
int32_t uart_logger_output(char * a1, int32_t a2);
int32_t ui_logger_capacity_changed(int32_t a1, int32_t a2, int32_t a3);
int32_t ui_logger_init(int32_t a1, int32_t a2);
int32_t ui_logger_output(char * a1, int32_t a2, int32_t a3);
int32_t unlock_ui_log_list(int32_t a1, int32_t a2, int32_t a3);
char * utag_autodetect_cb(char * a1, char * a2, int32_t * a3);

// --------------------- Global Variables ---------------------

int32_t g29 = 0; // LR
int32_t g30 = 0; // R0
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
int32_t g1 = -0x1a60df84; // 0x8f654f64
int32_t g2 = -0x16d2bf90; // 0x8f655804
int32_t (*g3)(int32_t, int32_t) = (int32_t (*)(int32_t, int32_t))-0x16d2bf90; // 0x8f6558e8
char g4[2] = ","; // 0x8f682749
int32_t g5 = 0x2020003a; // 0x8f686ac4
char * g6; // 0x8f6a34b1
int32_t g7 = 0x70750020; // 0x8f6a4f1e
int32_t g8; // 0x8f6afe74
char * g9 = "\x01"; // 0x8f6afe80
char g10 = 1; // 0x8f6afeac
char * g11 = "\x06"; // 0x8f6afee0
int32_t g12 = 0; // 0x8f6afee4
int32_t g13 = 100; // 0x8f6aff00
int32_t g14 = 0; // 0x8f6aff04
int32_t g15 = 0; // 0x8f6aff08
char g16 = 0; // 0x8f6aff0c
int32_t (*g17)() = NULL; // 0x8f6aff2c
int32_t g18 = 0; // 0x8f6b8ad8
int32_t g19 = 0; // 0x8f6ed804
char * g20; // 0x8f6ed808
char * g21; // 0x8f6ed80c
int32_t g22 = 0; // 0x8f6ed810
int32_t g23 = 0; // 0x8f6ed814
int32_t g24 = 0; // 0x8f6ed818
char * g25; // 0x8f6ed834
int32_t g26 = 0; // 0x8f6ed838
int32_t g27 = 0; // 0x8f7112f4
char * g28; // 0x8f711464

// ------------------------ Functions -------------------------

// Address range: 0x8f657000 - 0x8f65703b
int32_t lock_ui_log_list(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g27;
    int32_t v2;
    return mutex_acquire((int32_t)&g12, a2, v1, v1, g29, v2, 0, 0, 0, 0, 0);
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strcat(char * restrict dest, const char * restrict src);
// int strcmp(const char * s1, const char * s2);
// char * strdup(const char * s);
// size_t strlen(const char * s);
// char * strncat(char * restrict dest, const char * restrict src, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 19
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:24
