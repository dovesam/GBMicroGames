;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.1.6 #12539 (MINGW32)
;--------------------------------------------------------
	.module bownlyTheWhiteSong
	.optsdcc -mgbz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _bownlyTheWhiteSong
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _INITIALIZED
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area _DABS (ABS)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area _HOME
	.area _GSINIT
	.area _GSFINAL
	.area _GSINIT
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area _HOME
	.area _HOME
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area _CODE_2
	.area _CODE_2
_order_cnt:
	.db #0x02	; 2
_P3:
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
_P10:
	.db #0x1e	; 30
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x23	; 35
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x25	; 37
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x26	; 38
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x25	; 37
	.db #0x4c	; 76	'L'
	.db #0x02	; 2
	.db #0x2a	; 42
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x28	; 40
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x26	; 38
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x23	; 35
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x1e	; 30
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x21	; 33
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x1e	; 30
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x21	; 33
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x23	; 35
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x26	; 38
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x23	; 35
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x21	; 33
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x23	; 35
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x28	; 40
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x26	; 38
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x25	; 37
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x23	; 35
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x26	; 38
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x21	; 33
	.db #0x4c	; 76	'L'
	.db #0x1a	; 26
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
_P11:
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0x4c	; 76	'L'
	.db #0x08	; 8
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
_P12:
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x17	; 23
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x13	; 19
	.db #0xec	; 236
	.db #0x09	; 9
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x5a	; 90	'Z'
	.db #0x00	; 0
	.db #0x00	; 0
_order1:
	.dw _P10
_order2:
	.dw _P11
_order3:
	.dw _P12
_order4:
	.dw _P3
_duty_instruments:
	.db #0x08	; 8
	.db #0x40	; 64
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0xc0	; 192
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
	.db #0x08	; 8
	.db #0x80	; 128
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x80	; 128
_wave_instruments:
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x00	; 0
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x01	; 1
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x02	; 2
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x03	; 3
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x04	; 4
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x05	; 5
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x06	; 6
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x00	; 0
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x01	; 1
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x02	; 2
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x03	; 3
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x04	; 4
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x05	; 5
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x06	; 6
	.dw #0x0000
	.db #0x80	; 128
	.db #0x00	; 0
	.db #0x20	; 32
	.db #0x07	; 7
	.dw #0x0000
	.db #0x80	; 128
