#pragma once

#define MORPH(name, k1, mod, k2) \
behaviors { \
    name: name { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <k1>, <k2>; \
        mods = <(MOD_##mod)>; \
    }; \
};

#define MORPH_UP(name, k1, k2) MORPH(name, k1, LSFT, k2)

#define MACRO(...) \
/ { \
    macros { \
        ZMK_MACRO(__VA_ARGS__) \
    }; \
};

#define MACRO_DOUBLE(name, d1, d2) MACRO(name, bindings = <&macro_tap &kp KP_N##d1 &kp KP_N##d2>;)

#define MACRO_DOUBLE_SHIFT(name, d1, d2) MACRO(name, bindings = <&macro_tap &kp KP_N##d1>, <&macro_press &kp LSFT>, <&macro_tap &kp KP_N##d2>, <&macro_release &kp LSFT>)
