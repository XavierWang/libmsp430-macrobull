/*
 * 
 *  --0--
 * |     |
 * 5     1
 * |     |
 *  --6--
 * |     |
 * 4     2
 * |     |
 *  --3--  .7
 * 
 */


#ifndef __7SEG_H
#define __7SEG_H

#define SEG_DISP_CA_7_Z 0b11111111

#define SEG_DISP_CA_7_0 0b11000000
#define SEG_DISP_CA_7_1 0b11111001
#define SEG_DISP_CA_7_2 0b10100100
#define SEG_DISP_CA_7_3 0b10110000
#define SEG_DISP_CA_7_4 0b10011001
#define SEG_DISP_CA_7_5 0b10010010
#define SEG_DISP_CA_7_6 0b10000010
#define SEG_DISP_CA_7_7 0b11111000
#define SEG_DISP_CA_7_8 0b10000000
#define SEG_DISP_CA_7_9 0b10010000
#define SEG_DISP_CA_7_A 0b10001000
#define SEG_DISP_CA_7_B 0b10000011
#define SEG_DISP_CA_7_C 0b10100111
#define SEG_DISP_CA_7_D 0b10100001
#define SEG_DISP_CA_7_E 0b10000110
#define SEG_DISP_CA_7_F 0b10001110

const char SEG_DISP_CA_7_NUM[]={
	SEG_DISP_CA_7_0,
	SEG_DISP_CA_7_1,
	SEG_DISP_CA_7_2,
	SEG_DISP_CA_7_3,
	SEG_DISP_CA_7_4,
	SEG_DISP_CA_7_5,
	SEG_DISP_CA_7_6,
	SEG_DISP_CA_7_7,
	SEG_DISP_CA_7_8,
	SEG_DISP_CA_7_9,
	SEG_DISP_CA_7_A,
	SEG_DISP_CA_7_B,
	SEG_DISP_CA_7_C,
	SEG_DISP_CA_7_D,
	SEG_DISP_CA_7_E,
	SEG_DISP_CA_7_F
};
	

#define SEG_DISP_CC_7_Z 0b00000000


#define SEG_DISP_CC_7_0 (char)~SEG_DISP_CA_7_0
#define SEG_DISP_CC_7_1 (char)~SEG_DISP_CA_7_1
#define SEG_DISP_CC_7_2 (char)~SEG_DISP_CA_7_2
#define SEG_DISP_CC_7_3 (char)~SEG_DISP_CA_7_3
#define SEG_DISP_CC_7_4 (char)~SEG_DISP_CA_7_4
#define SEG_DISP_CC_7_5 (char)~SEG_DISP_CA_7_5
#define SEG_DISP_CC_7_6 (char)~SEG_DISP_CA_7_6
#define SEG_DISP_CC_7_7 (char)~SEG_DISP_CA_7_7
#define SEG_DISP_CC_7_8 (char)~SEG_DISP_CA_7_8
#define SEG_DISP_CC_7_9 (char)~SEG_DISP_CA_7_9
#define SEG_DISP_CC_7_A (char)~SEG_DISP_CA_7_A
#define SEG_DISP_CC_7_B (char)~SEG_DISP_CA_7_B
#define SEG_DISP_CC_7_C (char)~SEG_DISP_CA_7_C
#define SEG_DISP_CC_7_D (char)~SEG_DISP_CA_7_D
#define SEG_DISP_CC_7_E (char)~SEG_DISP_CA_7_E
#define SEG_DISP_CC_7_F (char)~SEG_DISP_CA_7_F

const char SEG_DISP_CC_7_NUM[]={
	SEG_DISP_CC_7_0,
	SEG_DISP_CC_7_1,
	SEG_DISP_CC_7_2,
	SEG_DISP_CC_7_3,
	SEG_DISP_CC_7_4,
	SEG_DISP_CC_7_5,
	SEG_DISP_CC_7_6,
	SEG_DISP_CC_7_7,
	SEG_DISP_CC_7_8,
	SEG_DISP_CC_7_9,
	SEG_DISP_CC_7_A,
	SEG_DISP_CC_7_B,
	SEG_DISP_CC_7_C,
	SEG_DISP_CC_7_D,
	SEG_DISP_CC_7_E,
	SEG_DISP_CC_7_F
};
	
#endif
