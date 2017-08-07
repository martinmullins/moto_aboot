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

int32_t fboot_cmd_download_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t fboot_usb_init(int32_t a1, int32_t a2, int32_t a3);
int32_t get_barcode_width(void);
int32_t get_font_type(int32_t a1, int32_t a2);
int32_t get_imei_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_signature_size(int32_t a1, int32_t a2);
int32_t get_sn_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_tz_buffer(void);
char * hwrev_from_utag(void);
int32_t isl98611_masked_write_reg(int32_t a1, int32_t a2, int32_t a3);
int32_t isl98611_write_reg(int32_t a1, int32_t a2);
int32_t mcs_habp_rsa_crt_large(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_habp_rsa_crt_med(int32_t a1, int32_t a2, int32_t a3);
char * mmc_get_wp_status(char * a1, int32_t a2, int32_t a3);
int32_t mmc_sdhci_erase(char * a1, int32_t result, uint32_t a3, uint32_t a4);
int32_t mot_sst_is_locked(void);
char * mot_sst_pal_get_flash_uid(char * a1, int32_t a2);
int32_t mot_sst_pal_get_flash_uid_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_read_token(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mot_sst_pal_write_token(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mot_sst_set_state_values_for_nonhlos(void);
int32_t pm8x41_gpio_config(int32_t a1, int32_t * a2, int32_t a3);
int32_t pm8x41_gpio_set(int32_t a1, int32_t a2);
int32_t SecReadFuseQC(int32_t a1);
int32_t security_policy_init(char * a1, int32_t a2, int32_t a3);
int32_t set_blankflash_magic(char * a1, int32_t a2);
int32_t target_get_hlos_subtype(int32_t a1);
int32_t target_hwrev(void);
int32_t udc_request_dequeue(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_request_free(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g21 = 0; // R0
int32_t g22 = 0; // R1
int32_t g23 = 0; // R2
int32_t g24 = 0; // R3
int32_t g25 = 0; // R4
int32_t g26 = 0; // R5
int32_t g27 = 0; // R6
int32_t g28 = 0; // R7
int32_t g29 = 0; // R8
int32_t g30 = 0; // R9
int32_t g1 = -0x1a60cfb0; // 0x8f675474
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = -0x709d28c8; // 0x8f6ac1cc
int32_t g4 = -1; // 0x8f6ac208
int32_t g5 = 1; // 0x8f6b0044
int32_t g6 = 0; // 0x8f6b7a20
int32_t g7 = 0; // 0x8f6b7a24
int32_t g8 = 0; // 0x8f6c0000
int32_t g9 = 0; // 0x8f6c0298
int32_t g10 = 0; // 0x8f6c02ca
int32_t g11 = 0; // 0x8f6c0650
int32_t g12 = 0; // 0x8f6c0654
int32_t g13 = 0; // 0x8f6c065c
int32_t g14 = 0; // 0x8f6c0664
int32_t g15 = 0; // 0x8f6c0668
int32_t g16 = 0; // 0x8f6c066c
int32_t g17 = 0; // 0x8f6e0ae8
char * g18; // 0x8f6e0aec
int32_t g19 = 0; // 0x8f7112f4
int32_t g20 = 0; // 0x8f711534

// ------------------------ Functions -------------------------

// Address range: 0x8f631b24 - 0x8f631bb3
int32_t get_font_type(int32_t a1, int32_t a2) {
    int32_t v1 = g19;
    int32_t v2 = get_device_setting_offset((int32_t)"font_setting", a2, g23, v1, a1, v1, g23, g25); // 0x8f631b3c
    int32_t v3;
    int32_t result;
    if (v2 > -1) {
        int32_t v4 = get_string_prop((int32_t)"font", v2, g23, v1, a1, v1, g23, g25); // 0x8f631b60
        if (v4 == 0) {
            // 0x8f631b70
            print_log(2, (int32_t)"Not found setting for %s\n", (int32_t)"font", v1, a1, v1, g23, g25, g26, 0, v3, 0, 0);
            result = 0;
            // branch -> 0x8f631b84
        } else {
            result = v4;
        }
    } else {
        // 0x8f631b48
        print_log(-1, (int32_t)"Font not set!\n", g23, v1, a1, v1, g23, g25, g26, 0, v3, 0, 0);
        result = 0;
        // branch -> 0x8f631b84
    }
    // 0x8f631b84
    if (v1 != g19) {
        // 0x8f631b94
        __stack_chk_fail();
        // branch -> 0x8f631b98
    }
    // 0x8f631b98
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:10:20
