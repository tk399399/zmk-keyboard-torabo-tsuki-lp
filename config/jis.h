/* HID aliases for a Windows Japanese (106/109-key) host layout.
 * Studio's built-in key names remain based on US HID usage names.
 */
#pragma once

#include <dt-bindings/zmk/keys.h>

#define JP_ZKHK GRAVE
#define JP_COLON SQT
#define JP_LBRC RIGHT_BRACKET
#define JP_RBRC NON_US_HASH
#define JP_LCBR LS(JP_LBRC)
#define JP_RCBR LS(JP_RBRC)
#define JP_EQUAL LS(MINUS)
#define JP_PLUS LS(SEMI)
#define JP_BSLS INTERNATIONAL_1
#define JP_UNDERSCORE LS(INTERNATIONAL_1)
#define JP_QUOT LS(N7)
#define JP_DQUO LS(N2)
#define JP_GRAVE LS(LEFT_BRACKET)
#define JP_TILDE LS(EQUAL)
#define JP_PIPE LS(INTERNATIONAL_3)
#define JP_MHEN INTERNATIONAL_5
#define JP_HENK INTERNATIONAL_4
#define JP_AT LEFT_BRACKET
#define JP_CIRC EQUAL
#define JP_AMPR LS(N6)
#define JP_ASTR LS(SQT)
#define JP_LPRN LS(N8)
#define JP_RPRN LS(N9)
