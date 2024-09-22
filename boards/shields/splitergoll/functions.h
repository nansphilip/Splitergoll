// Layers
#define LAYER(name, layout) \
/ { \
    keymap { \
        compatible = "zmk,keymap"; \
        name##_layer { \
            bindings = <layout>; \
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