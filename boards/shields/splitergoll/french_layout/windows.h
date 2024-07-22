#pragma once

#include "../function.h"

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
// #define    FR_AGU    RA(SQT)      // ' (does not work on windows)
#define    FR_GRV    RA(N7)       // ` (dead)
#define    FR_CIR    LBKT         // ^ (dead)
#define    FR_TRE    LBRC         // ¨ (dead)
#define    FR_TLD    RA(N2)       // ~ (dead)

// TODOS : switch accents...

// Lettres with accents
ALT_CODE_3(fr_ag, 1, 3, 3)            // à
ALT_CODE_3(fr_ac, 1, 3, 1)            // â
ALT_CODE_3(fr_agu, 1, 8, 3)           // À
// MACRO(fr_ag, &kp FR_A &kp FR_GRV)        // à
// MACRO(fr_ac, &kp FR_A &kp FR_CIR)        // â
// MACRO(fr_agu, &kp LS(FR_A) &kp FR_GRV)   // À

ALT_CODE_3(fr_cc, 1, 3, 5)     // ç
ALT_CODE_3(fr_ccu, 1, 2, 8)    // Ç

ALT_CODE_3(fr_ea, 1, 3, 0)     // é
ALT_CODE_3(fr_eg, 1, 3, 8)     // è
ALT_CODE_3(fr_ec, 1, 3, 6)     // ê
ALT_CODE_3(fr_et, 1, 3, 7)     // ë
ALT_CODE_3(fr_eau, 1, 4, 4)    // É
ALT_CODE_3(fr_ecu, 2, 1, 0)    // Ê

ALT_CODE_3(fr_ic, 1, 4, 0)     // î
ALT_CODE_3(fr_it, 1, 3, 9)     // ï

ALT_CODE_3(fr_oc, 1, 4, 7)     // ô
ALT_CODE_3(fr_ocu, 2, 2, 6)    // Ô

ALT_CODE_3(fr_ug, 1, 5, 1)     // ù
ALT_CODE_3(fr_uc, 1, 5, 0)     // û
ALT_CODE_3(fr_mu, 2, 3, 0)     // μ

ALT_CODE_4(fr_oe, 0, 1, 5, 6)  // œ
ALT_CODE_4(fr_oeu, 0, 1, 4, 0) // Œ

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
#define    FR_COMMA     M         // ,
#define    FR_DOT       LS(COMMA) // .
#define    FR_SEMI      COMMA     // ;
#define    FR_COLON     DOT       // :
#define    FR_EXCL      SLASH     // !
#define    FR_QMARK     LS(M)     // ?
#define    FR_SLASH     LS(DOT)   // slash
#define    FR_BSLASH    RA(N8)    // backslash


// Calculs
#define    FR_EQAL    EQUAL       // =
#define    FR_PLUS    KP_PLUS     // +
#define    FR_MINS    KP_MINUS    // -
#define    FR_ASTR    KP_MULTIPLY // *
#define    FR_DIVI    KP_SLASH    // /
#define    FR_NUMB    LS(MINUS)   // °


// Brackets
#define    FR_LPAR    N5          // (
#define    FR_RPAR    MINUS       // )
#define    FR_LACC    RA(N4)      // {
#define    FR_RACC    RA(EQUAL)   // }
#define    FR_LCRO    RA(N5)      // [
#define    FR_RCRO    RA(MINUS)   // ]
#define    FR_LCHE    NUBS        // <
#define    FR_RCHE    LS(NUBS)    // >


// Quotes
#define    FR_QUOT    N3        // "
#define    FR_SQUO    N4        // '
ALT_CODE_3(fr_grv, 0, 9, 6)     // `

// Symbols
#define    FR_AT       RA(N0)     // @
#define    FR_HASH     RA(N3)     // #
#define    FR_DOLR     RBKT       // $
#define    FR_EURO     RA(E)      // €
#define    FR_PERC     LS(SQT)    // %
#define    FR_AND      N1         // &
#define    FR_PIPE     RA(N6)     // |
#define    FR_UDSC     N8         // _

// Exposants
#define    FR_EX2  GRAVE         // ²
#define    FR_EX3  LS(GRAVE)     // ³