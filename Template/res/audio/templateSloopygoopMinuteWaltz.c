#include "../../../hUGETracker/hUGEDriver.h"
#include <stddef.h>

static const unsigned char order_cnt = 8;

static const unsigned char P0[] = {
    DN(G_6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(As6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(G_6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(As6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(G_6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(As6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0xB02),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P1[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x055),
    DN(Cs5,2,0x044),
    DN(Gs4,4,0x055),
    DN(Cs5,6,0x044),
    DN(Gs4,7,0x055),
    DN(___,0,0xE00),
    DN(Gs4,5,0x055),
    DN(Cs5,2,0x044),
    DN(Gs4,4,0x055),
    DN(Cs5,6,0x044),
    DN(Gs4,7,0x055),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x055),
    DN(Cs5,2,0x044),
    DN(Gs4,4,0x055),
    DN(Cs5,6,0x044),
    DN(Gs4,7,0x055),
    DN(___,0,0xE00),
    DN(Gs4,5,0x055),
    DN(Cs5,2,0x044),
    DN(Gs4,4,0x055),
    DN(Cs5,6,0x044),
    DN(Gs4,7,0x055),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P2[] = {
    DN(Cs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(F_4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P3[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P4[] = {
    DN(G_6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(As6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(G_6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(As6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Cs7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Ds7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(F_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(G_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0xB03),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P8[] = {
    DN(As7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(G_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(F_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(F_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Ds7,3,0x000),
    DN(___,0,0x000),
    DN(F_7,3,0x000),
    DN(Ds7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(D_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Ds7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xB04),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P9[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x044),
    DN(C_5,2,0x066),
    DN(Gs4,4,0x044),
    DN(C_5,6,0x066),
    DN(Gs4,7,0x044),
    DN(___,0,0xE00),
    DN(Gs4,5,0x044),
    DN(C_5,2,0x066),
    DN(Gs4,4,0x044),
    DN(C_5,6,0x066),
    DN(Gs4,7,0x044),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x044),
    DN(C_5,2,0x066),
    DN(Gs4,4,0x044),
    DN(C_5,6,0x066),
    DN(Gs4,7,0x044),
    DN(___,0,0xE00),
    DN(Gs4,5,0x044),
    DN(C_5,2,0x066),
    DN(Gs4,4,0x044),
    DN(C_5,6,0x066),
    DN(Gs4,7,0x044),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P10[] = {
    DN(Gs3,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Ds4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P12[] = {
    DN(As7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(G_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(F_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(F_7,3,0x000),
    DN(___,0,0x000),
    DN(E_7,3,0x000),
    DN(Ds7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(D_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Ds7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(F_7,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(As6,3,0x000),
    DN(___,0,0x000),
    DN(___,0,0xB01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P13[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_5,5,0x066),
    DN(Fs5,2,0x066),
    DN(C_5,4,0x066),
    DN(Fs5,6,0x066),
    DN(C_5,7,0x066),
    DN(___,0,0xE00),
    DN(C_5,5,0x066),
    DN(Fs5,2,0x066),
    DN(C_5,4,0x066),
    DN(Fs5,6,0x066),
    DN(C_5,7,0x066),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(Gs4,5,0x044),
    DN(C_5,2,0x066),
    DN(Gs4,4,0x044),
    DN(C_5,6,0x066),
    DN(Gs4,7,0x044),
    DN(___,0,0xE00),
    DN(Gs4,5,0x044),
    DN(C_5,2,0x066),
    DN(Gs4,4,0x044),
    DN(C_5,6,0x066),
    DN(Gs4,7,0x044),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};
static const unsigned char P14[] = {
    DN(Gs3,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(Gs4,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_5,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(C_5,5,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
};

static const unsigned char itNoiseSP1[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP2[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP3[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP4[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP5[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP6[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP7[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP8[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP9[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP10[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP11[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP12[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP13[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP14[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char itNoiseSP15[] = {
    DN(___,0,0x000),
    DN(36,2,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,1,0x000),
};
static const unsigned char* const order1[] = {P0,P4,P8,P12};
static const unsigned char* const order2[] = {P1,P1,P9,P13};
static const unsigned char* const order3[] = {P2,P2,P10,P14};
static const unsigned char* const order4[] = {P3,P3,P3,P3};

static const hUGEDutyInstr_t duty_instruments[] = {
    {8,0,240,0,128},
    {8,128,240,0,128},
    {8,128,244,0,128},
    {8,128,224,0,128},
    {8,128,192,0,128},
    {8,128,144,0,128},
    {8,128,80,0,128},
    {8,192,241,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
};
static const hUGEWaveInstr_t wave_instruments[] = {
    {0,32,0,0,128},
    {0,32,4,0,128},
    {0,32,2,0,128},
    {0,32,3,0,128},
    {0,32,4,0,128},
    {0,32,5,0,128},
    {0,32,6,0,128},
    {0,32,7,0,128},
    {0,32,8,0,128},
    {0,32,9,0,128},
    {0,32,10,0,128},
    {0,32,11,0,128},
    {0,32,12,0,128},
    {0,32,13,0,128},
    {0,32,14,0,128},
};
static const hUGENoiseInstr_t noise_instruments[] = {
    {240,itNoiseSP1,0,0,0},
    {240,itNoiseSP2,0,0,0},
    {240,itNoiseSP3,0,0,0},
    {240,itNoiseSP4,0,0,0},
    {240,itNoiseSP5,0,0,0},
    {240,itNoiseSP6,0,0,0},
    {240,itNoiseSP7,0,0,0},
    {240,itNoiseSP8,0,0,0},
    {240,itNoiseSP9,0,0,0},
    {240,itNoiseSP10,0,0,0},
    {240,itNoiseSP11,0,0,0},
    {240,itNoiseSP12,0,0,0},
    {240,itNoiseSP13,0,0,0},
    {240,itNoiseSP14,0,0,0},
    {240,itNoiseSP15,0,0,0},
};

static const unsigned char waves[] = {
    0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
    0,0,0,0,255,255,255,255,255,255,255,255,255,255,255,255,
    0,0,0,0,0,0,0,0,255,255,255,255,255,255,255,255,
    0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,
    206,255,255,255,255,254,208,0,0,0,0,0,0,0,0,0,
    17,29,238,238,238,238,238,255,255,170,187,204,205,222,239,255,
    122,205,219,117,33,19,104,189,220,151,65,1,71,156,221,184,
    15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
    254,252,250,248,246,244,242,240,242,244,246,248,250,252,254,255,
    254,221,204,187,170,153,136,119,138,189,241,36,87,138,189,238,
    132,17,97,237,87,71,90,173,206,163,23,121,221,32,3,71,
    98,135,110,104,220,169,19,209,99,35,138,1,21,52,185,137,
    188,21,217,232,100,13,151,110,115,32,152,71,65,85,199,183,
    68,48,126,126,50,161,71,25,106,196,55,125,48,230,75,154,
    45,103,182,36,222,203,6,129,156,236,177,161,28,64,17,96,
    26,39,50,119,120,93,228,138,174,65,156,83,131,87,23,5,
};

const hUGESong_t templateSloopygoopMinuteWaltz = {2, &order_cnt, order1, order2, order3,order4, duty_instruments, wave_instruments, noise_instruments, NULL, waves};