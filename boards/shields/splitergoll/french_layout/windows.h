#pragma once

#include "function.h"

// Lettres
#define    FR_A    Q       // A
#define    FR_B    B       // B
#define    FR_C    C       // C
#define    FR_D    D       // D
#define    FR_E    E       // E
#define    FR_F    F       // F
#define    FR_G    G       // G
#define    FR_H    H       // H
#define    FR_I    I       // I
#define    FR_J    J       // J
#define    FR_K    K       // K
#define    FR_L    L       // L
#define    FR_M    SEMI    // M
#define    FR_N    N       // N
#define    FR_O    O       // O
#define    FR_P    P       // P
#define    FR_Q    A       // Q
#define    FR_R    R       // R
#define    FR_S    S       // S
#define    FR_T    T       // T
#define    FR_U    U       // U
#define    FR_V    V       // V
#define    FR_W    Z       // W
#define    FR_X    X       // X
#define    FR_Y    Y       // Y
#define    FR_Z    W       // Z

// Dead accents
#define    FR_AGU    N4           // '
#define    FR_GRV    RA(N7)       // ` (dead)
#define    FR_CIR    LBKT         // ^ (dead)
#define    FR_TRE    LBRC         // ¨ (dead)
#define    FR_TLD    RA(N2)       // ~ (dead)

// Lettres with accents
MACRO_DOUBLE_SHIFT(fr_a_grv_up, FR_GRV, FR_A)    // À
MACRO_DOUBLE(fr_a_grv, FR_GRV, FR_A)             // à
MACRO_ALT_CODE(fr_c_ced_up,      1, 2, 8)        // Ç
MACRO_ALT_CODE(fr_c_ced,         1, 3, 5)        // ç
MACRO_ALT_CODE(fr_e_agu_up,      1, 4, 4)        // É
MACRO_ALT_CODE(fr_e_agu,         1, 3, 0)        // é
MACRO_DOUBLE_SHIFT(fr_e_grv_up, FR_GRV, FR_E)    // È
MACRO_DOUBLE(fr_e_grv, FR_GRV, FR_E)             // è
MACRO_DOUBLE_SHIFT(fr_e_cir_up, FR_CIR, FR_E)    // Ê
MACRO_DOUBLE(fr_e_cir, FR_CIR, FR_E)             // ê
MACRO_DOUBLE_SHIFT(fr_e_tre_up, FR_TRE, FR_E)    // Ë
MACRO_DOUBLE(fr_e_tre, FR_TRE, FR_E)             // ë
MACRO_DOUBLE_SHIFT(fr_i_cir_up, FR_CIR, FR_I)    // Î
MACRO_DOUBLE(fr_i_cir, FR_CIR, FR_I)             // î
MACRO_DOUBLE_SHIFT(fr_i_tre_up, FR_TRE, FR_I)    // Ï
MACRO_DOUBLE(fr_i_tre, FR_TRE, FR_I)             // ï
MACRO_DOUBLE_SHIFT(fr_o_cir_up, FR_CIR, FR_O)    // Ô
MACRO_DOUBLE(fr_o_cir, FR_CIR, FR_O)             // ô
MACRO_DOUBLE_SHIFT(fr_u_grv_up, FR_GRV, FR_U)    // Ù
MACRO_DOUBLE(fr_u_grv, FR_GRV, FR_U)             // ù

// Numbers
#define    FR_1    KP_N1     // 1
#define    FR_2    KP_N2     // 2
#define    FR_3    KP_N3     // 3
#define    FR_4    KP_N4     // 4
#define    FR_5    KP_N5     // 5
#define    FR_6    KP_N6     // 6
#define    FR_7    KP_N7     // 7
#define    FR_8    KP_N8     // 8
#define    FR_9    KP_N9     // 9
#define    FR_0    KP_N0     // 0

// Ponctuation
#define    FR_COMMA     COMMA    // ,
#define    FR_DOT       DOT      // .
#define    FR_SEMI      SEMI     // ;
#define    FR_COLON     COLON    // :
#define    FR_EXCL      EXCL     // !
#define    FR_QMARK     QMARK    // ?
#define    FR_SLASH     SLASH    // slash
#define    FR_BSLASH    BSLH     // backslash


// Symbols
#define    FR_EQUAL    EQUAL       // =
#define    FR_PLUS     KP_PLUS     // +
#define    FR_MINUS    KP_MINUS    // -
#define    FR_ASTER    KP_MULTIPLY // *
#define    FR_DIV      KP_SLASH    // /