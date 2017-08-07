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

int32_t cache_state_to_sp(void);
int32_t get_boot_component_version(int32_t a1);
int32_t get_policy_executor(char * a1);
int32_t get_primary_gpt_partition(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_add_verified_blocks(char * a1, int32_t a2, int32_t a3);
int32_t hab_code_hash(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t hab_code_sig_verification(int32_t a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t hab_parse_certificate(int32_t a1, char * a2, int32_t * a3, int16_t * a4, int32_t * a5);
int32_t hab_rsa_verification(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t hab_skip_identifier(int32_t a1);
int32_t hab_sw_rsa(char * str, char * str2, uint32_t n, int32_t a4, uint32_t a5);
int32_t locking_phone(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_X509Certificate_decodeExtension(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_X509Certificate_extractAlgorithm(int32_t a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t mcs_X509Certificate_extractNames(int32_t a1, int32_t a2, int32_t * a3, int16_t * a4);
int32_t mcs_X509Certificate_getExtensions(int32_t a1, int32_t * a2, int16_t * a3);
int32_t mcs_X509Certificate_removePadding(int32_t a1, int32_t a2);
int32_t set_current_secure_state(char a1, int32_t a2, int32_t a3);
int32_t unlock_phone(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_sparse_partition(int32_t a1, int32_t a2);
int32_t write_protect_on_partition(int32_t a1, int32_t a2);
int32_t write_protect_was_enabled(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g54 = 0; // LR
int32_t g55 = 0; // R0
int32_t g56 = 0; // R1
int32_t g57 = 0; // R10
int32_t g58 = 0; // R11
int32_t g59 = 0; // R2
int32_t g60 = 0; // R3
int32_t g61 = 0; // R4
int32_t g62 = 0; // R5
int32_t g63 = 0; // R6
int32_t g64 = 0; // R7
int32_t g65 = 0; // R8
int32_t g66 = 0; // R9
int32_t g1 = 1; // 0x8f6b0044
int32_t g2 = 0; // 0x8f6b0070
char g3 = 0; // 0x8f70dad8
int32_t g4 = 0; // 0x8f70dcf4
int32_t g5 = 0; // 0x8f70ddf8
int32_t g6 = 0; // 0x8f70ddfc
int32_t g7 = 0; // 0x8f70dff4
int32_t g8 = 0; // 0x8f70dff8
char * g9; // 0x8f70dffc
int32_t g10 = 0; // 0x8f70e3fc
char g11 = 0; // 0x8f70e500
char g12 = 0; // 0x8f70e604
char * g13; // 0x8f70e708
char g14 = 0; // 0x8f70e709
char g15 = 0; // 0x8f70e70a
char g16 = 0; // 0x8f70e70b
char g17 = 0; // 0x8f70e70c
char g18 = 0; // 0x8f70e70d
int32_t g19 = 0; // 0x8f70e718
int32_t g20 = 0; // 0x8f70e719
int32_t g21 = 0; // 0x8f70e71a
int32_t g22 = 0; // 0x8f70e71b
char g23 = 0; // 0x8f70e71c
char g24 = 0; // 0x8f70e71d
char g25 = 0; // 0x8f70e71e
char g26 = 0; // 0x8f70e71f
char * g27; // 0x8f70f724
int32_t g28 = 0; // 0x8f70f725
int32_t g29 = 0; // 0x8f70f745
int32_t g30 = 0; // 0x8f70f746
int32_t g31 = 0; // 0x8f70f747
int32_t g32 = 0; // 0x8f70f748
int32_t g33 = 0; // 0x8f70f749
int32_t g34 = 0; // 0x8f70f74a
int32_t g35 = 0; // 0x8f70f74b
int32_t g36 = 0; // 0x8f70f74c
int32_t g37 = 0; // 0x8f70f74d
int32_t g38 = 0; // 0x8f70f74e
int32_t g39 = 0; // 0x8f70f74f
int32_t g40 = 0; // 0x8f70f750
int32_t g41 = 0; // 0x8f70f751
int32_t g42 = 0; // 0x8f70f752
int32_t g43 = 0; // 0x8f70f753
int32_t g44 = 0; // 0x8f70f754
char g45 = 0; // 0x8f70f755
char g46 = 0; // 0x8f70f756
char * g47; // 0x8f70f75d
char * g48; // 0x8f710a25
int32_t g49 = 0; // 0x8f7112f4
int32_t g50 = 0; // 0x8f7129dc
int32_t g51 = 0; // 0x8f712e1c
int32_t g52 = 0; // 0x8f712f2c
int32_t g53 = 0; // 0x8f71302c

// ------------------------ Functions -------------------------

// Address range: 0x8f66fc44 - 0x8f670157
int32_t hab_sw_rsa(char * str, char * str2, uint32_t n, int32_t a4, uint32_t a5) {
    int32_t v1 = (int32_t)str;
    int32_t v2 = g61; // 0x8f66fc44
    int32_t v3 = g62; // 0x8f66fc44
    int32_t v4 = g63; // 0x8f66fc44
    int32_t v5 = g64; // 0x8f66fc44
    int32_t v6 = g65; // 0x8f66fc44
    int32_t v7 = (int32_t)str2; // R10
    uint32_t v8 = a5 % 0x10000; // 0x8f66fc64
    int32_t v9 = g49;
    int32_t v10;
    if (str == NULL || str2 == NULL || a4 == 0 || v10 == 0 || (n + 0xfffc) % 0x10000 > 252) {
        // 0x8f670114
        if (v9 != g49) {
            // 0x8f670128
            __stack_chk_fail();
            // branch -> 0x8f67012c
        }
        // 0x8f67012c
        g61 = v2;
        g62 = v3;
        g63 = v4;
        g64 = v5;
        g65 = v6;
        return 57;
    }
    int32_t v11 = n % 4; // 0x8f66fca0
    int32_t v12 = v11; // R5
    if (v11 != 0 || v8 > 4 || *str2 > 255) {
        // 0x8f670114
        if (v9 != g49) {
            // 0x8f670128
            __stack_chk_fail();
            // branch -> 0x8f67012c
        }
        // 0x8f67012c
        g61 = v2;
        g62 = v3;
        g63 = v4;
        g64 = v5;
        g65 = v6;
        return 57;
    }
    // 0x8f66fcbc
    if (memcmp(str, str2, n) <= 0xffffffff) {
        int32_t v13 = n / 4; // 0x8f66fccc
        uint32_t v14 = v13 + 1; // 0x8f66fcd4
        g17 = v14;
        *(char *)&g13 = (char)&g11;
        int32_t v15 = n / 2; // R6
        g18 = v14 / 256;
        g14 = (int32_t)(char)&g11 >> 8;
        g15 = (int32_t)(char)&g11 >> 16;
        g16 = (int32_t)(char)&g11 >> 24;
        int32_t v16;
        int32_t v17;
        int32_t v18;
        int32_t v19;
        bytes_to_mpint((int32_t)(char)&g11, v7, n, (int32_t)(char)((int32_t)(char)&g11 >> 24), v19, v18, v17, v16, a4);
        char v20 = *(char *)&g13; // 0x8f66fd14
        int32_t v21 = (int32_t)&g13; // 0x8f66fd18
        *(int32_t *)(((int32_t)v20 | 256 * (int32_t)g14 | 0x10000 * (int32_t)g15 | 0x1000000 * (int32_t)g16) + 4 * v13) = v12;
        g24 = (int32_t)(char)&g12 >> 8 & 255;
        g25 = (int32_t)(char)&g12 >> 16 & 255;
        g26 = (int32_t)(char)&g12 >> 24;
        g23 = &g12;
        *(int32_t *)(4 * v13 + (int32_t)(char)&g12) = v12;
        uint32_t v22 = (int32_t)&g3; // 0x8f66fd60
        *(char *)&g19 = (char)v22;
        *(char *)&g20 = (char)((int32_t)&g3 >> 8 & 255);
        uint32_t v23 = v22 / 0x10000; // 0x8f66fd68
        uint32_t v24 = v22 / 0x1000000; // 0x8f66fd6c
        *(char *)&g21 = (char)v23;
        *(char *)&g22 = (char)v24;
        initialize_montgomery_alg(v21, v23, v24, (int32_t)(char)&g12, v19, v18, v17);
        int32_t v25 = v12; // 0x8f66fd8042
        int32_t v26 = v7 + 2; // 0x8f66fd8446
        v7 = v26;
        int32_t v27 = v15; // 0x8f66fdac
        if (v25 >= v15) {
            int32_t v28 = &g5; // 0x8f66fd9c
            while (true) {
                char v29 = *(char *)(v26 - 2); // 0x8f66fd90
                char v30 = *(char *)(v26 - 1); // 0x8f66fd94
                *(int32_t *)(4 * v25 + v28) = (int32_t)v30 | 256 * (int32_t)v29;
                int32_t v31 = v12 + 1; // 0x8f66fda0
                v12 = v31;
                int32_t v32 = v7 + 2; // 0x8f66fd84
                v7 = v32;
                if (v31 >= v15) {
                    // 0x8f66fd90
                    v25 = v31;
                    v28 = &g5;
                    v26 = v32;
                    // branch -> 0x8f66fd90
                    continue;
                } else {
                    v27 = v15;
                }
            }
        }
        // 0x8f66fda8
        v7 = 4 * v27;
        v12 = &g7;
        char * set_mem = memset((char *)&g9, 0, 8 * v27); // 0x8f66fdc0
        int32_t v33 = (int32_t)set_mem; // R0
        g8 = 1;
        int32_t v34 = g5;
        int32_t v35 = v7; // 0x8f66fdd8
        int32_t v36 = (int32_t)&g5 + v35; // 0x8f66fdd8
        int32_t v37 = v35 + 4; // 0x8f66fde4
        int32_t v38 = v34; // 0x8f66fe00
        int32_t v39 = 0; // 0x8f6701002
        // branch -> 0x8f66fdf0
        while (true) {
          lab_0x8f66fdf0:;
            int32_t v40 = v12; // 0x8f66fdf0
            int32_t v41 = *(int32_t *)(v40 + 4); // 0x8f66fdf0
            int32_t v42 = *(int32_t *)(v40 + 8); // 0x8f66fdf4
            int32_t v43; // 0x8f66fe5422
            int32_t v44; // 0x8f66fe04
            if (v41 == v38) {
                // 0x8f66fe00
                v44 = v33 | 0xffff;
                v33 = v44;
                v43 = v42 + v38;
                // branch -> 0x8f66fe08
            } else {
                uint32_t v45 = v42 + 0x10000 * v41; // 0x8f66fe18
                int32_t v46 = v45 / v38;
                v33 = v46;
                v43 = v45 - v46 * v38;
                v44 = v46;
                // branch -> 0x8f66fe08
            }
            int32_t v47 = v44 * g6; // 0x8f66fe10
            int32_t v48 = v44; // 0x8f66fe9466
            int32_t v49; // R1
            int32_t v50; // R2
            int32_t v51; // 0x8f66fe7028
            int32_t v52; // 0x8f66fe88
            int32_t v53; // 0x8f66fe94
            int32_t v54; // 0x8f66fec0
            uint32_t v55; // 0x8f66fee0
            int32_t v56; // 0x8f66feac
            if (v43 < 0x10000) {
                int32_t v57 = v44; // 0x8f66fe4c
                int32_t v58 = v43; // 0x8f66fe50
                int32_t v59 = 0; // 0x8f66fe44
                // branch -> 0x8f66fe30
                while (true) {
                    // 0x8f66fe30
                    if (v59 + v47 > *(int32_t *)(v40 + 12) + 0x10000 * v58) {
                        int32_t v60 = v57 - 1; // 0x8f66fe4c
                        v33 = v60;
                        int32_t v61 = v58 + v38; // 0x8f66fe50
                        if (v61 >= 0x10000) {
                            v48 = v60;
                            // break -> 0x8f66fe5c
                            break;
                        }
                        v57 = v60;
                        v58 = v61;
                        v59 -= g6;
                        // continue -> 0x8f66fe30
                        continue;
                    } else {
                        v48 = v57;
                    }
                }
                // 0x8f66fe5c
                v50 = 1;
                v51 = v40 + v35;
                v49 = v51;
                v55 = 0;
                int32_t * v62; // 0x8f66fec8_0
                int32_t v63; // 0x8f66fec8
                uint32_t v64; // 0x8f66fed4
                if (v15 != 0) {
                    v56 = 0;
                    v53 = v48;
                    v54 = v51;
                    v52 = 1;
                  lab_0x8f66fe80:
                    while (true) {
                        int32_t * v65 = (int32_t *)(v54 + 4); // 0x8f66fe90_0
                        uint32_t v66 = *(int32_t *)(-4 * v52 + v36) * v53; // 0x8f66fe94
                        uint32_t v67 = 0x20000 - v56 % 0x10000 + *v65 - v66 % 0x10000; // 0x8f66feb4
                        int32_t v68 = v66 / 0x10000 + 2 + v56 / 0x10000 - v67 / 0x10000; // R3
                        *v65 = v67 % 0x10000;
                        int32_t v69 = v50 + 1; // 0x8f66fe6c
                        v50 = v69;
                        int32_t v70 = v49 - 4; // 0x8f66fe70
                        v49 = v70;
                        if (v15 - v69 == -1) {
                            // 0x8f66fe6c
                            v55 = v68;
                            // branch -> 0x8f66fec8
                            // 0x8f66fec8
                            v63 = v12 + 4;
                            v62 = (int32_t *)v63;
                            v64 = 0x10000 - v55 % 0x10000 + *v62;
                            v12 = v63;
                            *v62 = v64 % 0x10000;
                            int32_t v71; // R8
                            int32_t v72; // 0x8f67000c
                            int32_t v73; // 0x8f6700b888
                            int32_t v74; // 0x8f66ff50
                            int32_t v75; // 0x8f66ff74
                            int32_t v76; // 0x8f66ff78
                            int32_t v77; // 0x8f66ff7815
                            uint32_t v78; // 0x8f66ff58
                            int32_t v79; // 0x8f66ff68
                            int32_t v80; // 0x8f670010
                            int32_t v81; // 0x8f66ff64
                            int32_t v82; // 0x8f670064
                            int32_t v83; // 0x8f66ff6c
                            int32_t v84; // 0x8f66ffc0
                            uint32_t v85; // 0x8f66ff88
                            int32_t v86; // 0x8f66ff94
                            int32_t v87; // 0x8f670008
                            if (v55 / 0x10000 - v64 / 0x10000 != -1) {
                              lab_0x8f66fef0:;
                                int32_t v88 = v12; // 0x8f66fef4
                                v68 = 1;
                                int32_t v89 = v7 - 4 + v88; // 0x8f66ff0036
                                v50 = v89;
                                v33 = v15 - 1;
                                int32_t * v90; // 0x8f66ff3c_0
                                if (v15 != 0) {
                                    int32_t v91 = 0; // 0x8f66ff28
                                    int32_t v92 = 1; // 0x8f66ff18
                                    while (true) {
                                        int32_t * v93 = (int32_t *)(v89 + 4); // 0x8f66ff20_0
                                        uint32_t v94 = *(int32_t *)(-4 * v92 + v36) + v91 + *v93; // 0x8f66ff28
                                        v49 = v94 / 0x10000;
                                        *v93 = v94 % 0x10000;
                                        int32_t v95 = v68 + 1; // 0x8f66fefc
                                        v68 = v95;
                                        int32_t v96 = v50 - 4; // 0x8f66ff00
                                        v50 = v96;
                                        int32_t v97 = v15 - v95; // 0x8f66ff04
                                        v33 = v97;
                                        if (v97 == -1) {
                                            // 0x8f66fefc
                                            // branch -> 0x8f66ff3c
                                            // 0x8f66ff3c
                                            v90 = (int32_t *)v12;
                                            *v90 = (*v90 + v49) % 0x10000;
                                            // branch -> 0x8f66ff4c
                                          lab_0x8f66ff4c:
                                            // 0x8f66ff4c
                                            v74 = v39 + 1;
                                            v78 = v15;
                                            if (v74 <= v78) {
                                              lab_0x8f66ff4c_2:
                                                // 0x8f66ff4c
                                                v38 = v34;
                                                v39 = v74;
                                                // branch -> 0x8f66fdf0
                                                goto lab_0x8f66fdf0;
                                            }
                                            // 0x8f66ff60
                                            v81 = 2 * v78;
                                            v79 = v10;
                                            v83 = v7 + (int32_t)&g8;
                                            v7 = v83;
                                            v68 = 1;
                                            v77 = v79 + 2;
                                            v50 = v77;
                                            if (v78 + 1 <= v81) {
                                                int32_t v98 = v77; // 0x8f66ff90
                                                int32_t v99 = 1; // 0x8f66ff88
                                                int32_t v100 = v83; // 0x8f66ff88
                                                while (true) {
                                                    // 0x8f66ff88
                                                    v85 = *(int32_t *)(4 * v99 + v100);
                                                    *(char *)(v98 - 2) = (char)(v85 / 256);
                                                    v86 = *(int32_t *)(4 * v68 + v7);
                                                    *(char *)(v50 - 1) = (char)v86;
                                                    v75 = v68 + 1;
                                                    v68 = v75;
                                                    v76 = v50 + 2;
                                                    v50 = v76;
                                                    if (v15 + v75 > v81) {
                                                        // 0x8f66ff74
                                                        // branch -> 0x8f66ffa0
                                                        // 0x8f66ffa0
                                                        v84 = (int32_t)g23 | 256 * (int32_t)g24 | 0x10000 * (int32_t)g25;
                                                        bytes_to_mpint(v84 | 0x1000000 * (int32_t)g26, v10, n, v84, v19, v74, g6, v36, a4);
                                                        memset((char *)v10, 0, n - 1);
                                                        *(char *)(n - 1 + v10) = 1;
                                                        v12 = 0;
                                                        if (v8 != 0) {
                                                            // 0x8f670114
                                                            if (v9 != g49) {
                                                                // 0x8f670128
                                                                __stack_chk_fail();
                                                                // branch -> 0x8f67012c
                                                            }
                                                            // 0x8f67012c
                                                            g61 = v2;
                                                            g62 = v3;
                                                            g63 = v4;
                                                            g64 = v5;
                                                            g65 = v6;
                                                            return 240;
                                                        }
                                                        int32_t v101 = 0; // 0x8f67002886
                                                        int32_t v102 = 0; // 0x8f67000c81
                                                        int32_t v103 = 0; // 0x8f670008
                                                        while (true) {
                                                            // 0x8f670000
                                                            v71 = 8;
                                                            v87 = (int32_t)*(char *)(v103 + a4);
                                                            v7 = v87;
                                                            v73 = 8;
                                                            v82 = v101;
                                                            v80 = v87;
                                                            v72 = v102;
                                                            // branch -> 0x8f67000c
                                                          lab_0x8f67000c_2:;
                                                            int32_t v104; // 0x8f67002884
                                                            int32_t v105; // 0x8f67000c80
                                                            while (true) {
                                                                int32_t v106 = 0x1000000 * v80; // 0x8f670010
                                                                int32_t v107 = v106 / 0x1000000; // 0x8f670010
                                                                int32_t v108; // 0x8f6700b8
                                                                int32_t v109; // 0x8f6700b4
                                                                if (v72 == 0) {
                                                                    // 0x8f670050
                                                                    if (v106 <= 0xff000000) {
                                                                        // 0x8f670058
                                                                        bytes_to_mpint((int32_t)&g10, v1, n, v82, v82, v74, g6, v36, a4);
                                                                        *(int32_t *)(4 * v13 + (int32_t)&g10) = v82;
                                                                        int32_t v110 = 0x1000000 * (int32_t)g26 | 256 * (int32_t)g24 | (int32_t)g23 | 0x10000 * (int32_t)g25; // 0x8f670098
                                                                        mp_mont_prod((int32_t)&g13, (int32_t)&g4, (int32_t)&g10, v110, v82, v74, g6, v36, a4, 0, v1, v37, 0, v9, 0, v2, v3, v4, v5, v6);
                                                                        mp_copy((int32_t)&g13, (int32_t)&g10, (int32_t)&g4, v110, v82);
                                                                        // branch -> 0x8f6700b0
                                                                      lab_0x8f6700b0_2:
                                                                        // 0x8f6700b0
                                                                        v108 = v71;
                                                                        v109 = v7;
                                                                        v104 = 1;
                                                                        v105 = 1;
                                                                        // branch -> 0x8f6700b4
                                                                    } else {
                                                                        v108 = v73;
                                                                        v109 = v80;
                                                                        v104 = v82;
                                                                        v105 = 0;
                                                                    }
                                                                } else {
                                                                    // 0x8f670018
                                                                    mp_mont_sqr((int32_t)&g13, (int32_t)&g4, (int32_t)&g4, v82, v107, v74, g6, v36, a4, 0, v1, v37, 0, v9, 0, v2, v3, v4, v5, v6, g66);
                                                                    if (v106 > -0x1000000) {
                                                                        goto lab_0x8f6700b0_2;
                                                                    }
                                                                    // 0x8f670038
                                                                    mp_mont_prod((int32_t)&g13, (int32_t)&g4, (int32_t)&g4, (int32_t)&g10, v107, v74, g6, v36, a4, 0, v1, v37, 0, v9, 0, v2, v3, v4, v5, v6);
                                                                    // branch -> 0x8f6700b0
                                                                    goto lab_0x8f6700b0_2;
                                                                }
                                                                int32_t v111 = v108 - 1; // 0x8f6700b8
                                                                v71 = v111;
                                                                int32_t v112 = 2 * v109 & 254; // 0x8f6700bc
                                                                v7 = v112;
                                                                if (v108 == 1) {
                                                                    // break -> 0x8f6700c4
                                                                    break;
                                                                }
                                                                v73 = v111;
                                                                v82 = v104;
                                                                v80 = v112;
                                                                v72 = v105;
                                                                // continue -> 0x8f67000c
                                                            }
                                                            int32_t v113 = v12 + 1; // 0x8f6700c4
                                                            v12 = v113;
                                                            v101 = v104;
                                                            v102 = v105;
                                                            v103 = v113;
                                                            // branch -> 0x8f670000
                                                        }
                                                    } else {
                                                      lab_0x8f66ff88:
                                                        // 0x8f66ff88
                                                        v98 = v76;
                                                        v99 = v75;
                                                        v100 = v7;
                                                        // branch -> 0x8f66ff88
                                                        continue;
                                                    }
                                                }
                                            }
                                            // 0x8f66ffa0
                                            v84 = (int32_t)g23 | 256 * (int32_t)g24 | 0x10000 * (int32_t)g25;
                                            bytes_to_mpint(v84 | 0x1000000 * (int32_t)g26, v79, n, v84, v19, v74, g6, v36, a4);
                                            memset((char *)v10, 0, n - 1);
                                            *(char *)(n - 1 + v10) = 1;
                                            v12 = 0;
                                            if (v8 != 0) {
                                                // 0x8f670114
                                                if (v9 != g49) {
                                                    // 0x8f670128
                                                    __stack_chk_fail();
                                                    // branch -> 0x8f67012c
                                                }
                                                // 0x8f67012c
                                                g61 = v2;
                                                g62 = v3;
                                                g63 = v4;
                                                g64 = v5;
                                                g65 = v6;
                                                return 240;
                                            }
                                            while (true) {
                                                // 0x8f670000
                                                v71 = 8;
                                                v87 = (int32_t)*(char *)a4;
                                                v7 = v87;
                                                v73 = 8;
                                                v82 = 0;
                                                v80 = v87;
                                                v72 = 0;
                                                // branch -> 0x8f67000c
                                                goto lab_0x8f67000c_2;
                                            }
                                        } else {
                                            // 0x8f66ff10
                                            v91 = v49;
                                            v89 = v96;
                                            v92 = v95;
                                            // branch -> 0x8f66ff10
                                            continue;
                                        }
                                    }
                                }
                                // 0x8f66ff3c
                                v90 = (int32_t *)v88;
                                *v90 = *v90 % 0x10000;
                                // branch -> 0x8f66ff4c
                                goto lab_0x8f66ff4c;
                            }
                          lab_0x8f66ff4c_3:
                            // 0x8f66ff4c
                            v74 = v39 + 1;
                            v78 = v15;
                            if (v74 <= v78) {
                                goto lab_0x8f66ff4c_2;
                            }
                            // 0x8f66ff60
                            v81 = 2 * v78;
                            v79 = v10;
                            v83 = v7 + (int32_t)&g8;
                            v7 = v83;
                            v68 = 1;
                            v77 = v79 + 2;
                            v50 = v77;
                            if (v78 + 1 <= v81) {
                                while (true) {
                                    // 0x8f66ff88
                                    v85 = *(int32_t *)(4 + v83);
                                    *(char *)(v77 - 2) = (char)(v85 / 256);
                                    v86 = *(int32_t *)(4 * v68 + v7);
                                    *(char *)(v50 - 1) = (char)v86;
                                    v75 = v68 + 1;
                                    v68 = v75;
                                    v76 = v50 + 2;
                                    v50 = v76;
                                    if (v15 + v75 <= v81) {
                                        goto lab_0x8f66ff88;
                                    }
                                    // 0x8f66ff74
                                    // branch -> 0x8f66ffa0
                                }
                            }
                            // 0x8f66ffa0
                            v84 = (int32_t)g23 | 256 * (int32_t)g24 | 0x10000 * (int32_t)g25;
                            bytes_to_mpint(v84 | 0x1000000 * (int32_t)g26, v79, n, v84, v19, v74, g6, v36, a4);
                            memset((char *)v10, 0, n - 1);
                            *(char *)(n - 1 + v10) = 1;
                            v12 = 0;
                            if (v8 != 0) {
                                // 0x8f670114
                                if (v9 != g49) {
                                    // 0x8f670128
                                    __stack_chk_fail();
                                    // branch -> 0x8f67012c
                                }
                                // 0x8f67012c
                                g61 = v2;
                                g62 = v3;
                                g63 = v4;
                                g64 = v5;
                                g65 = v6;
                                return 240;
                            }
                            while (true) {
                                // 0x8f670000
                                v71 = 8;
                                v87 = (int32_t)*(char *)a4;
                                v7 = v87;
                                v73 = 8;
                                v82 = 0;
                                v80 = v87;
                                v72 = 0;
                                // branch -> 0x8f67000c
                                goto lab_0x8f67000c_2;
                            }
                        } else {
                            // 0x8f66fe80
                            v56 = v68;
                            v53 = v33;
                            v54 = v70;
                            v52 = v69;
                            // branch -> 0x8f66fe80
                            continue;
                        }
                    }
                }
              lab_0x8f66fec8:
                // 0x8f66fec8
                v63 = v40 + 4;
                v62 = (int32_t *)v63;
                v64 = 0x10000 - v55 % 0x10000 + *v62;
                v12 = v63;
                *v62 = v64 % 0x10000;
                if (v55 / 0x10000 - v64 / 0x10000 == -1) {
                    goto lab_0x8f66ff4c_3;
                }
                goto lab_0x8f66fef0;
            }
            // 0x8f66fe5c
            v50 = 1;
            v51 = v40 + v35;
            v49 = v51;
            if (v15 == 0) {
                v55 = 0;
                goto lab_0x8f66fec8;
            }
            v56 = 0;
            v53 = v48;
            v54 = v51;
            v52 = 1;
            goto lab_0x8f66fe80;
        }
    }
    // 0x8f670114
    if (v9 != g49) {
        // 0x8f670128
        __stack_chk_fail();
        // branch -> 0x8f67012c
    }
    // 0x8f67012c
    g61 = v2;
    g62 = v3;
    g63 = v4;
    g64 = v5;
    g65 = v6;
    return 57;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:28
