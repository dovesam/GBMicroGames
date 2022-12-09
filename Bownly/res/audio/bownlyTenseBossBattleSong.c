#include "../../../hUGETracker/hUGEDriver.h"
#include <stddef.h>

static const unsigned char order_cnt = 2;

static const unsigned char P30[] = {
    DN(C_5,1,0xC08),
    DN(C_5,1,0xC04),
    DN(C_5,1,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_5,1,0xC08),
    DN(C_5,1,0xC04),
    DN(C_5,1,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_5,1,0xC08),
    DN(C_5,1,0xC04),
    DN(C_5,1,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_5,1,0xC08),
    DN(C_5,1,0xC04),
    DN(C_5,1,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(C_5,1,0xC08),
    DN(C_5,1,0xC04),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0xD01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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
static const unsigned char P31[] = {
    DN(A_5,2,0xC08),
    DN(A_5,2,0xC04),
    DN(A_5,2,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(A_5,2,0xC08),
    DN(A_5,2,0xC04),
    DN(A_5,2,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(A_5,2,0xC08),
    DN(A_5,2,0xC04),
    DN(A_5,2,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(A_5,2,0xC08),
    DN(A_5,2,0xC04),
    DN(A_5,2,0xC01),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(E_6,2,0xC08),
    DN(Ds6,0,0x000),
    DN(D_6,0,0x000),
    DN(Cs6,0,0x000),
    DN(C_6,0,0x000),
    DN(B_5,0,0x000),
    DN(As5,0,0x000),
    DN(A_5,0,0x000),
    DN(Gs5,0,0x000),
    DN(G_5,0,0x000),
    DN(Fs5,0,0x000),
    DN(F_5,0,0x000),
    DN(E_5,0,0x000),
    DN(Ds5,0,0x000),
    DN(D_5,0,0x000),
    DN(Cs5,0,0x000),
    DN(C_5,0,0x000),
    DN(B_4,0,0x000),
    DN(As4,0,0x000),
    DN(A_4,0,0x000),
    DN(Gs4,0,0x000),
    DN(G_4,0,0x000),
    DN(Fs4,0,0x000),
    DN(F_4,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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
static const unsigned char P32[] = {
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(D_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
    DN(___,0,0xE00),
    DN(A_5,15,0xC08),
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
};
static const unsigned char P33[] = {
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
    DN(___,0,0x000),
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

static const unsigned char* const order1[] = {P30};
static const unsigned char* const order2[] = {P31};
static const unsigned char* const order3[] = {P32};
static const unsigned char* const order4[] = {P33};

static const hUGEDutyInstr_t duty_instruments[] = {
    {8,64,240,0,128},
    {8,128,240,0,128},
    {8,192,240,0,128},
    {8,0,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
    {8,128,240,0,128},
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
    {0,32,0,0,128},
    {0,32,1,0,128},
    {0,32,2,0,128},
    {0,32,3,0,128},
    {0,32,4,0,128},
    {0,32,5,0,128},
    {0,32,6,0,128},
    {0,32,7,0,128},
};
static const hUGENoiseInstr_t noise_instruments[] = {
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
    {240,0,0,0,0},
};

static const unsigned char waves[] = {
    165,215,201,225,188,154,118,49,12,186,222,96,27,202,3,147,
    240,225,210,195,180,165,150,135,120,105,90,75,60,45,30,15,
    253,236,219,202,185,168,151,134,121,104,87,70,53,36,19,2,
    222,254,220,186,154,169,135,119,136,135,101,86,84,50,16,18,
    171,205,239,237,203,160,18,62,220,186,188,222,254,220,50,16,
    255,238,221,204,187,170,153,136,119,102,85,68,51,34,17,0,
    255,255,255,255,255,255,255,255,0,0,0,0,0,0,0,0,
    121,188,222,239,255,238,220,185,117,67,33,16,0,17,35,69,
    76,206,132,87,37,60,60,33,75,61,122,14,195,84,139,8,
    183,59,200,25,221,60,214,236,211,192,22,50,184,68,123,129,
    199,211,226,28,220,93,234,48,209,82,185,48,24,29,125,65,
    90,220,116,70,94,66,13,140,158,214,188,227,6,129,50,236,
    30,224,152,200,139,114,28,189,235,110,128,59,7,56,4,189,
    203,1,86,214,90,210,162,22,186,30,158,118,214,74,97,211,
    215,151,62,68,91,201,218,147,126,92,224,30,120,195,237,32,
    157,110,45,93,44,89,149,53,158,236,177,181,126,33,4,29,
};

const hUGESong_t bownlyTenseBossBattleSong = {5, &order_cnt, order1, order2, order3,order4, duty_instruments, wave_instruments, noise_instruments, NULL, waves};