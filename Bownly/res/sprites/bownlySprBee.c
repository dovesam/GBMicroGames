#pragma bank 3

//AUTOGENERATED FILE FROM png2asset

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

BANKREF(bownlySprBee)

const palette_color_t bownlySprBee_palettes[4] = {
	RGB8(0, 0, 0), RGB8(255, 255, 255), RGB8(251, 242, 54), RGB8(34, 32, 52)
};

const uint8_t bownlySprBee_tiles[128] = {
	0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x05,0x07,0x0c,0x1f,0x06,0x3f,0x13,0x7f,
	0x0c,0x00,0xd2,0x00,0x22,0x00,0x22,0x00,0x84,0xc0,0xc8,0xf0,0x60,0xf8,0x30,0xfc,
	0x13,0x7f,0x03,0x7f,0x03,0x3f,0x06,0x1f,0x04,0x07,0x04,0x00,0x02,0x00,0x00,0x00,
	0x32,0xfe,0x30,0xfc,0x30,0xf8,0x60,0xf0,0xc8,0xc0,0x40,0x00,0x20,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x01,0x00,0x02,0x00,0x02,0x00,0x05,0x07,0x0c,0x1f,0x06,0x3f,
	0x00,0x00,0x06,0x00,0x89,0x00,0x51,0x00,0x21,0x00,0x82,0xc0,0xcc,0xf0,0x60,0xf8,
	0x13,0x7f,0x13,0x7f,0x03,0x7f,0x03,0x3f,0x06,0x1f,0x04,0x07,0x04,0x00,0x02,0x00,
	0x30,0xfc,0x32,0xfe,0x30,0xfc,0x30,0xf8,0x60,0xf0,0xc8,0xc0,0x40,0x00,0x20,0x00
};

const metasprite_t bownlySprBee_metasprite0[] = {
	METASPR_ITEM(0, -8, 0, 0), METASPR_ITEM(0, 8, 1, 0), METASPR_ITEM(8, -8, 2, 0), METASPR_ITEM(0, 8, 3, 0), METASPR_TERM
};

const metasprite_t bownlySprBee_metasprite1[] = {
	METASPR_ITEM(0, -8, 4, 0), METASPR_ITEM(0, 8, 5, 0), METASPR_ITEM(8, -8, 6, 0), METASPR_ITEM(0, 8, 7, 0), METASPR_TERM
};

const metasprite_t* const bownlySprBee_metasprites[2] = {
	bownlySprBee_metasprite0, bownlySprBee_metasprite1
};
