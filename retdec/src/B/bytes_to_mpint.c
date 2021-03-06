//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __gnu_uldivmod_helper(uint32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t * a5, int32_t a6, int32_t a7);
int32_t bytes_to_mpint(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_config_mmc(int32_t a1, int32_t a2);
int32_t clock_config_uart_dm(void);
int32_t clock_lib2_rcg_set_rate(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t clock_lib2_rcg_set_rate_mnd(int32_t * a1, int32_t a2);
int32_t fastboot_get_reason(void);
int32_t get_accessory_type(int32_t a1);
int32_t gpio_config_factory_cable(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_unlock(int32_t a1, int32_t a2);
char * init_temp_monitoring(void);
int32_t is_charger_bq24296(int32_t a1, int32_t a2);
int32_t is_charger_smb1359(int32_t a1, int32_t a2);
int32_t is_launch_to_fastboot_log(void);
int32_t is_stick_to_fastboot_mode(int32_t a1, int32_t a2);
int32_t is_warm_reset(int32_t a1);
int32_t mcs_DER_decodeContents(int32_t a1);
int32_t mcs_DER_decodeItem(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_mp_subb(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_unit_modular_inverse(int64_t a1);
int32_t mipi_mot_panel_apply_dt_cfg(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_mot_panel_off(int32_t a1, int32_t a2, int32_t a3);
int32_t mp_mont_prod(int32_t * a1, int32_t result, int32_t a3, int32_t a4);
int32_t msm_gpio_int_uninit(int32_t a1);
int32_t report_usbin_uv_status(int32_t a1, int32_t a2, int32_t a3);
int32_t set_accessory_type(int32_t a1);
int32_t thread_block(int32_t a1, int32_t a2);
int32_t thread_preempt(void);
int32_t write_protect_enabled_on_eng_hw(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // LR
int32_t g23 = 0; // R0
int32_t g24 = 0; // R1
int32_t g25 = 0; // R12
int32_t g26 = 0; // R2
int32_t g27 = 0; // R4
int32_t g28 = 0; // R5
int32_t g29 = 0; // R6
int32_t g30 = 0; // R7
int32_t g31 = 0; // R8
int32_t g1 = -0x16d2be0d; // 0x8f6039b8
int32_t g2 = -0x16d2bfed; // 0x8f627020
int32_t g3 = -0x16d2be0d; // 0x8f6385e0
int32_t g4 = -0x16d2bfc9; // 0x8f6387c0
int32_t g5 = -0x16d2bc09; // 0x8f638ab0
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = 4; // 0x8f6acb30
char * g9 = "\n"; // 0x8f6afe00
char * g10; // 0x8f6b5080
char * g11; // 0x8f6b509c
char * g12; // 0x8f6c02dd
char * g13; // 0x8f6c02e4
int32_t g14 = 0; // 0x8f6c02ec
char * g15; // 0x8f6c032c
char * g16; // 0x8f6e069e
char * g17; // 0x8f6e06a5
char * g18; // 0x8f6e06a7
char * g19; // 0x8f6e06a8
int32_t g20 = 0; // 0x8f7112f4
int32_t g21 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f670d30 - 0x8f670dbb
int32_t bytes_to_mpint(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a3; // 0x8f670d54
    if (a3 < 0) {
        // if_8f670d4c_0_true
        v1 = a3 + 3;
        // branch -> after_if_8f670d4c_0
    }
    int32_t v2 = v1 / 4; // 0x8f670d54
    int32_t result = 4 * v2 + a1; // R0
    if (v1 > 3) {
        int32_t v3 = 0;
        int32_t v4 = 0; // 0x8f670d88
        while (true) {
            int32_t v5 = v3; // 0x8f670d78
            // branch -> 0x8f670d6c
            int32_t v6; // R12
            int32_t v7; // 0x8f670d7c
            for (uint32_t i = 0; i < 3; i++) {
                // 0x8f670d6c
                v7 = 256 * ((int32_t)*(char *)(i + a2) | v5);
                v6 = v7;
                // PHI copies at the loop end
                v5 = v7;
                // loop 0x8f670d6c end
            }
            int32_t v8 = result - 4; // 0x8f670d94
            result = v8;
            *(int32_t *)v8 = (int32_t)*(char *)(a2 + 3) | v7;
            int32_t v9 = v4 + 1; // 0x8f670d60
            if (v9 >= v2) {
                // 0x8f670d60
                // branch -> 0x8f670d9c
                // 0x8f670db0
                return result;
            }
            // 0x8f670d84
            v3 = v6;
            a2 += 4;
            v4 = v9;
            // branch -> 0x8f670d68
        }
    }
    // 0x8f670db0
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);
// size_t strnlen(const char * string, size_t maxlen);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:23:15
