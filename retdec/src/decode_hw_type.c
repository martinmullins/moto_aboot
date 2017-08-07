//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __aeabi_idivmod(int32_t a1, int32_t a2);
int32_t __utag_describe(int32_t a1, int32_t a2, int32_t a3);
int32_t arg_free(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t atoull(char * a1, int32_t a2);
int32_t decode_hw_type(char * a1, int32_t a2, int32_t a3);
int32_t display_render_done(int32_t a1, int32_t a2);
int32_t fdt_pack(int32_t a1, int32_t a2, int32_t a3);
int32_t font_draw_char_moto(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t font_draw_char_moto_horizontal(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
void function_8f649e14(void);
void function_8f67b584(void);
int32_t get_timestamp(int32_t a1, int32_t a2, int32_t a3);
int32_t initialize_montgomery_alg(int32_t * a1, int32_t a2, int32_t a3);
int32_t is_charging_enabled(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_get_unlock_data_length(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_is_warranty_void(int32_t a1);
int32_t mot_sst_set_state_values_for_nonhlos(void);
int32_t mot_sst_validate_hash_password(int32_t a1, char * a2);
int32_t mp_mont_sqr(int32_t * a1, int32_t result, int32_t a3);
int32_t pm8x41_gpio_config(int32_t a1, int32_t * a2, int32_t a3);
int32_t pm8x41_set_boot_done(int32_t a1);
int32_t pmic_set_chg_set_mode(char a1, int32_t a2, int32_t a3);
int32_t qtimer_irq(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t SecGetSVNum(uint32_t a1, int32_t a2);
int32_t set_logo(char a1, int32_t a2, int32_t a3);
int32_t sod_update(char * a1, int32_t a2, int32_t a3);
int32_t target_set_prod_id(char * a1, int32_t a2, int32_t a3);
int32_t udc_start(int32_t a1, int32_t a2);
int32_t udc_stop(int32_t a1, int32_t a2);
int32_t wait_clogo(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g16 = 0; // LR
int32_t g17 = 0; // R0
int32_t g18 = 0; // R1
int32_t g19 = 0; // R10
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g27 = 0; // R9
int32_t g1 = -0x16d2bf10; // 0x8f60569c
int32_t g2 = -1; // 0x8f6ac0e0
int32_t g3 = 1; // 0x8f6ac0f0
char * g4 = "\x01"; // 0x8f6afe10
int32_t g5 = 0; // 0x8f6b792c
char * g6; // 0x8f6b794c
int32_t g7 = 0; // 0x8f6b8abc
int32_t g8 = 0; // 0x8f6b8ac0
int32_t g9 = 0; // 0x8f6b8ac4
int32_t (*g10)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) = NULL; // 0x8f6b8ac8
int32_t g11 = 0; // 0x8f6b8acc
int32_t g12 = 0; // 0x8f6e08b8
char * g13; // 0x8f6e08f9
char * g14; // 0x8f6e0b60
int32_t g15 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f61a334 - 0x8f61a377
int32_t decode_hw_type(char * a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)a1; // 0x8f61a334_0
    int32_t result = v1; // 0x8f61a370_22
    switch (v1) {
        case 80: {
            // 0x8f61a354
            // branch -> 0x8f61a36c
            result = 56;
        }
        default: {
            // 0x8f61a36c
            return result;
        }
        case 112: {
            // 0x8f61a354
            // branch -> 0x8f61a36c
            break;
        }
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isdigit(int c);
// int isxdigit(int c);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:31:19
