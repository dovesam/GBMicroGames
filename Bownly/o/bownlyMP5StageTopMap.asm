;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.1.6 #12539 (MINGW32)
;--------------------------------------------------------
	.module bownlyMP5StageTopMap
	.optsdcc -mgbz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _bownlyMP5StageTopMap
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
_bownlyMP5StageTopMap:
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x44	; 68	'D'
	.db #0x46	; 70	'F'
	.db #0x49	; 73	'I'
	.db #0x4b	; 75	'K'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x45	; 69	'E'
	.db #0x47	; 71	'G'
	.db #0x49	; 73	'I'
	.db #0x4b	; 75	'K'
	.area _INITIALIZER
	.area _CABS (ABS)
