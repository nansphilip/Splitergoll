#pragma once

#define MACRO(...) \
/ { \
    macros { \
        ZMK_MACRO(__VA_ARGS__) \
    }; \
};