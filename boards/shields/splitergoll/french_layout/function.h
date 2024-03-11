#pragma once

#define LAYER(name, layout, sensors) \
/ { \
    keymap { \
        compatible = "zmk,keymap"; \
        name##_layer { \
            bindings = <layout>; \
            sensor-bindings = <sensors>; \
        }; \
    }; \
};

#define COND_LAYER(cond1, cond2, cond3) \
/ { \
    conditional_layers { \
        compatible = "zmk,conditional-layers"; \
        TERTIARY_layer { \
            if-layers = <cond1 cond2>; \
            then-layer = <cond3>; \
        }; \
    }; \
};

#define MORPH(name, mod, k1, k2) \
/ { \
    behaviors { \
        name: name { \
            compatible = "zmk,behavior-mod-morph"; \
            #binding-cells = <0>; \
            bindings = <k1>, <k2>; \
            mods = <(MOD_##mod)>; \
        }; \
    }; \
};

#define MACRO(...) \
/ { \
    macros { \
        ZMK_MACRO(__VA_ARGS__) \
    }; \
};

#define DOUBLE(name, d1, d2) MACRO(name, bindings \
    = <&macro_tap &kp d1> \
    , <&macro_tap &kp d2> \
;)

#define SHIFT(name, d1, d2) MACRO(name, bindings \
    = <&macro_tap &kp d1> \
    , <&macro_tap &kp LS(d2)> \
;)

#define ALT_CODE_3(name, d1, d2, d3) MACRO(name, bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N##d1> \
    , <&macro_tap &kp KP_N##d2> \
    , <&macro_tap &kp KP_N##d3> \
    , <&macro_release &kp LALT> \
;)

#define ALT_CODE_4(name, d1, d2, d3) MACRO(name, bindings \
    = <&macro_press &kp LALT> \
    , <&macro_tap &kp KP_N##d1> \
    , <&macro_tap &kp KP_N##d2> \
    , <&macro_tap &kp KP_N##d3> \
    , <&macro_release &kp LALT> \
;)
