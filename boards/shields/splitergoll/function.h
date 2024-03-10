#pragma once

#define LAYER(name, layout, sensors) / { \
    keymap { \
        compatible = "zmk,keymap"; \
        name##_layer { \
            bindings = <layout>; \
            sensors = <sensors>; \
        }; \
    }; \
};