/*
 * keys.c
 *
 * Created: 7/14/2018 5:58:28 AM
 *  Author: pvallone
 */ 
//  #include <asf.h>
 #include "keys.h"
 

uint8_t key00[16] = {0x63, 0x08, 0x60, 0x91, 0xe2, 0x64, 0x8f, 0x49, 0x0c, 0xe9, 0x80, 0x45, 0x38, 0xb5, 0x85, 0x3f};
uint8_t key01[16] = {0x2a, 0x23, 0x1b, 0xbf, 0x11, 0x35, 0x73, 0x3d, 0xd2, 0x99, 0x9f, 0xc8, 0x36, 0x71, 0x38, 0xb2};
uint8_t key02[16] = {0x2a, 0x23, 0x1b, 0xbf, 0x11, 0x35, 0x73, 0x3d, 0xd2, 0x99, 0x9f, 0xc8, 0x36, 0x71, 0x38, 0xb2};
uint8_t key03[16] = {0x4D, 0x79, 0x53, 0x65, 0x63, 0x72, 0x65, 0x74, 0x6B, 0x65, 0x79, 0x32, 0x30, 0x31, 0x38, 0x40};
uint8_t key04[16] = {0x08, 0xe6, 0xe6 ,0x93, 0x69, 0x4a, 0x4c, 0xd7 ,0x84, 0xf2, 0x09, 0xb6, 0x74, 0x6d, 0xea, 0x1e};
uint8_t key05[16] = {0x08, 0xe6, 0xe6 ,0x93, 0x69, 0x4a, 0x4c, 0xd7 ,0x84, 0xf2, 0x09, 0xb6, 0x74, 0x6d, 0xea, 0x1e};
uint8_t key06[16] = {0x66, 0x66, 0xD0, 0x45, 0x3A, 0xC2, 0x25, 0x57, 0xF6, 0xD4, 0x6B, 0x7D, 0xDF, 0x96, 0x89, 0xDA};
uint8_t key07[16] = {0x77, 0x77, 0x2F, 0x4A, 0x9C, 0xC0, 0x5E, 0x45, 0x99, 0xBD, 0x26, 0x96, 0xDD, 0x49, 0xF8, 0xA5};
uint8_t key08[16] = {0x88, 0x88, 0xC6, 0x2A, 0xFE, 0x1F, 0x82, 0xD4, 0xE0, 0x85, 0x85, 0x34, 0x4D, 0x77, 0xB8, 0x9D};
uint8_t key09[16] = {0x99, 0x99, 0x4E, 0x6D, 0x4A, 0xF5, 0x92, 0x30, 0x6B, 0xD2, 0xD5, 0x27, 0x7D, 0x77, 0xB3, 0x95};
uint8_t key10[16] = {0xAA, 0xAA, 0x15, 0xA2, 0x55, 0x0B, 0xD2, 0xEA, 0x9A, 0xF2, 0x96, 0x46, 0x15, 0x69, 0x11, 0x12};
uint8_t key11[16] = {0xBB, 0xBB, 0x24, 0xDB, 0x78, 0xA8, 0x70, 0x64, 0xA1, 0xF0, 0x8D, 0xC9, 0x17, 0x96, 0x60, 0x0A};
uint8_t key12[16] = {0xCC, 0xCC, 0xC6, 0x17, 0x1A, 0x52, 0x45, 0xAC, 0xD2, 0x92, 0x46, 0x28, 0x90, 0x62, 0x4C, 0xA5};
uint8_t key13[16] = {0xDD, 0xDD, 0xBF, 0xAC, 0x11, 0x70, 0x55, 0x9C, 0xC9, 0xB6, 0x28, 0x0F, 0x92, 0x95, 0xDF, 0x30};
uint8_t key14[16] = {0xEC, 0x05, 0xDD, 0xAC, 0x2F, 0xAA, 0x89, 0xC6, 0x1E, 0x77, 0x29, 0x37, 0x9A, 0x3A, 0xDF, 0xDE};
uint8_t key15[16] = {0xEE, 0xEE, 0x08, 0x55, 0x77, 0xBD, 0xA7, 0xB8, 0xA7, 0xAF, 0x58, 0xD1, 0x8B, 0x92, 0xF0, 0xDF};

// we use this key for key load into VolatileKey testing
uint8_t key_vol[16]	= {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};

// we use this key for key load into key memory testing
uint8_t key_for_load[16] = {0xAD, 0XEB, 0X37, 0X57, 0X03, 0X45, 0X22, 0X78, 0XBF, 0X76, 0XB4, 0X51, 0X87, 0X84, 0X1E, 0X6C };

uint8_t key_gen_unlocked[16] = {0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5 };
//uint8_t key_gen_unlocked[16] = {0xC0, 0x72, 0x63, 0x53, 0x4E, 0x9F, 0xEC, 0xDD, 0xAC, 0x35, 0x2A, 0x5D, 0x1B, 0x1C, 0x04, 0xD6};
