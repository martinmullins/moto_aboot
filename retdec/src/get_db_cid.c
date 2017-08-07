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

int32_t __utags_clear(int32_t a1, int32_t a2);
int32_t __utags_walk(int32_t a1, int32_t (*a2)(int32_t, int32_t, int32_t), int32_t a3);
int32_t clear_for_auto_detect(void);
char * dbval_memcpy(char * a1, char * a2, int32_t a3);
char * dbval_memset(char * a1, int32_t a2, int32_t a3);
int32_t get_db_cid(void);
int32_t get_db_cid_feature_flag_byte(int32_t a1);
int32_t gfx_create_surface(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t gfx_flush_rows(int32_t * a1, int32_t a2, int32_t a3);
int32_t hab_assert_verification(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_install_super_root_key(char * a1, int32_t a2);
int32_t logger_early_init(int32_t a1, int32_t a2);
int32_t logger_init(char * a1, int32_t a2);
int32_t mcs_multi_shift_left(int32_t * a1, int32_t a2, uint32_t a3);
int32_t mcs_multi_shift_right(int32_t a1, int32_t a2, uint32_t a3);
int32_t mdss_intf_fetch_start_config(int32_t * a1, int32_t a2);
int32_t mdss_intf_tg_setup(int32_t * a1);
int32_t mp_copy(int32_t a1, int32_t a2, int32_t a3);
int32_t mpint_to_bytes(char * a1, int32_t a2, int32_t a3);
int32_t need_auto_detect(void);
int32_t partition_get_index(int32_t a1, int32_t a2);
int32_t partition_get_size(uint32_t a1, int32_t a2);
int32_t qup_i2c_read_byte(int32_t a1, int32_t a2, int32_t a3);
int32_t qup_i2c_read_word(int32_t a1, int32_t a2, int32_t a3);
int32_t smb135x_disable_usbin_valid_irq(void);
int32_t smb135x_enable_usbin_valid_irq(int32_t a1);
void thread_become_idle(int32_t a1, int32_t a2, int32_t a3);
int32_t thread_set_priority(int32_t a1);
int32_t validate_boot_components_version(int32_t a1);
int32_t validate_hw_type(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g36 = 0; // LR
int32_t g37 = 0; // R0
int32_t g38 = 0; // R1
int32_t g39 = 0; // R2
int32_t g40 = 0; // R3
int32_t g41 = 0; // R4
int32_t g42 = 0; // R5
int32_t g43 = 0; // R6
int32_t g44 = 0; // R7
int32_t g45 = 0; // R8
int32_t g46 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = -0x1a603fcc; // 0x8f648b5c
int32_t g3 = -0x16d2b80d; // 0x8f648b9c
int32_t g4 = -0x16d2be0d; // 0x8f648ca4
int32_t g5 = -0x16d2b80d; // 0x8f648d44
int32_t g6 = -0x1a603f88; // 0x8f648e48
int32_t g7 = -0x16d2b010; // 0x8f648ecc
int32_t g8 = -0x16d2b009; // 0x8f649098
int32_t g9 = -0x1a603f5c; // 0x8f64923c
int32_t g10 = -0x1a603fb0; // 0x8f6492f4
int32_t g11 = -0x16d2b810; // 0x8f656af0
char * g12 = "\xff\xff"; // 0x8f6ac218
int32_t g13; // 0x8f6afe74
int16_t * g14 = (int16_t *)0xffff; // 0x8f6affa4
char * g15; // 0x8f6e06ac
char * g16; // 0x8f6e06ad
int32_t g17 = 0; // 0x8f6e0ba4
int32_t g18 = 0; // 0x8f6e1310
int32_t g19 = 0; // 0x8f6e1318
char * g20; // 0x8f6ed800
char * g21; // 0x8f6ed801
char g22 = 0; // 0x8f70da9a
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114a8
int32_t g25 = 0; // 0x8f7114ac
int32_t g26 = 0; // 0x8f711550
int32_t g27 = 0; // 0x8f711554
char * g28; // 0x8f712e1c
char * g29; // 0x8f712e20
int16_t g30 = 0; // 0x8f712e24
int16_t g31 = 0; // 0x8f712e26
int32_t g32 = 0; // 0x8f712e28
char * g33; // 0x8f712e2c
int32_t g34 = 0; // 0x8f712f2c
int32_t g35 = 0; // 0x8f71302c

// ------------------------ Functions -------------------------

// Address range: 0x8f662564 - 0x8f66259f
int32_t get_db_cid(void) {
    // 0x8f662564
    return (int32_t)*(int16_t *)&g14;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:08:13
