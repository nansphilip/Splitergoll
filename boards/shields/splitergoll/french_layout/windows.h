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
#define    FR_AGU    SQT          // ' (dead)
#define    FR_GRV    GRAVE        // ` (dead)
#define    FR_CIR    LS(N6)       // ^ (dead)
#define    FR_TRE    DQT          // ¨ (dead)
#define    FR_TLD    LS(GRAVE)    // ~ (dead)

// Lettres with accents
#define    FR_A_GRV    MACRO_DOUBLE(fr_a_grv, FR_GRV, LS(FR_A))    // À
#define    FR_a_GRV    MACRO_DOUBLE(fr_a_grv, FR_GRV, FR_A)        // À
#define    FR_C_CED    MACRO_DOUBLE(fr_c_ced, FR_AGU, LS(FR_C))    // Ç
#define    FR_c_CED    MACRO_DOUBLE(fr_c_ced, FR_AGU, FR_C)        // Ç
#define    FR_E_AGU    MACRO_DOUBLE(fr_e_agu, FR_AGU, LS(FR_E))    // É
#define    FR_e_AGU    MACRO_DOUBLE(fr_e_agu, FR_AGU, FR_E)        // É
#define    FR_E_GRV    MACRO_DOUBLE(fr_e_grv, FR_GRV, LS(FR_E))    // È
#define    FR_e_GRV    MACRO_DOUBLE(fr_e_grv, FR_GRV, FR_E)        // È
#define    FR_E_CIR    MACRO_DOUBLE(fr_e_cir, FR_CIR, LS(FR_E))    // Ê
#define    FR_e_CIR    MACRO_DOUBLE(fr_e_cir, FR_CIR, FR_E)        // Ê
#define    FR_E_TRE    MACRO_DOUBLE(fr_e_tre, FR_TRE, LS(FR_E))    // Ë
#define    FR_e_TRE    MACRO_DOUBLE(fr_e_tre, FR_TRE, FR_E)        // Ë
#define    FR_I_CIR    MACRO_DOUBLE(fr_i_cir, FR_CIR, LS(FR_I))    // Î
#define    FR_i_CIR    MACRO_DOUBLE(fr_i_cir, FR_CIR, FR_I)        // Î
#define    FR_I_TRE    MACRO_DOUBLE(fr_i_tre, FR_TRE, LS(FR_I))    // Ï  
#define    FR_i_TRE    MACRO_DOUBLE(fr_i_tre, FR_TRE, FR_I)        // Ï  
#define    FR_O_CIR    MACRO_DOUBLE(fr_o_cir, FR_CIR, LS(FR_O))    // Ô
#define    FR_o_CIR    MACRO_DOUBLE(fr_o_cir, FR_CIR, FR_O)        // Ô
#define    FR_U_GRV    MACRO_DOUBLE(fr_u_grv, FR_GRV, LS(FR_U))    // Ù
#define    FR_u_GRV    MACRO_DOUBLE(fr_u_grv, FR_GRV, FR_U)        // Ù

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