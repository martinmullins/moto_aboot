//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int32_t copy_git_line(int32_t * a1, int32_t a2, int32_t a3);
int32_t getvar_aboot_git(int32_t a1, int32_t a2);
int32_t getvar_current_time(char * str, int32_t a2, int32_t a3);
int32_t getvar_emmc(void);
int32_t getvar_frp_state(char * a1);
int32_t getvar_hyp_git(int32_t a1, int32_t a2);
int32_t getvar_max_download_size(char * str, int32_t a2);
int32_t getvar_max_sparse_size(char * str, int32_t a2);
int32_t getvar_mot_sst(char * str, int32_t a2, int32_t a3);
int32_t getvar_ram(int32_t a1, int32_t a2);
int32_t getvar_reason(int32_t a1, int32_t a2, int32_t a3);
int32_t getvar_rpm_git(int32_t a1, int32_t a2);
int32_t getvar_sbl1_git(int32_t a1, int32_t a2);
int32_t getvar_tz_git(int32_t a1, int32_t a2);
char * getvar_uid(int32_t a1);
int32_t getvar_version(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g6 = 0; // R4
int32_t g1 = -0x1a60cfc8; // 0x8f62bd74
int32_t g2 = 0; // 0x8f7112f4
int32_t g3 = 0; // 0x8f711464
int32_t g4 = 0; // 0x8f711500
int32_t g5 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f62bf94 - 0x8f62bfdf
int32_t getvar_max_download_size(char * str, int32_t a2) {
    // 0x8f62bf94
    sprintf(str, "%u", g4);
    // 0x8f62bfcc
    return 1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// char * asctime(const struct tm * tp);
// struct tm * gmtime(const time_t * timer);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// time_t time(time_t * timer);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 16
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:40:35
