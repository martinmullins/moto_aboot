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

int32_t __utag_read(char * a1, int32_t a2, char * a3, int32_t a4);
int32_t __utag_sizeof(char * a1, int32_t a2, int32_t a3);
int32_t clock_ce_enable(int32_t a1);
int32_t connect_to_key(int32_t a1);
int32_t dbval_cid_swap(int32_t a1, int32_t a2, char * str);
int32_t dbval_finalise_cid_datablock(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_provision_cid_store(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t dbval_read_partition(char * a1, int32_t a2);
int32_t disconnect_from_key(int32_t a1, int32_t a2);
int32_t fdt32_to_cpu_101(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fdt_node_offset_by_compatible(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt_num_mem_rsv(int32_t a1);
int32_t fdt_string(int32_t a1, int32_t a2);
void function_8f64b638(void);
void function_8f64b6a0(char * a1, char * str, int32_t a3);
int32_t gcc_dsi_clocks_enable(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_sn_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t insert_in_run_queue_tail(int32_t a1, int32_t a2);
int32_t isl98611_config(char a1);
int32_t isl98611_set_brightness(int32_t a1, int32_t a2, int32_t a3);
int32_t keys_init(int32_t a1, int32_t a2, int32_t a3);
char * mbm_init(void);
int32_t mdp_dsi_cmd_off(int32_t a1, int32_t a2);
int32_t mdp_dsi_video_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdp_dsi_video_off(int32_t a1, int32_t a2, int32_t a3);
char * mdss_vbif_qos_remapper_setup(int32_t a1);
int32_t mmc_sdhci_erase(char * a1, int32_t result, uint32_t a3, uint32_t a4);
char * mmc_sdhci_write(char * a1, int32_t a2, int32_t a3);
int32_t mutex_release(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g20 = 0; // R1
int32_t g21 = 0; // R2
int32_t g22 = 0; // R3
int32_t g23 = 0; // R4
int32_t g24 = 0; // R5
int32_t g25 = 0; // R6
int32_t g26 = 0; // R7
int32_t g27 = 0; // R8
int32_t g28 = 0; // R9
int32_t g1 = 0x65440030; // 0x8f69c66f
int32_t g2 = 1; // 0x8f6ac0f0
char * g3 = "\xd4\xc7\x61\x8f\x90\x15\x60\x8f"; // 0x8f6ac19c
int32_t g4 = 0; // 0x8f6c0060
int32_t g5 = 0; // 0x8f6c0064
int32_t g6 = 0; // 0x8f6c0298
int32_t g7 = 0; // 0x8f6e0ae4
int32_t g8 = 0; // 0x8f6e0ae8
char * g9; // 0x8f6e0aec
int32_t g10 = 0; // 0x8f6e0af0
char * g11; // 0x8f6e0af4
char * g12; // 0x8f6e0b34
int32_t g13 = 0; // 0x8f70dab8
char * g14; // 0x8f70dabc
int32_t g15 = 0; // 0x8f70dac0
char * g16; // 0x8f70dac4
int32_t g17 = 0; // 0x8f7112f4
int32_t g18 = 0; // 0x8f7114ac
int32_t g19 = 0; // 0x8f7125d0

// ------------------------ Functions -------------------------

// Address range: 0x8f662d30 - 0x8f662e5f
int32_t dbval_provision_cid_store(char * a1, char * a2, int32_t a3, int32_t a4) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = (int32_t)a2;
    int32_t v3 = g17;
    char * v4 = dbval_malloc(v1 & -0x10000 | 2630, v2); // 0x8f662d50
    *(char *)v2 = 18;
    int32_t v5 = (int32_t)v4; // R5
    int32_t result; // 0x8f662e30
    if (v4 == NULL) {
        // if_8f662d60_0_true
        result = 85;
        // branch -> 0x8f662e2c
    } else {
        int32_t v6 = (int32_t)*(char *)v1; // 0x8f662d68
        int32_t v7 = v1 + 154; // R8
        char v8 = *(char *)(v1 + 1); // 0x8f662d70
        int32_t v9 = ((int32_t)v8 | 256 * v6) - 2408 + v1; // R7
        dbval_debug_print2((int32_t)"dbval_provision_cid_store - Call Validate DB", v2, v6);
        int32_t v10 = v9; // R1
        int32_t v11 = 240; // R2
        g22 = v2;
        int32_t v12;
        int32_t v13 = dbval_validate_datablock(v7, v9, 240, v2, a3, v2, a3, v3, g23, g24, g25, g26, g27, g28, 0, 0, v12, 0, 0, 0, 0); // 0x8f662da0
        int32_t v14 = v13; // R4
        if (v13 == 15) {
            int32_t v15 = 17; // R3
            *(char *)v2 = 17;
            dbval_memcpy(v5, v7, 226, v15);
            v10 = v9;
            v11 = 2404;
            dbval_memcpy(v5 + 226, v9, 2404, v15);
            dbval_finalise_cid_datablock(dbval_debug_print2((int32_t)"dbval_provision_cid_store - finalise cid datablock", v10, v11), v10, v11);
            dbval_debug_print2((int32_t)"dbval_provision_cid_store - Write CID DB", g20, g21);
            v10 = v5;
            int32_t v16 = g21 & -0x10000 | 2630; // 0x8f662e00
            v11 = v16;
            int32_t v17 = dbval_write_datablock(8, v5, v16, g22, a3); // 0x8f662e04
            v14 = v17;
            if (v17 == 15) {
                // 0x8f662e14
                g22 = 0;
                *(char *)v2 = 0;
                dbval_debug_print2((int32_t)"dbval_provision_cid_store - Success", v10, v11);
                // branch -> 0x8f662e24
            }
        }
        // 0x8f662e24
        dbval_free(v5, v10, v11, g22);
        result = v14;
        // branch -> 0x8f662e2c
    }
    // 0x8f662e2c
    if (v3 != g17) {
        // 0x8f662e40
        __stack_chk_fail();
        // branch -> 0x8f662e44
    }
    // 0x8f662e44
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// char * asctime(const struct tm * tp);
// void free(void * ptr);
// struct tm * gmtime(const time_t * timer);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:23:14