_noise_instruments:
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xf0	; 240
	.dw #0x0000
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
_waves:
	.db #0xa5	; 165
	.db #0xd7	; 215
	.db #0xc9	; 201
	.db #0xe1	; 225
	.db #0xbc	; 188
	.db #0x9a	; 154
	.db #0x76	; 118	'v'
	.db #0x31	; 49	'1'
	.db #0x0c	; 12
	.db #0xba	; 186
	.db #0xde	; 222
	.db #0x60	; 96
	.db #0x1b	; 27
	.db #0xca	; 202
	.db #0x03	; 3
	.db #0x93	; 147
	.db #0xf0	; 240
	.db #0xe1	; 225
	.db #0xd2	; 210
	.db #0xc3	; 195
	.db #0xb4	; 180
	.db #0xa5	; 165
	.db #0x96	; 150
	.db #0x87	; 135
	.db #0x78	; 120	'x'
	.db #0x69	; 105	'i'
	.db #0x5a	; 90	'Z'
	.db #0x4b	; 75	'K'
	.db #0x3c	; 60
	.db #0x2d	; 45
	.db #0x1e	; 30
	.db #0x0f	; 15
	.db #0xfd	; 253
	.db #0xec	; 236
	.db #0xdb	; 219
	.db #0xca	; 202
	.db #0xb9	; 185
	.db #0xa8	; 168
	.db #0x97	; 151
	.db #0x86	; 134
	.db #0x79	; 121	'y'
	.db #0x68	; 104	'h'
	.db #0x57	; 87	'W'
	.db #0x46	; 70	'F'
	.db #0x35	; 53	'5'
	.db #0x24	; 36
	.db #0x13	; 19
	.db #0x02	; 2
	.db #0xde	; 222
	.db #0xfe	; 254
	.db #0xdc	; 220
	.db #0xba	; 186
	.db #0x9a	; 154
	.db #0xa9	; 169
	.db #0x87	; 135
	.db #0x77	; 119	'w'
	.db #0x88	; 136
	.db #0x87	; 135
	.db #0x65	; 101	'e'
	.db #0x56	; 86	'V'
	.db #0x54	; 84	'T'
	.db #0x32	; 50	'2'
	.db #0x10	; 16
	.db #0x12	; 18
	.db #0xab	; 171
	.db #0xcd	; 205
	.db #0xef	; 239
	.db #0xed	; 237
	.db #0xcb	; 203
	.db #0xa0	; 160
	.db #0x12	; 18
	.db #0x3e	; 62
	.db #0xdc	; 220
	.db #0xba	; 186
	.db #0xbc	; 188
	.db #0xde	; 222
	.db #0xfe	; 254
	.db #0xdc	; 220
	.db #0x32	; 50	'2'
	.db #0x10	; 16
	.db #0xff	; 255
	.db #0xee	; 238
	.db #0xdd	; 221
	.db #0xcc	; 204
	.db #0xbb	; 187
	.db #0xaa	; 170
	.db #0x99	; 153
	.db #0x88	; 136
	.db #0x77	; 119	'w'
	.db #0x66	; 102	'f'
	.db #0x55	; 85	'U'
	.db #0x44	; 68	'D'
	.db #0x33	; 51	'3'
	.db #0x22	; 34
	.db #0x11	; 17
	.db #0x00	; 0
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0xff	; 255
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x79	; 121	'y'
	.db #0xbc	; 188
	.db #0xde	; 222
	.db #0xef	; 239
	.db #0xff	; 255
	.db #0xee	; 238
	.db #0xdc	; 220
	.db #0xb9	; 185
	.db #0x75	; 117	'u'
	.db #0x43	; 67	'C'
	.db #0x21	; 33
	.db #0x10	; 16
	.db #0x00	; 0
	.db #0x11	; 17
	.db #0x23	; 35
	.db #0x45	; 69	'E'
	.db #0x07	; 7
	.db #0x37	; 55	'7'
	.db #0x2d	; 45
	.db #0x72	; 114	'r'
	.db #0x59	; 89	'Y'
	.db #0x87	; 135
	.db #0x81	; 129
	.db #0xe9	; 233
	.db #0x6b	; 107	'k'
	.db #0xe2	; 226
	.db #0xc9	; 201
	.db #0x90	; 144
	.db #0xb2	; 178
	.db #0x83	; 131
	.db #0xee	; 238
	.db #0x3e	; 62
	.db #0x58	; 88	'X'
	.db #0x51	; 81	'Q'
	.db #0x83	; 131
	.db #0x36	; 54	'6'
	.db #0x7d	; 125
	.db #0x60	; 96
	.db #0x2e	; 46
	.db #0x20	; 32
	.db #0x47	; 71	'G'
	.db #0x33	; 51	'3'
	.db #0x3e	; 62
	.db #0x78	; 120	'x'
	.db #0xd0	; 208
	.db #0x8c	; 140
	.db #0x9c	; 156
	.db #0xab	; 171
	.db #0xb2	; 178
	.db #0x19	; 25
	.db #0x0c	; 12
	.db #0xa2	; 162
	.db #0x9d	; 157
	.db #0x02	; 2
	.db #0xdc	; 220
	.db #0x9e	; 158
	.db #0x94	; 148
	.db #0xeb	; 235
	.db #0xb4	; 180
	.db #0x64	; 100	'd'
	.db #0x39	; 57	'9'
	.db #0x85	; 133
	.db #0x64	; 100	'd'
	.db #0xc9	; 201
	.db #0x02	; 2
	.db #0x07	; 7
	.db #0x50	; 80	'P'
	.db #0x92	; 146
	.db #0x89	; 137
	.db #0x15	; 21
	.db #0x97	; 151
	.db #0x4d	; 77	'M'
	.db #0x7c	; 124
	.db #0x8e	; 142
	.db #0x5e	; 94
	.db #0x58	; 88	'X'
	.db #0x3c	; 60
	.db #0x28	; 40
	.db #0x95	; 149
	.db #0xc4	; 196
	.db #0x7e	; 126
	.db #0xd0	; 208
	.db #0x7a	; 122	'z'
	.db #0x2e	; 46
	.db #0x24	; 36
	.db #0x77	; 119	'w'
	.db #0x1d	; 29
	.db #0xa6	; 166
	.db #0x83	; 131
	.db #0x8d	; 141
	.db #0xb0	; 176
	.db #0x8c	; 140
	.db #0x18	; 24
	.db #0xd9	; 217
	.db #0x3c	; 60
	.db #0xb5	; 181
	.db #0x45	; 69	'E'
	.db #0xb1	; 177
	.db #0x5d	; 93
	.db #0x37	; 55	'7'
	.db #0x72	; 114	'r'
	.db #0x6e	; 110	'n'
	.db #0x4d	; 77	'M'
	.db #0x93	; 147
	.db #0xbe	; 190
	.db #0xe4	; 228
	.db #0xd8	; 216
	.db #0x74	; 116	't'
	.db #0x36	; 54	'6'
	.db #0xd3	; 211
	.db #0xb8	; 184
	.db #0x74	; 116	't'
	.db #0xcb	; 203
	.db #0x16	; 22
	.db #0xab	; 171
	.db #0x6e	; 110	'n'
	.db #0x8d	; 141
	.db #0x8b	; 139
	.db #0x8b	; 139
	.db #0xc0	; 192
	.db #0x3b	; 59
	.db #0x30	; 48	'0'
	.db #0xe4	; 228
	.db #0x32	; 50	'2'
	.db #0xe8	; 232
	.db #0x0e	; 14
	.db #0xe8	; 232
	.db #0xbe	; 190
	.db #0xc5	; 197
	.db #0x83	; 131
	.db #0x71	; 113	'q'
	.db #0x5c	; 92
	.db #0x7b	; 123
	.db #0x23	; 35
	.db #0x64	; 100	'd'
	.db #0x27	; 39
	.db #0xb4	; 180
	.db #0xdc	; 220
	.db #0x34	; 52	'4'
	.db #0xbe	; 190
	.db #0x85	; 133
	.db #0x34	; 52	'4'
	.db #0xea	; 234
	.db #0x1d	; 29
_bownlyTheWhiteSong:
	.db #0x06	; 6
	.dw _order_cnt
	.dw _order1
	.dw _order2
	.dw _order3
	.dw _order4
	.dw _duty_instruments
	.dw _wave_instruments
	.dw _noise_instruments
	.dw #0x0000
	.dw _waves
	.area _INITIALIZER
	.area _CABS (ABS)
