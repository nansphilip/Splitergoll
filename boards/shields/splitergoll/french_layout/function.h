#pragma once

#define MACRO(...) \
/ { \
    macros { \
        ZMK_MACRO(__VA_ARGS__) \
    }; \
};

#define LAYER(name, layout, sensor) \
/ { \
    keymap { \
        compatible = "zmk,keymap"; \
        name##_layer { \
            bindings = <layout>; \
            sensor-bindings = <sensor>; \
        }; \
    }; \
};