#pragma once

#define MACRO(...) \
/ { \
    macros { \
        ZMK_MACRO(__VA_ARGS__) \
    }; \
};

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