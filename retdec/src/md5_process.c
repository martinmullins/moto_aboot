//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ----------------- Float Types Definitions ------------------

typedef float float32_t;

// ------------------- Function Prototypes --------------------

int32_t confession_get_buffer(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_get_chars(int32_t a1, int32_t a2, int32_t a3);
int32_t decode_hw_type(char * a1, int32_t a2, int32_t a3);
int32_t display_clear_screen(void);
int32_t display_draw_image(char * str, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t display_draw_image_center(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_draw_image_scr_center(char * str, uint32_t a2, uint32_t a3);
void function_8f64aacc(void);
void function_8f64ab04(int32_t a1, int32_t a2, int32_t a3);
int32_t get_hw_rev(int32_t a1, int32_t a2, int32_t a3);
int32_t get_hw_sku(int32_t a1, int32_t a2, int32_t a3);
int32_t get_last_kmsg(int32_t * a1, int32_t a2);
int32_t gfx_create_surface_from_display(int32_t * a1);
int32_t gfx_surface_destroy(char * a1, int32_t a2, int32_t a3, int32_t a4);
char * hwrev_from_utag(void);
int32_t load_and_validate_oem_image(void);
char * lz4_decode(char * a1, uint32_t a2, int32_t a3, uint32_t a4);
int32_t mcs_DER_decodeBoolean(char * a1, int16_t a2, int32_t a3);
int32_t mcs_DER_fieldLengths(int32_t a1, int16_t * a2);
int32_t mcs_memcmp(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_memset(char * a1, char a2, int32_t a3);
char * md5_process(int32_t a1, char * a2);
int32_t mdp_dma_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdp_dsi_cmd_off(int32_t a1, int32_t a2);
int32_t SecAESEncrypt(char * a1, int32_t a2, int32_t a3);
int32_t SecGetRndData(char * a1, unsigned char a2);
int32_t shutdown_modem(char * a1, int32_t a2, int32_t a3);
int32_t target_display_panel_node(char * a1, int32_t a2, int32_t a3);
int32_t type_atoi_105(char * str, int32_t a2, int32_t a3);
int32_t validate_boot_objects(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g16 = 0; // LR
int32_t g17 = 0; // R0
int32_t g18 = 0; // R1
int32_t g19 = 0; // R10
int32_t g20 = 0; // R11
int32_t g21 = 0; // R2
int32_t g22 = 0; // R3
int32_t g23 = 0; // R4
int32_t g24 = 0; // R5
int32_t g25 = 0; // R6
int32_t g26 = 0; // R7
int32_t g27 = 0; // R8
int32_t g28 = 0; // R9
int32_t g1 = -0x16d2b010; // 0x8f658270
char * g2 = "\x01"; // 0x8f6a4214
char * g3 = "\x01"; // 0x8f6a4258
int32_t g4 = -1; // 0x8f6ac1f4
int32_t g5 = 2; // 0x8f6afe0c
char * g6; // 0x8f6b7990
char * g7; // 0x8f6b79a0
int32_t g8 = 0; // 0x8f6b7c38
int32_t g9 = 0; // 0x8f6e0c34
int32_t g10 = 0; // 0x8f6e0c38
int32_t g11 = 0; // 0x8f6e0c3c
char * g12; // 0x8f6e0c40
int32_t g13 = 0; // 0x8f6e12ec
int32_t g14 = 0; // 0x8f6e12f0
int32_t g15 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f659c9c - 0x8f65a753
char * md5_process(int32_t a1, char * a2) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = g15;
    int32_t v3 = v1; // R10
    int32_t v4 = *(int32_t *)(a1 + 8); // 0x8f659cb8
    int32_t v5 = *(int32_t *)(a1 + 12); // R5
    int32_t v6 = *(int32_t *)(a1 + 16); // 0x8f659cc4
    int32_t v7 = *(int32_t *)(a1 + 20); // R8
    char v8 = *(char *)&g3; // 0x8f659cc8
    int32_t v9 = v8; // 0x8f659cc8
    int32_t v10; // 0x8f659cf8_0
    int32_t * v11; // 0x8f65a5d0_0
    int32_t * v12; // 0x8f65a5fc_0
    int32_t * v13; // 0x8f65a61c_0
    int32_t v14; // R0
    int32_t v15; // R12
    int32_t v16; // R1
    int32_t v17; // R6
    int32_t v18;
    int32_t v19; // 0x8f65a5ec
    int32_t v20; // 0x8f659d58
    int32_t v21; // 0x8f659d7c
    int32_t v22; // 0x8f659db0
    int32_t v23; // 0x8f659de8
    int32_t v24; // 0x8f659e14
    int32_t v25; // 0x8f659e38
    int32_t v26; // 0x8f659e60
    int32_t v27; // 0x8f659e8c
    int32_t v28; // 0x8f659eb8
    int32_t v29; // 0x8f659edc
    int32_t v30; // 0x8f659ef8
    int32_t v31; // 0x8f659f14
    int32_t v32; // 0x8f659f34
    int32_t v33; // 0x8f659f64
    int32_t v34; // 0x8f659f8c
    int32_t v35; // 0x8f659fb8
    int32_t v36; // 0x8f659fe0
    int32_t v37; // 0x8f65a008
    int32_t v38; // 0x8f65a024
    int32_t v39; // 0x8f65a048
    int32_t v40; // 0x8f65a068
    int32_t v41; // 0x8f65a094
    int32_t v42; // 0x8f65a0ac
    int32_t v43; // 0x8f65a0d4
    int32_t v44; // 0x8f65a0f8
    int32_t v45; // 0x8f65a118
    int32_t v46; // 0x8f65a138
    int32_t v47; // 0x8f65a164
    int32_t v48; // 0x8f65a184
    int32_t v49; // 0x8f65a1a4
    int32_t v50; // 0x8f65a1cc
    int32_t v51; // 0x8f65a1f8
    int32_t v52; // 0x8f65a208
    int32_t v53; // 0x8f65a230
    int32_t v54; // 0x8f65a24c
    int32_t v55; // 0x8f65a268
    int32_t v56; // 0x8f65a284
    int32_t v57; // 0x8f65a2a8
    int32_t v58; // 0x8f65a2c8
    int32_t v59; // 0x8f65a2e4
    int32_t v60; // 0x8f65a308
    int32_t v61; // 0x8f65a324
    int32_t v62; // 0x8f65a344
    int32_t v63; // 0x8f65a360
    int32_t v64; // 0x8f65a384
    int32_t v65; // 0x8f65a3a0
    int32_t v66; // 0x8f65a3bc
    int32_t v67; // 0x8f65a3dc
    int32_t v68; // 0x8f65a400
    int32_t v69; // 0x8f65a428
    int32_t v70; // 0x8f65a448
    int32_t v71; // 0x8f65a470
    int32_t v72; // 0x8f65a490
    int32_t v73; // 0x8f65a4b4
    int32_t v74; // 0x8f65a4d8
    int32_t v75; // 0x8f65a4fc
    int32_t v76; // 0x8f65a520
    int32_t v77; // 0x8f65a53c
    int32_t v78; // 0x8f65a560
    int32_t v79; // 0x8f65a584
    int32_t v80; // 0x8f65a5a0
    int32_t v81; // 0x8f65a5c4
    int32_t v82; // 0x8f65a5ec
    int32_t v83; // 0x8f659dfc
    int32_t v84; // 0x8f659f08
    int32_t v85; // 0x8f65a61c
    int32_t v86; // 0x8f659d2c
    int32_t v87; // 0x8f659d2c
    int32_t v88; // 0x8f659d30
    int32_t v89; // 0x8f659d34
    int32_t v90; // 0x8f659d4c
    int32_t v91; // 0x8f659d54
    int32_t v92; // 0x8f659d70
    int32_t v93; // 0x8f659d80
    int32_t v94; // 0x8f659d98
    int32_t v95; // 0x8f659da0
    int32_t v96; // 0x8f659da8
    int32_t v97; // 0x8f659dfc
    int32_t v98; // 0x8f659e10
    int32_t v99; // 0x8f659e4c
    int32_t v100; // 0x8f659e84
    int32_t v101; // 0x8f659f08
    int32_t v102; // 0x8f659f30
    int32_t v103; // 0x8f659f58
    int32_t v104; // 0x8f659f74
    int32_t v105; // 0x8f659f84
    int32_t v106; // 0x8f659f98
    int32_t v107; // 0x8f65a028
    int32_t v108; // 0x8f65a0f4
    int32_t v109; // 0x8f65a388
    uint32_t v110; // 0x8f659d48
    uint32_t v111; // 0x8f659d74
    uint32_t v112; // 0x8f659da4
    uint32_t v113; // 0x8f659de0
    uint32_t v114; // 0x8f659e08
    uint32_t v115; // 0x8f659e2c
    uint32_t v116; // 0x8f659e54
    uint32_t v117; // 0x8f659e80
    uint32_t v118; // 0x8f659eb0
    uint32_t v119; // 0x8f659ed0
    uint32_t v120; // 0x8f659ef4
    uint32_t v121; // 0x8f659f0c
    uint32_t v122; // 0x8f659f2c
    uint32_t v123; // 0x8f659f5c
    uint32_t v124; // 0x8f659f80
    uint32_t v125; // 0x8f659fb0
    uint32_t v126; // 0x8f659fd0
    uint32_t v127; // 0x8f659ff8
    uint32_t v128; // 0x8f65a01c
    uint32_t v129; // 0x8f65a040
    uint32_t v130; // 0x8f65a060
    uint32_t v131; // 0x8f65a088
    uint32_t v132; // 0x8f65a0a4
    uint32_t v133; // 0x8f65a0cc
    uint32_t v134; // 0x8f65a0f0
    uint32_t v135; // 0x8f65a110
    uint32_t v136; // 0x8f65a130
    uint32_t v137; // 0x8f65a158
    uint32_t v138; // 0x8f65a17c
    uint32_t v139; // 0x8f65a19c
    uint32_t v140; // 0x8f65a1c0
    uint32_t v141; // 0x8f65a1ec
    uint32_t v142; // 0x8f65a200
    uint32_t v143; // 0x8f65a220
    uint32_t v144; // 0x8f65a240
    uint32_t v145; // 0x8f65a25c
    uint32_t v146; // 0x8f65a278
    uint32_t v147; // 0x8f65a29c
    uint32_t v148; // 0x8f65a2b8
    uint32_t v149; // 0x8f65a2d8
    uint32_t v150; // 0x8f65a2fc
    uint32_t v151; // 0x8f65a318
    uint32_t v152; // 0x8f65a334
    uint32_t v153; // 0x8f65a354
    uint32_t v154; // 0x8f65a378
    uint32_t v155; // 0x8f65a394
    uint32_t v156; // 0x8f65a3b0
    uint32_t v157; // 0x8f65a3d0
    uint32_t v158; // 0x8f65a3f4
    uint32_t v159; // 0x8f65a418
    uint32_t v160; // 0x8f65a440
    uint32_t v161; // 0x8f65a460
    uint32_t v162; // 0x8f65a488
    uint32_t v163; // 0x8f65a4a8
    uint32_t v164; // 0x8f65a4cc
    uint32_t v165; // 0x8f65a4ec
    uint32_t v166; // 0x8f65a510
    uint32_t v167; // 0x8f65a534
    uint32_t v168; // 0x8f65a554
    uint32_t v169; // 0x8f65a574
    uint32_t v170; // 0x8f65a598
    uint32_t v171; // 0x8f65a5b8
    uint32_t v172; // 0x8f65a5d8
    uint32_t v173; // 0x8f65a60c
    int32_t v174; // 0x8f65a62c
    if (v8 != 0) {
        // 0x8f659cd4
        if (v1 % 4 != 0) {
            int32_t v175 = &v18; // 0x8f659cdc_0
            memcpy((char *)&v18, a2, 64);
            v3 = v175;
            v10 = v175;
            // branch -> 0x8f659d28
        } else {
            v10 = v1;
        }
        // 0x8f659d28
        v86 = v5;
        v87 = v7;
        v88 = v6;
        v89 = *(int32_t *)v10;
        v17 = v89;
        v110 = (v88 & v86 | v87 & -1 - v86) + v89 + v4 - 0x28955b88;
        v90 = *(int32_t *)(v10 + 4);
        v91 = *(int32_t *)(v10 + 20);
        v20 = (128 * v110 | v110 / 0x2000000) + v86;
        v92 = *(int32_t *)(v10 + 8);
        v111 = (v20 & v86 | v88 & -1 - v20) + v90 + v87 - 0x173848aa;
        v21 = (0x1000 * v111 | v111 / 0x100000) + v20;
        v93 = *(int32_t *)(v10 + 24);
        v94 = *(int32_t *)(v10 + 16);
        v95 = *(int32_t *)(v10 + 28);
        v112 = (v86 & -1 - v21 | v21 & v20) + v88 + 0x242070db + v92;
        v96 = *(int32_t *)(v10 + 12);
        v22 = (0x20000 * v112 | v112 / 0x8000) + v21;
        v113 = v86 - 0x3e423112 + v96 + (v20 & -1 - v22 | v22 & v21);
        v23 = (0x400000 * v113 | v113 / 1024) + v22;
        v83 = v3;
        v97 = *(int32_t *)(v83 + 36);
        v114 = (v21 & -1 - v23 | v23 & v22) + v94 - 0xa83f051 + v20;
        v98 = *(int32_t *)(v83 + 40);
        v24 = (128 * v114 | v114 / 0x2000000) + v23;
        v115 = v21 + v91 + 0x4787c62a + (v24 & v23 | v22 & -1 - v24);
        v25 = (0x1000 * v115 | v115 / 0x100000) + v24;
        v99 = *(int32_t *)(v83 + 44);
        v116 = (v25 & v24 | v23 & -1 - v25) + v93 - 0x57cfb9ed + v22;
        v26 = (0x20000 * v116 | v116 / 0x8000) + v25;
        v117 = (v26 & v25 | v24 & -1 - v26) + v95 - 0x2b96aff + v23;
        v100 = *(int32_t *)(v83 + 32);
        v27 = (0x400000 * v117 | v117 / 1024) + v26;
        v118 = v100 + 0x698098d8 + v24 + (v27 & v26 | v25 & -1 - v27);
        v28 = (128 * v118 | v118 / 0x2000000) + v27;
        v119 = v97 - 0x74bb0851 + v25 + (v26 & -1 - v28 | v28 & v27);
        v29 = (0x1000 * v119 | v119 / 0x100000) + v28;
        v120 = v98 - 0xa44f + v26 + (v27 & -1 - v29 | v29 & v28);
        v30 = (0x20000 * v120 | v120 / 0x8000) + v29;
        v84 = v3;
        v101 = *(int32_t *)(v84 + 48);
        v15 = v101;
        v121 = (v28 & -1 - v30 | v30 & v29) + v99 - 0x76a32842 + v27;
        v31 = (0x400000 * v121 | v121 / 1024) + v30;
        v122 = (v29 & -1 - v31 | v31 & v30) + v101 + 0x6b901122 + v28;
        v102 = *(int32_t *)(v84 + 52);
        v32 = (128 * v122 | v122 / 0x2000000) + v31;
        v103 = *(int32_t *)(v84 + 56);
        v5 = v103;
        v123 = (v30 & -1 - v32 | v32 & v31) + v102 - 0x2678e6d + v29;
        v33 = (0x1000 * v123 | v123 / 0x100000) + v32;
        v104 = -1 - v33;
        v124 = (v31 & v104 | v33 & v32) + v103 - 0x5986bc72 + v30;
        v105 = *(int32_t *)(v84 + 60);
        v16 = v105;
        v34 = (0x20000 * v124 | v124 / 0x8000) + v33;
        v106 = -1 - v34;
        v125 = v105 + 0x49b40821 + v31 + (v34 & v33 | v32 & v106);
        v35 = (0x400000 * v125 | v125 / 1024) + v34;
        v126 = v90 - 0x9e1da9e + v32 + (v35 & v33 | v34 & v104);
        v36 = (32 * v126 | v126 / 0x8000000) + v35;
        v127 = v93 - 0x3fbf4cc0 + v33 + (v36 & v34 | v35 & v106);
        v37 = (512 * v127 | v127 / 0x800000) + v36;
        v128 = v99 + 0x265e5a51 + v34 + (v37 & v35 | v36 & -1 - v35);
        v38 = (0x4000 * v128 | v128 / 0x40000) + v37;
        v107 = v17;
        v129 = v107 - 0x16493856 + v35 + (v38 & v36 | v37 & -1 - v36);
        v39 = (0x100000 * v129 | v129 / 0x1000) + v38;
        v130 = v91 - 0x29d0efa3 + v36 + (v39 & v37 | v38 & -1 - v37);
        v40 = (32 * v130 | v130 / 0x8000000) + v39;
        v131 = v98 + 0x2441453 + v37 + (v40 & v38 | v39 & -1 - v38);
        v41 = (512 * v131 | v131 / 0x800000) + v40;
        v132 = v105 - 0x275e197f + v38 + (v41 & v39 | v40 & -1 - v39);
        v42 = (0x4000 * v132 | v132 / 0x40000) + v41;
        v133 = v94 - 0x182c0438 + v39 + (v42 & v40 | v41 & -1 - v40);
        v43 = (0x100000 * v133 | v133 / 0x1000) + v42;
        v134 = v97 + 0x21e1cde6 + v40 + (v43 & v41 | v42 & -1 - v41);
        v108 = v5;
        v44 = (32 * v134 | v134 / 0x8000000) + v43;
        v135 = v108 - 0x3cc8f82a + v41 + (v44 & v42 | v43 & -1 - v42);
        v45 = (512 * v135 | v135 / 0x800000) + v44;
        v136 = v96 - 0xb2af279 + v42 + (v45 & v43 | v44 & -1 - v43);
        v46 = (0x4000 * v136 | v136 / 0x40000) + v45;
        v137 = v100 + 0x455a14ed + v43 + (v46 & v44 | v45 & -1 - v44);
        v47 = (0x100000 * v137 | v137 / 0x1000) + v46;
        v138 = v102 - 0x561c16fb + v44 + (v47 & v45 | v46 & -1 - v45);
        v48 = (32 * v138 | v138 / 0x8000000) + v47;
        v139 = v92 - 0x3105c08 + v45 + (v48 & v46 | v47 & -1 - v46);
        v49 = (512 * v139 | v139 / 0x800000) + v48;
        v140 = v95 + 0x676f02d9 + v46 + (v49 & v47 | v48 & -1 - v47);
        v50 = (0x4000 * v140 | v140 / 0x40000) + v49;
        v141 = v15 - 0x72d5b376 + v47 + (v50 & v48 | v49 & -1 - v48);
        v51 = (0x100000 * v141 | v141 / 0x1000) + v50;
        v142 = v91 - 0x5c6be + v48 + (v50 ^ v49 ^ v51);
        v52 = (16 * v142 | v142 / 0x10000000) + v51;
        v143 = v100 - 0x788e097f + v49 + (v51 ^ v50 ^ v52);
        v53 = (2048 * v143 | v143 / 0x200000) + v52;
        v144 = v99 + 0x6d9d6122 + v50 + (v52 ^ v51 ^ v53);
        v54 = (0x10000 * v144 | v144 / 0x10000) + v53;
        v145 = v108 - 0x21ac7f4 + v51 + (v53 ^ v52 ^ v54);
        v55 = (0x800000 * v145 | v145 / 512) + v54;
        v146 = v90 - 0x5b4115bc + v52 + (v54 ^ v53 ^ v55);
        v56 = (16 * v146 | v146 / 0x10000000) + v55;
        v147 = v94 + 0x4bdecfa9 + v53 + (v55 ^ v54 ^ v56);
        v57 = (2048 * v147 | v147 / 0x200000) + v56;
        v148 = v95 - 0x944b4a0 + v54 + (v56 ^ v55 ^ v57);
        v58 = (0x10000 * v148 | v148 / 0x10000) + v57;
        v149 = v98 - 0x41404390 + v55 + (v57 ^ v56 ^ v58);
        v59 = (0x800000 * v149 | v149 / 512) + v58;
        v150 = v102 + 0x289b7ec6 + v56 + (v58 ^ v57 ^ v59);
        v60 = (16 * v150 | v150 / 0x10000000) + v59;
        v151 = v107 - 0x155ed806 + v57 + (v59 ^ v58 ^ v60);
        v61 = (2048 * v151 | v151 / 0x200000) + v60;
        v152 = v96 - 0x2b10cf7b + v58 + (v60 ^ v59 ^ v61);
        v62 = (0x10000 * v152 | v152 / 0x10000) + v61;
        v153 = v93 + 0x4881d05 + v59 + (v61 ^ v60 ^ v62);
        v63 = (0x800000 * v153 | v153 / 512) + v62;
        v154 = v97 - 0x262b2fc7 + v60 + (v62 ^ v61 ^ v63);
        v64 = (16 * v154 | v154 / 0x10000000) + v63;
        v109 = v15;
        v155 = v109 - 0x1924661b + v61 + (v63 ^ v62 ^ v64);
        v65 = (2048 * v155 | v155 / 0x200000) + v64;
        v156 = v16 + 0x1fa27cf8 + v62 + (v64 ^ v63 ^ v65);
        v66 = (0x10000 * v156 | v156 / 0x10000) + v65;
        v157 = v92 - 0x3b53a99b + v63 + (v65 ^ v64 ^ v66);
        v67 = (0x800000 * v157 | v157 / 512) + v66;
        v158 = v17 - 0xbd6ddbc + v64 + ((v67 | -1 - v65) ^ v66);
        v68 = (64 * v158 | v158 / 0x4000000) + v67;
        v159 = v95 + 0x432aff97 + v65 + ((v68 | -1 - v66) ^ v67);
        v69 = (1024 * v159 | v159 / 0x400000) + v68;
        v160 = v5 - 0x546bdc59 + v66 + ((v69 | -1 - v67) ^ v68);
        v70 = (0x8000 * v160 | v160 / 0x20000) + v69;
        v161 = v91 - 0x36c5fc7 + v67 + ((v70 | -1 - v68) ^ v69);
        v71 = (0x200000 * v161 | v161 / 2048) + v70;
        v162 = v109 + 0x655b59c3 + v68 + ((v71 | -1 - v69) ^ v70);
        v72 = (64 * v162 | v162 / 0x4000000) + v71;
        v163 = v96 - 0x70f3336e + v69 + ((v72 | -1 - v70) ^ v71);
        v73 = (1024 * v163 | v163 / 0x400000) + v72;
        v164 = v98 - 0x100b83 + v70 + ((v73 | -1 - v71) ^ v72);
        v74 = (0x8000 * v164 | v164 / 0x20000) + v73;
        v165 = v90 - 0x7a7ba22f + v71 + ((v74 | -1 - v72) ^ v73);
        v75 = (0x200000 * v165 | v165 / 2048) + v74;
        v166 = v100 + 0x6fa87e4f + v72 + ((v75 | -1 - v73) ^ v74);
        v76 = (64 * v166 | v166 / 0x4000000) + v75;
        v167 = v16 - 0x1d31920 + v73 + ((v76 | -1 - v74) ^ v75);
        v77 = (1024 * v167 | v167 / 0x400000) + v76;
        v168 = v93 - 0x5cfebcec + v74 + ((v77 | -1 - v75) ^ v76);
        v78 = (0x8000 * v168 | v168 / 0x20000) + v77;
        v169 = v102 + 0x4e0811a1 + v75 + ((v78 | -1 - v76) ^ v77);
        v79 = (0x200000 * v169 | v169 / 2048) + v78;
        v170 = v94 - 0x8ac817e + v76 + ((v79 | -1 - v77) ^ v78);
        v80 = (64 * v170 | v170 / 0x4000000) + v79;
        v171 = v99 - 0x42c50dcb + v77 + ((v80 | -1 - v78) ^ v79);
        v81 = (1024 * v171 | v171 / 0x400000) + v80;
        v14 = v81;
        v11 = (int32_t *)(a1 + 8);
        v172 = ((v81 | -1 - v79) ^ v80) + v78 + v92 + 0x2ad7d2bb;
        *v11 = v80 + *v11;
        v19 = v14;
        v82 = (0x8000 * v172 | v172 / 0x20000) + v19;
        v12 = (int32_t *)(a1 + 12);
        v173 = v79 + v97 - 0x14792c6f + ((v82 | -1 - v80) ^ v19);
        *v12 = (0x200000 * v173 | v173 / 2048) + v82 + *v12;
        v85 = a1;
        v13 = (int32_t *)(v85 + 16);
        *v13 = v82 + *v13;
        v174 = v14 + *(int32_t *)(v85 + 20);
        *(int32_t *)(a1 + 20) = v174;
        if (v2 != g15) {
            // 0x8f65a644
            __stack_chk_fail();
            // branch -> 0x8f65a648
        }
        // 0x8f65a648
        return (char *)v174;
    }
    // 0x8f659cf0
    v10 = &v18;
    int32_t v176 = v1; // 0x8f659cf0
    // branch -> 0x8f659cf0
    while (true) {
        int32_t v177 = v9 + v176; // 0x8f659cf0
        char v178 = *(char *)v177; // 0x8f659cf4
        char v179 = *(char *)(v177 + 1); // 0x8f659cfc
        char v180 = *(char *)(v177 + 2); // 0x8f659d04
        char v181 = *(char *)(v177 + 3); // 0x8f659d08
        *(int32_t *)(v9 + v10) = 0x10000 * (int32_t)v180 + 256 * (int32_t)v179 + (int32_t)v178 + 0x1000000 * (int32_t)v181;
        int32_t v182 = v9 + 4; // 0x8f659d18
        if (v182 == 64) {
            // 0x8f659d24
            v3 = v10;
            // branch -> 0x8f659d28
            // 0x8f659d28
            v86 = v5;
            v87 = v7;
            v88 = v6;
            v89 = *(int32_t *)v10;
            v17 = v89;
            v110 = (v88 & v86 | v87 & -1 - v86) + v89 + v4 - 0x28955b88;
            v90 = *(int32_t *)(v10 + 4);
            v91 = *(int32_t *)(v10 + 20);
            v20 = (128 * v110 | v110 / 0x2000000) + v86;
            v92 = *(int32_t *)(v10 + 8);
            v111 = (v20 & v86 | v88 & -1 - v20) + v90 + v87 - 0x173848aa;
            v21 = (0x1000 * v111 | v111 / 0x100000) + v20;
            v93 = *(int32_t *)(v10 + 24);
            v94 = *(int32_t *)(v10 + 16);
            v95 = *(int32_t *)(v10 + 28);
            v112 = (v86 & -1 - v21 | v21 & v20) + v88 + 0x242070db + v92;
            v96 = *(int32_t *)(v10 + 12);
            v22 = (0x20000 * v112 | v112 / 0x8000) + v21;
            v113 = v86 - 0x3e423112 + v96 + (v20 & -1 - v22 | v22 & v21);
            v23 = (0x400000 * v113 | v113 / 1024) + v22;
            v83 = v3;
            v97 = *(int32_t *)(v83 + 36);
            v114 = (v21 & -1 - v23 | v23 & v22) + v94 - 0xa83f051 + v20;
            v98 = *(int32_t *)(v83 + 40);
            v24 = (128 * v114 | v114 / 0x2000000) + v23;
            v115 = v21 + v91 + 0x4787c62a + (v24 & v23 | v22 & -1 - v24);
            v25 = (0x1000 * v115 | v115 / 0x100000) + v24;
            v99 = *(int32_t *)(v83 + 44);
            v116 = (v25 & v24 | v23 & -1 - v25) + v93 - 0x57cfb9ed + v22;
            v26 = (0x20000 * v116 | v116 / 0x8000) + v25;
            v117 = (v26 & v25 | v24 & -1 - v26) + v95 - 0x2b96aff + v23;
            v100 = *(int32_t *)(v83 + 32);
            v27 = (0x400000 * v117 | v117 / 1024) + v26;
            v118 = v100 + 0x698098d8 + v24 + (v27 & v26 | v25 & -1 - v27);
            v28 = (128 * v118 | v118 / 0x2000000) + v27;
            v119 = v97 - 0x74bb0851 + v25 + (v26 & -1 - v28 | v28 & v27);
            v29 = (0x1000 * v119 | v119 / 0x100000) + v28;
            v120 = v98 - 0xa44f + v26 + (v27 & -1 - v29 | v29 & v28);
            v30 = (0x20000 * v120 | v120 / 0x8000) + v29;
            v84 = v3;
            v101 = *(int32_t *)(v84 + 48);
            v15 = v101;
            v121 = (v28 & -1 - v30 | v30 & v29) + v99 - 0x76a32842 + v27;
            v31 = (0x400000 * v121 | v121 / 1024) + v30;
            v122 = (v29 & -1 - v31 | v31 & v30) + v101 + 0x6b901122 + v28;
            v102 = *(int32_t *)(v84 + 52);
            v32 = (128 * v122 | v122 / 0x2000000) + v31;
            v103 = *(int32_t *)(v84 + 56);
            v5 = v103;
            v123 = (v30 & -1 - v32 | v32 & v31) + v102 - 0x2678e6d + v29;
            v33 = (0x1000 * v123 | v123 / 0x100000) + v32;
            v104 = -1 - v33;
            v124 = (v31 & v104 | v33 & v32) + v103 - 0x5986bc72 + v30;
            v105 = *(int32_t *)(v84 + 60);
            v16 = v105;
            v34 = (0x20000 * v124 | v124 / 0x8000) + v33;
            v106 = -1 - v34;
            v125 = v105 + 0x49b40821 + v31 + (v34 & v33 | v32 & v106);
            v35 = (0x400000 * v125 | v125 / 1024) + v34;
            v126 = v90 - 0x9e1da9e + v32 + (v35 & v33 | v34 & v104);
            v36 = (32 * v126 | v126 / 0x8000000) + v35;
            v127 = v93 - 0x3fbf4cc0 + v33 + (v36 & v34 | v35 & v106);
            v37 = (512 * v127 | v127 / 0x800000) + v36;
            v128 = v99 + 0x265e5a51 + v34 + (v37 & v35 | v36 & -1 - v35);
            v38 = (0x4000 * v128 | v128 / 0x40000) + v37;
            v107 = v17;
            v129 = v107 - 0x16493856 + v35 + (v38 & v36 | v37 & -1 - v36);
            v39 = (0x100000 * v129 | v129 / 0x1000) + v38;
            v130 = v91 - 0x29d0efa3 + v36 + (v39 & v37 | v38 & -1 - v37);
            v40 = (32 * v130 | v130 / 0x8000000) + v39;
            v131 = v98 + 0x2441453 + v37 + (v40 & v38 | v39 & -1 - v38);
            v41 = (512 * v131 | v131 / 0x800000) + v40;
            v132 = v105 - 0x275e197f + v38 + (v41 & v39 | v40 & -1 - v39);
            v42 = (0x4000 * v132 | v132 / 0x40000) + v41;
            v133 = v94 - 0x182c0438 + v39 + (v42 & v40 | v41 & -1 - v40);
            v43 = (0x100000 * v133 | v133 / 0x1000) + v42;
            v134 = v97 + 0x21e1cde6 + v40 + (v43 & v41 | v42 & -1 - v41);
            v108 = v5;
            v44 = (32 * v134 | v134 / 0x8000000) + v43;
            v135 = v108 - 0x3cc8f82a + v41 + (v44 & v42 | v43 & -1 - v42);
            v45 = (512 * v135 | v135 / 0x800000) + v44;
            v136 = v96 - 0xb2af279 + v42 + (v45 & v43 | v44 & -1 - v43);
            v46 = (0x4000 * v136 | v136 / 0x40000) + v45;
            v137 = v100 + 0x455a14ed + v43 + (v46 & v44 | v45 & -1 - v44);
            v47 = (0x100000 * v137 | v137 / 0x1000) + v46;
            v138 = v102 - 0x561c16fb + v44 + (v47 & v45 | v46 & -1 - v45);
            v48 = (32 * v138 | v138 / 0x8000000) + v47;
            v139 = v92 - 0x3105c08 + v45 + (v48 & v46 | v47 & -1 - v46);
            v49 = (512 * v139 | v139 / 0x800000) + v48;
            v140 = v95 + 0x676f02d9 + v46 + (v49 & v47 | v48 & -1 - v47);
            v50 = (0x4000 * v140 | v140 / 0x40000) + v49;
            v141 = v15 - 0x72d5b376 + v47 + (v50 & v48 | v49 & -1 - v48);
            v51 = (0x100000 * v141 | v141 / 0x1000) + v50;
            v142 = v91 - 0x5c6be + v48 + (v50 ^ v49 ^ v51);
            v52 = (16 * v142 | v142 / 0x10000000) + v51;
            v143 = v100 - 0x788e097f + v49 + (v51 ^ v50 ^ v52);
            v53 = (2048 * v143 | v143 / 0x200000) + v52;
            v144 = v99 + 0x6d9d6122 + v50 + (v52 ^ v51 ^ v53);
            v54 = (0x10000 * v144 | v144 / 0x10000) + v53;
            v145 = v108 - 0x21ac7f4 + v51 + (v53 ^ v52 ^ v54);
            v55 = (0x800000 * v145 | v145 / 512) + v54;
            v146 = v90 - 0x5b4115bc + v52 + (v54 ^ v53 ^ v55);
            v56 = (16 * v146 | v146 / 0x10000000) + v55;
            v147 = v94 + 0x4bdecfa9 + v53 + (v55 ^ v54 ^ v56);
            v57 = (2048 * v147 | v147 / 0x200000) + v56;
            v148 = v95 - 0x944b4a0 + v54 + (v56 ^ v55 ^ v57);
            v58 = (0x10000 * v148 | v148 / 0x10000) + v57;
            v149 = v98 - 0x41404390 + v55 + (v57 ^ v56 ^ v58);
            v59 = (0x800000 * v149 | v149 / 512) + v58;
            v150 = v102 + 0x289b7ec6 + v56 + (v58 ^ v57 ^ v59);
            v60 = (16 * v150 | v150 / 0x10000000) + v59;
            v151 = v107 - 0x155ed806 + v57 + (v59 ^ v58 ^ v60);
            v61 = (2048 * v151 | v151 / 0x200000) + v60;
            v152 = v96 - 0x2b10cf7b + v58 + (v60 ^ v59 ^ v61);
            v62 = (0x10000 * v152 | v152 / 0x10000) + v61;
            v153 = v93 + 0x4881d05 + v59 + (v61 ^ v60 ^ v62);
            v63 = (0x800000 * v153 | v153 / 512) + v62;
            v154 = v97 - 0x262b2fc7 + v60 + (v62 ^ v61 ^ v63);
            v64 = (16 * v154 | v154 / 0x10000000) + v63;
            v109 = v15;
            v155 = v109 - 0x1924661b + v61 + (v63 ^ v62 ^ v64);
            v65 = (2048 * v155 | v155 / 0x200000) + v64;
            v156 = v16 + 0x1fa27cf8 + v62 + (v64 ^ v63 ^ v65);
            v66 = (0x10000 * v156 | v156 / 0x10000) + v65;
            v157 = v92 - 0x3b53a99b + v63 + (v65 ^ v64 ^ v66);
            v67 = (0x800000 * v157 | v157 / 512) + v66;
            v158 = v17 - 0xbd6ddbc + v64 + ((v67 | -1 - v65) ^ v66);
            v68 = (64 * v158 | v158 / 0x4000000) + v67;
            v159 = v95 + 0x432aff97 + v65 + ((v68 | -1 - v66) ^ v67);
            v69 = (1024 * v159 | v159 / 0x400000) + v68;
            v160 = v5 - 0x546bdc59 + v66 + ((v69 | -1 - v67) ^ v68);
            v70 = (0x8000 * v160 | v160 / 0x20000) + v69;
            v161 = v91 - 0x36c5fc7 + v67 + ((v70 | -1 - v68) ^ v69);
            v71 = (0x200000 * v161 | v161 / 2048) + v70;
            v162 = v109 + 0x655b59c3 + v68 + ((v71 | -1 - v69) ^ v70);
            v72 = (64 * v162 | v162 / 0x4000000) + v71;
            v163 = v96 - 0x70f3336e + v69 + ((v72 | -1 - v70) ^ v71);
            v73 = (1024 * v163 | v163 / 0x400000) + v72;
            v164 = v98 - 0x100b83 + v70 + ((v73 | -1 - v71) ^ v72);
            v74 = (0x8000 * v164 | v164 / 0x20000) + v73;
            v165 = v90 - 0x7a7ba22f + v71 + ((v74 | -1 - v72) ^ v73);
            v75 = (0x200000 * v165 | v165 / 2048) + v74;
            v166 = v100 + 0x6fa87e4f + v72 + ((v75 | -1 - v73) ^ v74);
            v76 = (64 * v166 | v166 / 0x4000000) + v75;
            v167 = v16 - 0x1d31920 + v73 + ((v76 | -1 - v74) ^ v75);
            v77 = (1024 * v167 | v167 / 0x400000) + v76;
            v168 = v93 - 0x5cfebcec + v74 + ((v77 | -1 - v75) ^ v76);
            v78 = (0x8000 * v168 | v168 / 0x20000) + v77;
            v169 = v102 + 0x4e0811a1 + v75 + ((v78 | -1 - v76) ^ v77);
            v79 = (0x200000 * v169 | v169 / 2048) + v78;
            v170 = v94 - 0x8ac817e + v76 + ((v79 | -1 - v77) ^ v78);
            v80 = (64 * v170 | v170 / 0x4000000) + v79;
            v171 = v99 - 0x42c50dcb + v77 + ((v80 | -1 - v78) ^ v79);
            v81 = (1024 * v171 | v171 / 0x400000) + v80;
            v14 = v81;
            v11 = (int32_t *)(a1 + 8);
            v172 = ((v81 | -1 - v79) ^ v80) + v78 + v92 + 0x2ad7d2bb;
            *v11 = v80 + *v11;
            v19 = v14;
            v82 = (0x8000 * v172 | v172 / 0x20000) + v19;
            v12 = (int32_t *)(a1 + 12);
            v173 = v79 + v97 - 0x14792c6f + ((v82 | -1 - v80) ^ v19);
            *v12 = (0x200000 * v173 | v173 / 2048) + v82 + *v12;
            v85 = a1;
            v13 = (int32_t *)(v85 + 16);
            *v13 = v82 + *v13;
            v174 = v14 + *(int32_t *)(v85 + 20);
            *(int32_t *)(a1 + 20) = v174;
            if (v2 != g15) {
                // 0x8f65a644
                __stack_chk_fail();
                // branch -> 0x8f65a648
            }
            // 0x8f65a648
            return (char *)v174;
        }
        // 0x8f659cf0
        v176 = v3;
        v9 = v182;
        // branch -> 0x8f659cf0
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void free(void * ptr);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------- Instruction-Idiom Functions ----------------

// float32_t fabsf(float32_t a1);
// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:15