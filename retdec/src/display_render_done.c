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

// Address range: 0x8f64d5d8 - 0x8f64d663
int32_t display_render_done(int32_t a1, int32_t a2) {
    // 0x8f64d5d8
    g18 = a2;
    int32_t v1 = g22; // 0x8f64d5d8
    int32_t v2 = g23; // 0x8f64d5d8
    g23 = &g15;
    int32_t v3 = g15;
    int32_t v4;
    int32_t v5 = get_current_panel(a1, a2, g20, v3, a1, v3, v1, v2, g24, g16, v4); // 0x8f64d5e8
    g17 = v5;
    char v6 = *(char *)&g4; // 0x8f64d5f0
    int32_t v7 = v6; // 0x8f64d5f0
    g20 = v7;
    g24 = (int32_t)&g4;
    g22 = v5;
    if (v5 != 0 && v6 != 0) {
        int32_t v8 = thread_sleep(34, a2, v7, (int32_t)&g4, a1, v3, v1, v2); // 0x8f64d610
        g17 = v8;
        int32_t v9 = g22; // 0x8f64d614
        int32_t v10 = *(int32_t *)(v9 + 516); // 0x8f64d614
        g21 = v10;
        if (v10 == 0) {
            int32_t v11 = *(int32_t *)(v9 + 508); // 0x8f64d628
            g21 = v11;
            if (v11 != 0) {
                // 0x8f64d634
                g16 = -0x709b29c8;
                ((int32_t (*)())v11)();
                // branch -> 0x8f64d638
            }
        } else {
            // 0x8f64d620
            g16 = -0x709b29dc;
            ((int32_t (*)())v10)();
            // branch -> 0x8f64d638
        }
        // 0x8f64d638
        *(char *)g24 = 0;
        // branch -> 0x8f64d640
    }
    // 0x8f64d640
    if (v3 != g15) {
        // 0x8f64d650
        __stack_chk_fail();
        // branch -> 0x8f64d654
    }
    // 0x8f64d654
    g23 = v2;
    return g17;
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