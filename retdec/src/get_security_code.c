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

int32_t clock_lib2_vote_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_vote_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_sigrsp_expected_length(uint32_t a1, int32_t a2);
int32_t dbval_sigrsp_verify_outer(char * a1, int32_t a2, int32_t a3);
int32_t dev_tree_add_mem_info(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t display_clear_rect(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_clear_rows(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t display_get_left_lines(int32_t a1);
int32_t fdt_first_property_offset(void);
int32_t fdt_next_property_offset(int32_t a1, int32_t a2, int32_t a3);
void function_8f64a0c8(void);
void function_8f64a108(int32_t a1, int32_t a2, int32_t a3);
int32_t get_security_code(void);
int32_t handle_fboot_command_flash(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t is_display_on(void);
int32_t kernel_log_find(char * str, char * a2, int32_t a3);
int32_t mdp_dsi_cmd_tearcheck_cfg(int32_t a1, int32_t a2);
int32_t mdp_dsi_video_config(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t multiflash_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t scm_command_to_response(int32_t a1, int32_t a2);
int32_t set_state_values_for_nonhlos(int32_t a1, int32_t a2);
int32_t sod_dump_to_sd(int32_t a1, int32_t a2);
int32_t target_fastboot_init(int32_t a1, int32_t a2);
int32_t target_get_hlos_subtype(int32_t a1);
int32_t target_ram_size(int32_t a1, int32_t a2);
int32_t target_set_raminfo(void);
int32_t target_uninit(int32_t a1, int32_t a2, int32_t a3);
int32_t target_usb_stop(int32_t a1);
int32_t tlmm_set_pull_ctrl(int32_t result, int32_t a2, int32_t a3);
int32_t update_meminfo_to_devtree(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

// Detected cryptographic pattern: CRC_32_IEEE_802_3_poly_0x04C11DB7 (32-bit, little endian)
int32_t CRC_32_IEEE_802_3_poly_0x04C11DB7_at_8f6a5fe0[256] = {0, 0x77073096, -0x11f19ed4, -0x66f6ae46, 0x76dc419, 0x706af48f, -0x169c5acb, -0x619b6a5d, 0xedb8832, 0x79dcb8a4, -0x1f2a16e2, -0x682d2678, 0x9b64c2b, 0x7eb17cbd, -0x1847d2f9, -0x6f40e26f, 0x1db71064, 0x6ab020f2, -0xc468eb8, -0x7b41be22, 0x1adad47d, 0x6ddde4eb, -0xb2b4aaf, -0x7c2c7a39, 0x136c9856, 0x646ba8c0, -0x29d0686, -0x759a3614, 0x14015c4f, 0x63066cd9, -0x5f0c29d, -0x72f7f20b, 0x3b6e20c8, 0x4c69105e, -0x2a9fbe1c, -0x5d988e8e, 0x3c03e4d1, 0x4b04d447, -0x2df27a03, -0x5af54a95, 0x35b5a8fa, 0x42b2986c, -0x2444362a, -0x534306c0, 0x32d86ce3, 0x45df5c75, -0x2329f231, -0x542ec2a7, 0x26d930ac, 0x51de003a, -0x3728ae80, -0x402f9eea, 0x21b4f4b5, 0x56b3c423, -0x30456a67, -0x47425af1, 0x2802b89e, 0x5f058808, -0x39f3264e, -0x4ef416dc, 0x2f6f7c87, 0x58684c11, -0x3e9ee255, -0x4999d2c3, 0x76dc4190, 0x1db7106, -0x672ddf44, -0x102aefd6, 0x71b18589, 0x6b6b51f, -0x60401b5b, -0x17472bcd, 0x7807c9a2, 0xf00f934, -0x69f65772, -0x1ef167e8, 0x7f6a0dbb, 0x86d3d2d, -0x6e9b9369, -0x199ca3ff, 0x6b6b51f4, 0x1c6c6162, -0x7a9acf28, -0xd9dffb2, 0x6c0695ed, 0x1b01a57b, -0x7df70b3f, -0xaf03ba9, 0x65b0d9c6, 0x12b7e950, -0x74414716, -0x3467784, 0x62dd1ddf, 0x15da2d49, -0x732c830d, -0x42bb39b, 0x4db26158, 0x3ab551ce, -0x5c43ff8c, -0x2b44cf1e, 0x4adfa541, 0x3dd895d7, -0x5b2e3b93, -0x2c290b05, 0x4369e96a, 0x346ed9fc, -0x529877ba, -0x259f4730, 0x44042d73, 0x33031de5, -0x55f5b3a1, -0x22f28337, 0x5005713c, 0x270241aa, -0x41f4eff0, -0x36f3df7a, 0x5768b525, 0x206f85b3, -0x46992bf7, -0x319e1b61, 0x5edef90e, 0x29d9c998, -0x4f2f67de, -0x3828574c, 0x59b33d17, 0x2eb40d81, -0x4842a3c5, -0x3f459353, -0x12477ce0, -0x65404c4a, 0x3b6e20c, 0x74b1d29a, -0x152ab8c7, -0x622d8851, 0x4db2615, 0x73dc1683, -0x1c9cf4ee, -0x6b9bc47c, 0xd6d6a3e, 0x7a6a5aa8, -0x1bf130f5, -0x6cf60063, 0xa00ae27, 0x7d079eb1, -0xff06cbc, -0x78f75c2e, 0x1e01f268, 0x6906c2fe, -0x89da8a3, -0x7f9a9835, 0x196c3671, 0x6e6b06e7, -0x12be48a, -0x762cd420, 0x10da7a5a, 0x67dd4acc, -0x6462091, -0x71411007, 0x17b7be43, 0x60b08ed5, -0x29295c18, -0x5e2e6c82, 0x38d8c2c4, 0x4fdff252, -0x2e44980f, -0x5943a899, 0x3fb506dd, 0x48b2364b, -0x27f2d426, -0x50f5e4b4, 0x36034af6, 0x41047a60, -0x209f103d, -0x579820ab, 0x316e8eef, 0x4669be79, -0x349e4c74, -0x43997ce6, 0x256fd2a0, 0x5268e236, -0x33f3886b, -0x44f4b8fd, 0x220216b9, 0x5505262f, -0x3a45c442, -0x4d42f4d8, 0x2bb45a92, 0x5cb36a04, -0x3d280059, -0x4a2f30cf, 0x2cd99e8b, 0x5bdeae1d, -0x649b3d50, -0x139c0dda, 0x756aa39c, 0x26d930a, -0x63f6f957, -0x14f1c9c1, 0x72076785, 0x5005713, -0x6a40b57e, -0x1d4785ec, 0x7bb12bae, 0xcb61b38, -0x6d2d7165, -0x1a2a41f3, 0x7cdcefb7, 0xbdbdf21, -0x792c2d2c, -0xe2b1dbe, 0x68ddb3f8, 0x1fda836e, -0x7e41e933, -0x946d9a5, 0x6fb077e1, 0x18b74777, -0x77f7a51a, -0xf09590, 0x66063bca, 0x11010b5c, -0x709a6101, -0x79d5197, 0x616bffd3, 0x166ccf45, -0x5ff51d88, -0x28f22d12, 0x4e048354, 0x3903b3c2, -0x5898d99f, -0x2f9fe909, 0x4969474d, 0x3e6e77db, -0x512e95b6, -0x2629a524, 0x40df0b66, 0x37d83bf0, -0x564351ad, -0x2144613b, 0x47b2cf7f, 0x30b5ffe9, -0x42420de4, -0x35453d76, 0x53b39330, 0x24b4a3a6, -0x452fc9fb, -0x3228f96d, 0x54de5729, 0x23d967bf, -0x4c9985d2, -0x3b9eb548, 0x5d681b02, 0x2a6f2b94, -0x4bf441c9, -0x3cf3715f, 0x5a05df1b, 0x2d02ef8d}; // 0x8f6a5fe0
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R10
int32_t g28 = 0; // R11
int32_t g29 = 0; // R2
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g34 = 0; // R8
int32_t g35 = 0; // R9
char * g1[15] = {
    "unknown",
    "Samsung",
    "Qimonda",
    "Elpida",
    "Etron",
    "Nanya",
    "Hynix",
    "Mosel",
    "Winbond",
    "ESMT",
    "unknown",
    "Spansion",
    "SST",
    "ZMOS",
    "Intel"
}; // 0x8f6817d4
char * g2[19] = {
    "S4 SDRAM",
    "S2 SDRAM",
    "N NVM",
    "S8 SDRAM",
    "64Mb",
    "128Mb",
    "256Mb",
    "512Mb",
    "1Gb",
    "2Gb",
    "4Gb",
    "8Gb",
    "16Gb",
    "32Gb",
    "reserved",
    "reserved",
    "reserved",
    "12Gb",
    "6Gb"
}; // 0x8f681a84
char * g3[15] = {
    "64Mb",
    "128Mb",
    "256Mb",
    "512Mb",
    "1Gb",
    "2Gb",
    "4Gb",
    "8Gb",
    "16Gb",
    "32Gb",
    "reserved",
    "reserved",
    "reserved",
    "12Gb",
    "6Gb"
}; // 0x8f681a94
int32_t g4 = -1; // 0x8f6ac0c0
int32_t g5 = 2; // 0x8f6afe14
int32_t g6 = 0; // 0x8f6b8bdc
int32_t g7 = 0; // 0x8f6b8be0
int32_t g8 = 0; // 0x8f6b8be4
int32_t g9 = 0; // 0x8f6b8be8
int32_t g10 = 0; // 0x8f6b8bec
int32_t g11 = 0; // 0x8f6c03c0
int32_t g12 = 0; // 0x8f6c03c4
char * g13; // 0x8f6e0780
char * g14; // 0x8f6e0788
int32_t g15 = 0; // 0x8f6e078c
char * g16; // 0x8f6e0798
int32_t g17 = 0; // 0x8f6e0c00
int32_t g18 = 0; // 0x8f6e0c08
int32_t g19 = 0; // 0x8f6e0c34
int32_t g20 = 0; // 0x8f6e0c38
char * g21; // 0x8f6e0c40
int32_t g22 = 0; // 0x8f7112dc
char * g23; // 0x8f7112f4
char * g24; // 0x8f711464

// ------------------------ Functions -------------------------

// Address range: 0x8f674ac8 - 0x8f674afb
int32_t get_security_code(void) {
    int32_t result = mot_sst_get_security_state(g25, g26, g29); // 0x8f674ad8
    if (g23 != g23) {
        // 0x8f674aec
        __stack_chk_fail();
        // branch -> 0x8f674af0
    }
    // 0x8f674af0
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int memcmp(const void * s1, const void * s2, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:42:07
