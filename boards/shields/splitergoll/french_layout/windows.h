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
// #define    FR_AGU    RA(SQT)      // ' (doesn't work)
// #define    FR_GRV    RA(N7)       // ` (dead)
// #define    FR_CIR    LBKT         // ^ (dead)
// #define    FR_TRE    LBRC         // ¨ (dead)
// #define    FR_TLD    RA(N2)       // ~ (dead)

// Lettres with accents
ALT_CODE_3(fr_ag, 1, 3, 3)     // à
ALT_CODE_3(fr_cc, 1, 3, 5)     // ç
ALT_CODE_3(fr_ea, 1, 3, 0)     // é
ALT_CODE_3(fr_eg, 1, 3, 8)     // è
ALT_CODE_3(fr_ec, 1, 3, 6)     // ê
ALT_CODE_3(fr_et, 1, 3, 7)     // ë
ALT_CODE_3(fr_ic, 1, 4, 0)     // î
ALT_CODE_3(fr_it, 1, 3, 9)     // ï
ALT_CODE_3(fr_oc, 1, 4, 7)     // ô
ALT_CODE_3(fr_ug, 1, 5, 1)     // ù
ALT_CODE_4(fr_oe, 0, 1, 5, 6)  // œ

ALT_CODE_3(fr_agu, 1, 8, 3)    // À
ALT_CODE_3(fr_ccu, 1, 2, 8)    // Ç
ALT_CODE_3(fr_eau, 1, 4, 4)    // É
ALT_CODE_3(fr_egu, 2, 1, 2)    // È
ALT_CODE_3(fr_ecu, 2, 1, 0)    // Ê
ALT_CODE_3(fr_etu, 2, 1, 1)    // Ë
ALT_CODE_3(fr_icu, 2, 1, 5)    // Î
ALT_CODE_3(fr_itu, 2, 1, 6)    // Ï
ALT_CODE_3(fr_ocu, 2, 2, 6)    // Ô
ALT_CODE_3(fr_ugu, 2, 3, 5)    // Ù
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
#define    FR_COMMA     M            // ,
#define    FR_DOT       LS(COMMA)    // .
#define    FR_SEMI      COMMA        // ;
#define    FR_COLON     DOT          // :
#define    FR_EXCL      SLASH        // !
#define    FR_QMARK     LS(M)        // ?
#define    FR_SLASH     LS(DOT)      // slash
#define    FR_BSLASH    RA(N8)       // backslash


// Calculs
#define    FR_EQAL     EQUAL       // =
#define    FR_PLUS     KP_PLUS     // +
#define    FR_MINS     KP_MINUS    // -
#define    FR_ASTR     KP_MULTIPLY // *
#define    FR_DIVI     KP_SLASH    // /


// Brackets
#define    FR_LPAR     N5          // (
#define    FR_RPAR     MINUS       // )
#define    FR_LACC     RA(N4)      // {
#define    FR_RACC     LS(EQUAL)   // }
#define    FR_LCRO     RA(N5)      // [
#define    FR_RCRO     RA(MINUS)   // ]
#define    FR_LCHE     NUBS        // <
#define    FR_RCHE     LS(NUBS)    // >


// Quotes
ALT_CODE_3(grv, 0, 9, 6)
#define    FR_QUOT    N3     // "
#define    FR_SQUO    N4     // '
#define    FR_BQUO    grv    // `


// Exposants
// ALT_CODE_3(win_1up,     1, 8, 5) // ¹
// ALT_CODE_3(win_3up,     1, 7, 9) // ³