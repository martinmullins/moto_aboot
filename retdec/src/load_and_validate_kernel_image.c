//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t check_mbm_addr_range_overlap(uint32_t a1, uint32_t a2, int32_t a3);
int32_t clock_ce_disable(int32_t a1);
int32_t clock_config_blsp_i2c(int32_t a1, int32_t a2);
int32_t cxo_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t display_set_mdp_version(int32_t a1);
int32_t display_shutdown(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt_reserveprop(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt_setprop(int32_t a1, int32_t a2, int32_t a3, char * a4);
void function_8f648514(void);
int32_t get_barcode_scale(int32_t a1, int32_t a2);
int32_t get_bool_prop(int32_t a1, int32_t a2);
int32_t get_current_path(int32_t a1, int32_t a2);
int32_t get_hw_rel(char * a1, int32_t a2, int32_t a3);
int32_t get_int_array_prop(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_panel_name_strings(void);
void hexdump(int32_t * a1, int32_t a2);
int32_t load_and_validate_kernel_image(int32_t a1);
int32_t mcs_DER_decodeBitString(int32_t a1, uint32_t a2, int32_t a3);
int32_t mcs_DER_decodeBoolean(char * a1, int16_t a2, int32_t a3);
int32_t mdp_clk_gating_ctrl(int32_t a1, int32_t a2);
int32_t mdss_mdp_intf_offset(int32_t a1);
int32_t mot_sst_pal_get_sbd_en_otp_bit(char * a1);
int32_t mot_sst_pal_set_sbd_en_otp_bit(int32_t a1, int32_t a2);
int32_t pll_vote_clk_is_enabled(int32_t a1, int32_t a2, int32_t a3);
int32_t set_current_panel(int32_t a1, int32_t a2, int32_t a3);
int32_t set_logger_capacity(int32_t a1, int32_t a2);
int32_t set_logger_max_log_len(int32_t a1, int32_t a2);
int32_t target_baseband(char * a1, int32_t a2, int32_t a3);
int32_t target_baseband_detect(int32_t * a1);
int32_t utags_early_init(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g27 = false; // LR
int32_t g28 = 0; // R0
int32_t g29 = 0; // R1
int32_t g30 = 0; // R10
int32_t g31 = 0; // R2
int32_t g32 = 0; // R3
int32_t g33 = 0; // R4
int32_t g34 = 0; // R5
int32_t g35 = 0; // R6
int32_t g36 = 0; // R7
int32_t g37 = 0; // R8
int32_t g38 = 0; // R9
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
char g2[2] = "."; // 0x8f688719
int32_t g3 = -0x1201f230; // 0x8f68ac00
int32_t g4 = 0x65440030; // 0x8f69c66f
int32_t g5 = -1; // 0x8f6ac1f4
int32_t g6 = -1; // 0x8f6ac1fc
int32_t g7 = 2; // 0x8f6afe0c
int32_t g8; // 0x8f6afe74
int32_t g9 = 0; // 0x8f6b00b0
int32_t g10 = 0; // 0x8f6b00cc
int32_t g11 = 0; // 0x8f6b00d0
int32_t g12 = 0; // 0x8f6b00d4
int32_t g13 = 0; // 0x8f6b00d8
int32_t g14 = 0; // 0x8f6b0110
int32_t g15 = 0; // 0x8f6b012c
int32_t g16 = 0; // 0x8f6b0130
int32_t g17 = 0; // 0x8f6b0134
int32_t g18 = 0; // 0x8f6b0138
int32_t g19 = 0; // 0x8f6e06b0
int32_t g20 = 0; // 0x8f6e0bfc
int32_t g21 = 0; // 0x8f6e0c30
int32_t g22 = 0; // 0x8f6e0c38
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114d4
char * g25; // 0x8f7114f0
int32_t g26 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f61feac - 0x8f6203fb
int32_t load_and_validate_kernel_image(int32_t a1) {
    int32_t v1 = 0; // 0x8f61feb0
    int32_t v2 = g27 ? -0x709a999c : 0; // 0x8f61feb0
    int32_t v3 = g23;
    int32_t v4 = v3; // R3
    int32_t v5 = target_get_scratch_address(a1, g29); // R8
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    char * v11 = get_partition_by_name(a1, g29, g31, v4, v10, 0, 0, v9, v8, v7, v6); // 0x8f61fed0
    int32_t v12 = (int32_t)v11; // 0x8f61fed0_12
    int32_t v13;
    if (v11 == NULL) {
        // if_8f61fed8_0_true
        // branch -> 0x8f620344
        // 0x8f620344
        int32_t v14;
        print_log(v12, (int32_t)"No partition %s for kernel found\n", a1, v4, v10, 0, 0, v9, v8, v7, v6, v13, v14);
        // branch -> 0x8f62034c
        // 0x8f62034c
        // branch -> 0x8f62038c
        // 0x8f62038c
        if (v3 != g23) {
            // 0x8f6203a4
            __stack_chk_fail();
            // branch -> 0x8f6203a8
        }
        // 0x8f6203a8
        return -1;
    }
    char v15 = *(char *)(v12 + 41); // 0x8f61fee0
    char v16 = *(char *)(v12 + 40); // 0x8f61fee4
    char v17 = *(char *)(v12 + 42); // 0x8f61feec
    char v18 = *(char *)(v12 + 43); // 0x8f61fef4
    int32_t v19 = 0x1000000 * (int32_t)v18 | 0x10000 * (int32_t)v17 | (int32_t)v16 | 256 * (int32_t)v15; // 0x8f61fef8
    char v20 = *(char *)(v12 + 45); // 0x8f61ff00
    char v21 = *(char *)(v12 + 44); // 0x8f61ff04
    char v22 = *(char *)(v12 + 46); // 0x8f61ff0c
    char v23 = *(char *)(v12 + 47); // 0x8f61ff14
    int32_t v24 = 0x1000000 * (int32_t)v23 | 0x10000 * (int32_t)v22 | (int32_t)v21 | 256 * (int32_t)v20; // 0x8f61ff18
    char v25 = *(char *)(v12 + 33); // 0x8f61ff20
    char v26 = *(char *)(v12 + 32); // 0x8f61ff24
    char v27 = *(char *)(v12 + 34); // 0x8f61ff2c
    int32_t v28 = 0x10000 * (int32_t)v27 | (int32_t)v26 | 256 * (int32_t)v25; // 0x8f61ff30
    int32_t v29 = 0x1000000 * (int32_t)*(char *)(v12 + 35) | v28; // 0x8f61ff38
    char v30 = *(char *)(v12 + 37); // 0x8f61ff40
    char v31 = *(char *)(v12 + 36); // 0x8f61ff44
    char v32 = *(char *)(v12 + 38); // 0x8f61ff50
    int32_t v33 = 512 * v28; // R6
    int32_t v34 = 0x10000 * (int32_t)v32 | (int32_t)v31 | 256 * (int32_t)v30; // 0x8f61ff58
    int32_t v35 = 0x1000000 * (int32_t)*(char *)(v12 + 39) | v34; // 0x8f61ff60
    int32_t v36 = 512 * v34 | v29 / 0x800000; // R7
    bs_set_timestamp(4, g29, v35, v34, v10, 0, 0, v9);
    int32_t v37 = *(int32_t *)(g26 + 8); // 0x8f61ff84
    int32_t v38; // 0x8f6202f8
    if (check_mbm_addr_range_overlap(v5, v37, v35) == 0) {
        // 0x8f61ff9c
        int32_t v39;
        int32_t v40;
        if (generic_mmc_read_logical(v33, v36, v37, 0, v5, 0, 0, v9, v29, v35, v6, v13, v19, v24, v40, v39, 0, v3, 0, g33, g34, g35, g36) == 0) {
            uint32_t v41 = *(int32_t *)(v5 + 36); // 0x8f61ffc4
            int32_t v42 = -v41; // 0x8f61ffd0
            uint32_t v43 = 2 * v41; // 0x8f61ffd4
            int32_t v44 = v41 - 1; // 0x8f61ffd8
            uint32_t v45 = (v44 + *(int32_t *)(v5 + 8) & v42) + v43; // 0x8f61ffe8
            uint32_t v46 = (v44 + *(int32_t *)(v5 + 16) & v42) + v45; // 0x8f620000
            uint32_t v47 = (v44 + *(int32_t *)(v5 + 24) & v42) + v46; // 0x8f620018
            int32_t v48 = (v44 + *(int32_t *)(v5 + 40) & v42) + v47; // 0x8f620030
            int32_t v49 = (int32_t)(v47 < v46) + (int32_t)(v46 < v45) + (int32_t)(v45 < v43) + (int32_t)(v43 < v41) + (int32_t)(v48 < v47); // 0x8f620038
            if ((v48 == -1 && v49 == 0) ^ (v48 == -1 || v49 != 0)) {
                // after_if_8f620050_0.thread
                // branch -> 0x8f620114
                // 0x8f620114
                print_log(-1, (int32_t)"Integer overflow detected in bootimage header fields\n", -1, 0, v5, 0, 0, v9, v29, v35, v48, v49, v19);
                // branch -> 0x8f62034c
                // 0x8f62034c
                // branch -> 0x8f62038c
                // 0x8f62038c
                if (v3 != g23) {
                    // 0x8f6203a4
                    __stack_chk_fail();
                    // branch -> 0x8f6203a8
                }
                // 0x8f6203a8
                return -1;
            }
            char v50 = *(char *)(v12 + 41); // 0x8f620058
            char v51 = *(char *)(v12 + 40); // 0x8f62005c
            char v52 = *(char *)(v12 + 42); // 0x8f620064
            char v53 = *(char *)(v12 + 43); // 0x8f62006c
            int32_t v54 = 0x1000000 * (int32_t)v53 | 0x10000 * (int32_t)v52 | (int32_t)v51 | 256 * (int32_t)v50; // 0x8f620070
            char v55 = *(char *)(v12 + 45); // 0x8f620074
            char v56 = *(char *)(v12 + 44); // 0x8f620078
            uint32_t v57 = v54 + 1; // 0x8f62007c
            char v58 = *(char *)(v12 + 46); // 0x8f620084
            char v59 = *(char *)(v12 + 47); // 0x8f62008c
            char v60 = *(char *)(v12 + 33); // 0x8f620094
            char v61 = *(char *)(v12 + 32); // 0x8f620098
            char v62 = *(char *)(v12 + 34); // 0x8f6200a4
            char v63 = *(char *)(v12 + 35); // 0x8f6200ac
            uint32_t v64 = 0x1000000 * (int32_t)v63 | 0x10000 * (int32_t)v62 | (int32_t)v61 | 256 * (int32_t)v60; // 0x8f6200b0
            char v65 = *(char *)(v12 + 37); // 0x8f6200b4
            char v66 = *(char *)(v12 + 36); // 0x8f6200b8
            char v67 = *(char *)(v12 + 38); // 0x8f6200c0
            int32_t v68 = 0x10000 * (int32_t)v67 | (int32_t)v66 | 256 * (int32_t)v65; // 0x8f6200c4
            char v69 = *(char *)(v12 + 39); // 0x8f6200c8
            uint32_t v70 = v57 - v64; // 0x8f6200d4
            int32_t v71 = (0x1000000 * (int32_t)v59 | 0x10000 * (int32_t)v58 | (int32_t)v56 | 256 * (int32_t)v55) + (int32_t)(v54 == -1) - (0x1000000 * (int32_t)v69 | v68) + (int32_t)(v57 < v64); // 0x8f6200d8
            uint32_t v72 = 512 * v70; // 0x8f6200e0
            int32_t v73 = get_signature_size(v12, v68, v70, v71); // 0x8f6200e8
            int32_t v74 = v72 - v73; // 0x8f6200ec
            int32_t v75 = (512 * v71 | v70 / 0x800000) + (int32_t)(v73 < 0) - (int32_t)(v72 < v73); // 0x8f6200f0
            bool v76 = false; // 0x8f620108
            bool v77 = v49 >= v75; // 0x8f620108
            if (v49 == v75) {
                // if_8f620104_0_true
                v76 = v48 == v74;
                v77 = v48 >= v74;
                // branch -> after_if_8f620104_0
            }
            // after_if_8f620104_0
            if (v76 || v77 ^ true) {
                // 0x8f62011c
                if (check_mbm_addr_range_overlap(v5, v48, v74) != 0) {
                    // if_8f62012c_0_true
                    v38 = g32 & -0x10000 | 1171;
                    // branch -> 0x8f6202f8
                    // 0x8f6202f8
                    print_log(-1, (int32_t)"%s:%s(%d): Address overlap with aboot address.\n", (int32_t)"app/mbm/linux_boot.c", (int32_t)"load_and_validate_kernel_image", v38, 0, 0, v9, v29, v35, v48, v49, v19);
                    // branch -> 0x8f62034c
                    // 0x8f62034c
                    // branch -> 0x8f62038c
                    // 0x8f62038c
                    if (v3 != g23) {
                        // 0x8f6203a4
                        __stack_chk_fail();
                        // branch -> 0x8f6203a8
                    }
                    // 0x8f6203a8
                    return -1;
                }
                int32_t v78 = v36; // R1
                int32_t v79 = v48 >> 31; // 0x8f620144
                int32_t v80 = v48; // R2
                v4 = v79;
                int32_t v81 = generic_mmc_read_logical(v33, v36, v48, v79, v5, 0, 0, v9, v29, v35, v48, v49, v19, v24, v48, v79, 0, v3, 0, g33, g34, g35, g36); // 0x8f620154
                if (v81 != 0) {
                    // if_8f62015c_0_true
                    // branch -> 0x8f620344
                    // 0x8f620344
                    print_log(-1, (int32_t)"Error: reading partition: %s\n", a1, v4, v5, 0, 0, v9, v29, v35, v48, v49, v19);
                    // branch -> 0x8f62034c
                    // 0x8f62034c
                    // branch -> 0x8f62038c
                    // 0x8f62038c
                    if (v3 != g23) {
                        // 0x8f6203a4
                        __stack_chk_fail();
                        // branch -> 0x8f6203a8
                    }
                    // 0x8f6203a8
                    return -1;
                }
                int32_t v82 = is_skip_validation(0, v78, v80); // 0x8f620168
                int32_t result; // 0x8f620390
                if (v82 != 0) {
                    int32_t v83 = is_verified_boot_flow(v82, v78, v80, v4); // 0x8f620174
                    if (v83 != 0) {
                        int32_t v84 = is_validation_enabled((char *)v83, v78, v80, v4); // 0x8f620180
                        if (v84 != 0) {
                            // 0x8f62018c
                            if (is_factory_product(v84, v78, v80, v4) == 0) {
                                // 0x8f620198
                                init_boot_event(0, v78, v80, v4, v5, 0, 0, v9);
                                show((int32_t)"orange_screen", 1, v80, (int32_t)&g1, v5, 0, 0, v9, v29, v35, v48, v49, v19, v24, v48);
                                event_wait((int32_t)&g24, 1);
                                v78 = 1;
                                char v85 = *(char *)&g25; // 0x8f6201c0
                                int32_t v86 = v85; // 0x8f6201c0
                                v80 = v86;
                                int32_t v87 = v85 == 0 ? (int32_t)"fastboot_screen" : (int32_t)"logo_screen";
                                show(v87, 1, v86, (int32_t)&g1, v5, 0, 0, v9, v29, v35, v48, v49, v19, v24, v48);
                                char v88 = *(char *)&g25; // 0x8f6201dc
                                v4 = v88;
                                if (v88 == 0) {
                                    // if_8f6201e4_0_true
                                    // branch -> 0x8f62038c
                                    // 0x8f62038c
                                    if (v3 != g23) {
                                        // 0x8f6203a4
                                        __stack_chk_fail();
                                        // branch -> 0x8f6203a8
                                    }
                                    // 0x8f6203a8
                                    return 1;
                                }
                            }
                        }
                    }
                    // 0x8f6201ec
                    bs_set_timestamp(5, v78, v80, v4, v5, 0, 0, v9);
                    result = v81;
                    // branch -> 0x8f62038c
                    // 0x8f62038c
                    if (v3 == g23) {
                        // 0x8f6203a8
                        return result;
                    }
                    // 0x8f6203a4
                    __stack_chk_fail();
                    // branch -> 0x8f6203a8
                    // 0x8f6203a8
                    return result;
                }
                uint32_t v89 = v19 + 1; // 0x8f620200
                uint32_t v90 = v89 - v29; // 0x8f62020c
                int32_t v91 = v24 + (int32_t)(v19 == -1) + (int32_t)(v89 < v29) - v35; // 0x8f620210
                int32_t v92 = v5 + v48; // R9
                int32_t v93 = 512 * v90; // R4
                int32_t v94 = 512 * v91 | v90 / 0x800000; // R5
                int32_t v95 = is_moto_hab_signed(v12, v78, v90, v91, v5, 0, 0, v9, v29, v35, v48, v49, v19, v24); // 0x8f620228
                int32_t v96 = v93 - v48; // 0x8f620230
                int32_t v97; // 0x8f620358
                int32_t result2; // 0x8f620388
                int32_t result3; // 0x8f6203ac_2
                int32_t v98;
                if (v95 == 0) {
                    // 0x8f6202e4
                    if (check_mbm_addr_range_overlap(v92, v96, v48) != 0) {
                        // 0x8f6202f4
                        v38 = v91 & -0x10000 | 1204;
                        // branch -> 0x8f6202f8
                        // 0x8f6202f8
                        print_log(-1, (int32_t)"%s:%s(%d): Address overlap with aboot address.\n", (int32_t)"app/mbm/linux_boot.c", (int32_t)"load_and_validate_kernel_image", v38, 0, 0, v9, v29, v35, v48, v49, v19);
                        // branch -> 0x8f62034c
                        // 0x8f62034c
                        result = -1;
                        // branch -> 0x8f62038c
                        // 0x8f62038c
                        if (v3 == g23) {
                            // 0x8f6203a8
                            return result;
                        }
                        // 0x8f6203a4
                        __stack_chk_fail();
                        // branch -> 0x8f6203a8
                        // 0x8f6203a8
                        return result;
                    }
                    uint32_t v99 = v33 + v48; // 0x8f62031c
                    int32_t v100 = v36 + v79 + (int32_t)(v99 < v48); // 0x8f620324
                    int32_t v101 = v93 - v48; // 0x8f620328
                    int32_t v102 = v94 - v79 + (int32_t)(v93 < v48); // 0x8f62032c
                    v4 = v102;
                    if (generic_mmc_read_logical(v99, v100, v101, v102, v92, 0, 0, v9, v29, v35, v48, v49, v19, v24, v48, v79, 0, v3, 0, g33, g34, g35, g36) == 0) {
                        // 0x8f620354
                        v97 = bs_set_timestamp(5, v100, v101, v4, v92, 0, 0, v9);
                        if (v3 == g23) {
                            // 0x8f620370
                            result2 = validate_partition(v12, v5, v93, 0, g33, g34, g35, g36, g37, g38, g30, v1, v2, v98, 0, 0, 0, 0, 0, 0);
                            return result2;
                        }
                        // 0x8f6203a4
                        __stack_chk_fail();
                        result3 = v97;
                        // branch -> 0x8f6203a8
                    } else {
                        // 0x8f62033c
                        // branch -> 0x8f620344
                        // 0x8f620344
                        print_log(0, (int32_t)"Failed to load kernel image for %s\n", a1, v4, v92, 0, 0, v9, v29, v35, v48, v49, v19);
                        // branch -> 0x8f62034c
                        // 0x8f62034c
                        result = -1;
                        // branch -> 0x8f62038c
                        // 0x8f62038c
                        if (v3 != g23) {
                            // 0x8f6203a4
                            __stack_chk_fail();
                            result3 = result;
                            // branch -> 0x8f6203a8
                        } else {
                            result3 = result;
                        }
                    }
                    // 0x8f6203a8
                    return result3;
                }
                int32_t v103 = -1024 - get_signature_size(v12, v96, v48, v91) + v96; // 0x8f620258
                memset((char *)v92, 255, v103);
                v92 += v103;
                int32_t v104 = get_signature_size(v12, 255, v103, v103) + 1024; // 0x8f62027c
                if (check_mbm_addr_range_overlap(v92, v104, v103) != 0) {
                    // if_8f62028c_0_true
                    v38 = g32 & -0x10000 | 1195;
                    // branch -> 0x8f6202f8
                    // 0x8f6202f8
                    print_log(-1, (int32_t)"%s:%s(%d): Address overlap with aboot address.\n", (int32_t)"app/mbm/linux_boot.c", (int32_t)"load_and_validate_kernel_image", v38, 0, 0, v103, v29, v35, v48, v49, v19);
                    // branch -> 0x8f62034c
                    // 0x8f62034c
                    result = -1;
                    // branch -> 0x8f62038c
                    // 0x8f62038c
                    if (v3 == g23) {
                        // 0x8f6203a8
                        return result;
                    }
                    // 0x8f6203a4
                    __stack_chk_fail();
                    // branch -> 0x8f6203a8
                    // 0x8f6203a8
                    return result;
                }
                uint32_t v105 = v33 + v93; // 0x8f620294
                int32_t v106 = get_signature_size(v12, v104, v103, g32) + 1024; // 0x8f6202a4
                int32_t v107 = (int32_t)(v106 < 0) + v36 + v94 + (int32_t)(v105 < v33) + (int32_t)(v105 < v106); // 0x8f6202ac
                int32_t v108 = get_signature_size(v12, v104, v103, g32) + 1024; // 0x8f6202c0
                int32_t v109 = v108 >> 31; // 0x8f6202c8
                v4 = v109;
                if (generic_mmc_read_logical(v105 - v106, v107, v108, v109, v92, 0, 0, v103, v29, v35, v48, v49, v19, v24, v48, v79, 0, v3, 0, g33, g34, g35, g36) == 0) {
                    // 0x8f620354
                    v97 = bs_set_timestamp(5, v107, v108, v4, v92, 0, 0, v103);
                    if (v3 == g23) {
                        // 0x8f620370
                        result2 = validate_partition(v12, v5, v93, 0, g33, g34, g35, g36, g37, g38, g30, v1, v2, v98, 0, 0, 0, 0, 0, 0);
                        return result2;
                    }
                    // 0x8f6203a4
                    __stack_chk_fail();
                    result3 = v97;
                    // branch -> 0x8f6203a8
                } else {
                    // if_8f6202d4_0_true
                    // branch -> 0x8f620344
                    // 0x8f620344
                    print_log(0, (int32_t)"Failed to load signature for %s\n", a1, v4, v92, 0, 0, v103, v29, v35, v48, v49, v19);
                    // branch -> 0x8f62034c
                    // 0x8f62034c
                    result = -1;
                    // branch -> 0x8f62038c
                    // 0x8f62038c
                    if (v3 != g23) {
                        // 0x8f6203a4
                        __stack_chk_fail();
                        result3 = result;
                        // branch -> 0x8f6203a8
                    } else {
                        result3 = result;
                    }
                }
                // 0x8f6203a8
                return result3;
            }
            // 0x8f62010c
            // branch -> 0x8f620114
            // 0x8f620114
            print_log(5, (int32_t)"Invalid boot image size!", v74, v75, v5, 0, 0, v9, v29, v35, v48, v49, v19);
            // branch -> 0x8f62034c
            // 0x8f62034c
            // branch -> 0x8f62038c
            // 0x8f62038c
            if (v3 != g23) {
                // 0x8f6203a4
                __stack_chk_fail();
                // branch -> 0x8f6203a8
            }
            // 0x8f6203a8
            return -1;
        }
        // if_8f61ffb8_0_true
        // branch -> 0x8f620114
        // 0x8f620114
        print_log(-1, (int32_t)"Error: reading boot header\n", v37, 0, v5, 0, 0, v9, v29, v35, v6, v13, v19);
        // branch -> 0x8f62034c
    } else {
        // if_8f61ff94_0_true
        v38 = g32 & -0x10000 | 1139;
        // branch -> 0x8f6202f8
        // 0x8f6202f8
        print_log(-1, (int32_t)"%s:%s(%d): Address overlap with aboot address.\n", (int32_t)"app/mbm/linux_boot.c", (int32_t)"load_and_validate_kernel_image", v38, 0, 0, v9, v29, v35, v6, v13, v19);
        // branch -> 0x8f62034c
    }
    // 0x8f62034c
    // branch -> 0x8f62038c
    // 0x8f62038c
    if (v3 != g23) {
        // 0x8f6203a4
        __stack_chk_fail();
        // branch -> 0x8f6203a8
    }
    // 0x8f6203a8
    return -1;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int isprint(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int printf(const char * restrict format, ...);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:53:26
