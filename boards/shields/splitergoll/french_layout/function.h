#pragma once

// Layers
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


// Behaviors
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

#define TAP2(name, k1, k2) \
/ { \
    behaviors { \
        name: name { \
            compatible = "zmk,behavior-tap-dance"; \
            #binding-cells = <0>; \
            tapping-term-ms = <300>; \
            bindings = <k1>, <k2>; \
        }; \
    }; \
};

#define TAP3(name, k1, k2, k3) \
/ { \
    behaviors { \
        name: name { \
            compatible = "zmk,behavior-tap-dance"; \
            #binding-cells = <0>; \
            tapping-term-ms = <500>; \
            bindings = <k1>, <k2>, <k3>; \
        }; \
    }; \
};

#define HOLD_TAP(name, k1, k2) \
/ { \
    behaviors { \
        name: name { \
            compatible = "zmk,behavior-hold-tap"; \
            #binding-cells = <2>; \
            flavor = "tap-preferred"; \
            tapping-term-ms = <200>; \
            bindings = <k1>, <k2>; \
        }; \
    }; \
};

// Macros
#define DOUBLE(name, d1, d2) \
/ { \
    macros { \
        ZMK_MACRO(name, bindings \
            = <&macro_tap d1> \
            , <&macro_tap d2> \
        ;) \
    }; \
};

#define ALT_CODE_3(name, d1, d2, d3) \
/ { \
    macros { \
        ZMK_MACRO(name, bindings \
            = <&macro_press &kp LALT> \
            , <&macro_tap &kp KP_N##d1> \
            , <&macro_tap &kp KP_N##d2> \
            , <&macro_tap &kp KP_N##d3> \
            , <&macro_release &kp LALT> \
        ;) \
    }; \
};

#define ALT_CODE_4(name, d1, d2, d3, d4) \
/ { \
    macros { \
        ZMK_MACRO(name, bindings \
            = <&macro_press &kp LALT> \
            , <&macro_tap &kp KP_N##d1> \
            , <&macro_tap &kp KP_N##d2> \
            , <&macro_tap &kp KP_N##d3> \
            , <&macro_tap &kp KP_N##d4> \
            , <&macro_release &kp LALT> \
        ;) \
    }; \
};
