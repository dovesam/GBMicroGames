#pragma bank 7

//AUTOGENERATED FILE FROM png2asset

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

BANKREF(dovesamBallSprite)

const palette_color_t dovesamBallSprite_palettes[4] = {
	RGB8(0, 0, 0), RGB8(224, 248, 207), RGB8(134, 192, 108), RGB8(0, 0, 0)
};

const uint8_t dovesamBallSprite_tiles[16] = {
	0x3c,0x3c,0x7a,0x46,0xf1,0x8f,0xe1,0x9f,0xc1,0xbf,0x81,0xff,0x42,0x7e,0x3c,0x3c
};

const metasprite_t dovesamBallSprite_metasprite0[] = {
	METASPR_ITEM(-4, -4, 0, 0), METASPR_TERM
};

const metasprite_t* const dovesamBallSprite_metasprites[1] = {
	dovesamBallSprite_metasprite0
};
