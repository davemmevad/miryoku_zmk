// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// davem first edits 03APR23 swap thumb keys to save left thumb
// davem 08JAN24 add config setting for bluetooth

// bluetooth .. increase power
CONFIG_BT_CTLR_TX_PWR_PLUS_8=y

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC),U_LT(U_MOUSE, DEL),U_LT(U_SYM, SPACE),  U_LT(U_NUM, RET), U_LT(U_FUN, TAB),  U_NP,              U_NP

