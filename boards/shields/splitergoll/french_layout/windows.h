#pragma once

#include "function.h"
#include "linux.h"

#define WIN_AGU RA(SQT)    // ' (dead)
#define WIN_GRV RA(N7)     // ` (dead)
#define WIN_CIR RA(N6)     // ^ (dead)
#define WIN_TRE LS(RA(N6)) // ¨ (dead)
#define WIN_TLD RA(N2)     // ~ (dead)


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

MACRO_ALT_CODE(win_agrv_up, 1, 8, 3) // À
MACRO_ALT_CODE(win_agrv,    1, 3, 3) // à

MACRO_ALT_CODE(win_cced_up, 1, 2, 8) // Ç
MACRO_ALT_CODE(win_cced,    1, 3, 5) // ç

MACRO_ALT_CODE(win_ugrv_up, 2, 3, 5) // Ù
MACRO_ALT_CODE(win_ugrv,    1, 5, 1) // ù

MACRO_ALT_CODE(win_eacu_up, 1, 4, 4) // É
MACRO_ALT_CODE(win_eacu,    1, 3, 0) // é

MACRO_ALT_CODE(win_egrv_up, 2, 1, 2) // È
MACRO_ALT_CODE(win_egrv,    1, 3, 8) // è

MACRO_ALT_CODE(win_ecir_up, 2, 1, 0) // Ê
MACRO_ALT_CODE(win_ecir,    1, 3, 6) // ê

MACRO_ALT_CODE(win_etre_up, 2, 1, 1) // Ë
MACRO_ALT_CODE(win_etre,    1, 3, 7) // ë

MACRO_ALT_CODE(win_icir_up, 2, 1, 5) // Î
MACRO_ALT_CODE(win_icir,    1, 4, 0) // î

MACRO_ALT_CODE(win_itre_up, 2, 1, 6) // Ï
MACRO_ALT_CODE(win_itre,    1, 3, 9) // ï

MACRO_ALT_CODE(win_ocir_up, 2, 2, 6) // Ô
MACRO_ALT_CODE(win_ocir,    1, 4, 7) // ô
