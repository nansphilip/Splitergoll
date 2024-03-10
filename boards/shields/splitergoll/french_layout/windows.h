#pragma once

#include "function.h"
#include "linux.h"

#define WIN_GRAVD RA(N7)  // ` (dead)
#define WIN_TILD  RA(N2)  // ~ (dead)


/* Actions */
#define WIN_CUT   LC(FR_X)
#define WIN_COPY  LC(FR_C)
#define WIN_PASTE LC(FR_V)
#define WIN_REDO  LC(FR_Y)


/* Alternate Alphas & Symbols */
#define MACRO_ALT_CODE(name, d1, d2, d3) \
MACRO(name, \
  bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N0 &kp KP_N##d1 &kp KP_N##d2 &kp KP_N##d3> \
    , <&macro_release &kp LALT> \
    ; \
)

#define MACRO_ALT_CODE(name, d1, d2, d3, d4) \
MACRO(name, \
  bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N0 &kp KP_N##d1 &kp KP_N##d2 &kp KP_N##d3 &kp KP_N##d4> \
    , <&macro_release &kp LALT> \
    ; \
)

MACRO_ALT_CODE(win_agrv_up, 1, 9, 2) // À
MACRO_ALT_CODE(win_cced_up, 1, 9, 9) // Ç
MACRO_ALT_CODE(win_eacu_up, 2, 0, 1) // É
MACRO_ALT_CODE(win_egrv_up, 2, 0, 0) // È
MACRO_ALT_CODE(win_ecir_up, 2, 0, 2) // Ê
MACRO_ALT_CODE(win_ecir,    1, 3, 6) // ê
MACRO_ALT_CODE(win_etre_up, 2, 0, 3) // Ë
MACRO_ALT_CODE(win_etre,    1, 3, 7) // ë
MACRO_ALT_CODE(win_ocir_up, 2, 1, 2) // Ô
MACRO_ALT_CODE(win_ocir,    1, 4, 7) // ô
MACRO_ALT_CODE(win_icir_up, 1, 4, 0) // î
MACRO_ALT_CODE(win_icir, 0, 2, 0, 6) // Î
MACRO_ALT_CODE(win_itre_up, 1, 3, 9) // ï
MACRO_ALT_CODE(win_itre, 0, 2, 0, 7) // Ï
MACRO_ALT_CODE(win_ugrv_up, 0, 2, 1, 7) // Ù
MACRO_ALT_CODE(win_oe_lo,   1, 5, 6) // œ
MACRO_ALT_CODE(win_oe_up,   1, 4, 0) // Œ
MACRO_ALT_CODE(win_grave,   0, 9, 6) // `
MACRO_ALT_CODE(win_tild,    1, 2, 6) // ~
MACRO_ALT_CODE(win_qml,     1, 7, 1) // «
MACRO_ALT_CODE(win_qmr,     1, 8, 7) // »
MACRO_ALT_CODE(win_apos,    1, 4, 6) // ’
MACRO_ALT_CODE(win_emdash,  1, 5, 1) // —
MACRO_ALT_CODE(win_ddd,     1, 3, 3) // …
MACRO_ALT_CODE(win_iqm,     1, 9, 1) // ¿
MACRO_ALT_CODE(win_iem,     1, 6, 1) // ¡
MACRO_ALT_CODE(win_1up,     1, 8, 5) // ¹
MACRO_ALT_CODE(win_3up,     1, 7, 9) // ³
