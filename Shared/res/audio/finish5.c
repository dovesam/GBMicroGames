#include "../../../hUGETracker/hUGEDriver.h"
#include <stddef.h>

static const unsigned char order_cnt = 2;

static const unsigned char P0[] = {
    DN(As4,2,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(C_5,2,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(D_5,2,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(___,0,0x047),
    DN(Cs7,3,0xC0A),
    DN(D_7,3,0xC0A),
    DN(Cs7,3,0xC08),
    DN(A_6,3,0xC08),
    DN(Fs6,3,0xC08),
    DN(D_6,3,0xC06),
    DN(Cs7,3,0xC06),
    DN(D_7,3,0xC06),
    DN(Cs7,3,0xC04),
    DN(A_6,3,0xC04),
    DN(Fs6,3,0xC04),
    DN(D_6,3,0xC02),
    DN(Cs7,3,0xC02),
    DN(D_7,3,0xC02),
    DN(Cs7,3,0xC01),
    DN(A_6,3,0xC01),
    DN(Fs6,3,0xC01),
    DN(D_6,3,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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
    DN(A_6,2,0x000),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(G_6,2,0x000),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(D_6,2,0x000),
    DN(E_6,2,0x000),
    DN(F_6,2,0x000),
    DN(G_6,2,0x000),
    DN(E_6,2,0x000),
    DN(___,0,0x000),
    DN(C_6,2,0x000),
    DN(D_6,2,0x000),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(___,0,0x442),
    DN(Cs7,3,0x000),
    DN(D_7,3,0x000),
    DN(Cs7,3,0xC0D),
    DN(A_6,3,0xC0D),
    DN(Fs6,3,0xC0B),
    DN(D_6,3,0xC0B),
    DN(Cs7,3,0xC09),
    DN(D_7,3,0xC09),
    DN(Cs7,3,0xC07),
    DN(A_6,3,0xC07),
    DN(Fs6,3,0xC05),
    DN(D_6,3,0xC05),
    DN(Cs7,3,0xC03),
    DN(D_7,3,0xC03),
    DN(Cs7,3,0xC02),
    DN(A_6,3,0xC02),
    DN(Fs6,3,0xC01),
    DN(D_6,3,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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
    DN(F_4,6,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_4,6,0x000),
    DN(___,0,0xC00),
    DN(F_4,6,0x000),
    DN(___,0,0xC00),
    DN(G_4,6,0x000),
    DN(___,0,0x000),
    DN(D_4,6,0x000),
    DN(___,0,0x000),
    DN(G_4,6,0x000),
    DN(___,0,0x000),
    DN(A_4,6,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xC00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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

static const unsigned char itNoiseSP1[] = {
    DN(___,0,0x000),
    DN(36,0,0x000),
    DN(37,0,0x000),
    DN(40,0,0x000),
    DN(42,5,0x000),
    DN(45,0,0x000),
    DN(49,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,0,0x000),
    DN(36,5,0x000),
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
static const unsigned char* const order1[] = {P0};
static const unsigned char* const order2[] = {P1};
static const unsigned char* const order3[] = {P2};
static const unsigned char* const order4[] = {P3};

static const hUGEDutyInstr_t duty_instruments[] = {
    {8,0,240,0,128},
    {8,128,244,0,128},
    {8,128,242,0,128},
    {8,192,240,0,128},
    {8,0,241,0,128},
    {8,64,241,0,128},
    {8,128,241,0,128},
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
    {0,32,1,0,128},
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
    {242,itNoiseSP1,0,0,0},
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
    0,1,18,35,52,69,86,103,120,137,154,171,188,205,222,239,
    254,220,186,152,118,84,50,16,18,52,86,120,154,188,222,255,
    122,205,219,117,33,19,104,189,220,151,65,1,71,156,221,184,
    15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
    254,252,250,248,246,244,242,240,242,244,246,248,250,252,254,255,
    254,221,204,187,170,153,136,119,138,189,241,36,87,138,189,238,
    132,17,97,237,87,71,90,173,206,163,23,121,221,32,3,71,
    220,194,8,187,130,226,108,65,128,149,2,19,238,28,51,113,
    91,142,129,180,226,188,132,184,34,164,104,37,48,106,154,219,
    181,40,205,16,199,49,32,137,176,49,172,172,197,184,22,110,
    129,170,135,40,163,102,33,149,116,186,218,203,195,90,211,64,
    218,26,128,135,131,163,195,193,171,107,74,76,237,68,203,227,
};

const hUGESong_t finish5 = {5, &order_cnt, order1, order2, order3,order4, duty_instruments, wave_instruments, noise_instruments, NULL, waves};
