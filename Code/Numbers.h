//
// Created by 11275 on 2023/12/4.
//

#ifndef SHARE_NUMBERS_H
#define SHARE_NUMBERS_H

char dot[16*29/8] = {
        /*--  文字:  .  --*/
        /*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
        /*--  宽度不是8的倍数，现调整为：宽度x高度=16x29  --*/
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x7C,0x00,
        0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

char dollar[32*29/8] = {
/*--  文字:  ￥  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=29x29   --*/
/*--  宽度不是8的倍数，现调整为：宽度x高度=32x29  --*/
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x3F,0xF8,0x3F,0xE0,0x07,0xC0,0x0F,0x00,0x03,0xE0,0x1E,0x00,
        0x01,0xE0,0x1C,0x00,0x00,0xF0,0x38,0x00,0x00,0x78,0x70,0x00,0x00,0x3C,0xE0,0x00,
        0x00,0x1F,0xC0,0x00,0x00,0x0F,0x80,0x00,0x00,0x07,0x00,0x00,0x03,0xFF,0xFC,0x00,
        0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,
        0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x1F,0xF0,0x00,
        0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00
};

char numbers[10][16*29/8] = {
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x1E,0xF0,0x1C,0x70,
                0x38,0x38,0x38,0x38,0x78,0x3C,0x78,0x3C,0x70,0x3C,0x70,0x3C,0x70,0x3C,0x70,0x3C,
                0x70,0x3C,0x70,0x3C,0x78,0x3C,0x78,0x3C,0x38,0x38,0x38,0x38,0x1C,0x70,0x1E,0xF0,
                0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x1F,0x80,0x1F,0x80,
                0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,
                0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x07,0xC0,
                0x1F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x1C,0xF0,0x38,0x38,
                0x70,0x3C,0x78,0x3C,0x78,0x3C,0x38,0x3C,0x00,0x38,0x00,0x78,0x00,0x70,0x00,0xE0,
                0x01,0xC0,0x03,0x80,0x07,0x00,0x0E,0x00,0x1C,0x0C,0x38,0x1C,0x70,0x1C,0x7F,0xF8,
                0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x3C,0xF0,0x38,0x70,
                0x78,0x78,0x78,0x38,0x38,0x38,0x00,0x78,0x00,0x70,0x01,0xE0,0x07,0xC0,0x01,0xF0,
                0x00,0x78,0x00,0x38,0x00,0x3C,0x30,0x3C,0x78,0x3C,0x78,0x38,0x78,0x38,0x3C,0xF0,
                0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xF0,0x01,0xF0,
                0x01,0xF0,0x03,0xF0,0x07,0xF0,0x06,0xF0,0x0E,0xF0,0x1C,0xF0,0x18,0xF0,0x30,0xF0,
                0x70,0xF0,0x60,0xF0,0xFF,0xFE,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,
                0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x38,0x00,
                0x38,0x00,0x38,0x00,0x38,0x00,0x30,0x00,0x3F,0xE0,0x3F,0xF0,0x38,0x78,0x30,0x38,
                0x00,0x3C,0x00,0x3C,0x00,0x3C,0x38,0x3C,0x78,0x3C,0x78,0x38,0x78,0x78,0x3C,0xF0,
                0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x0F,0x78,0x1C,0x78,
                0x38,0x38,0x38,0x00,0x78,0x00,0x78,0x00,0x77,0xF0,0x7F,0xF8,0x7C,0x38,0x78,0x3C,
                0x78,0x1C,0x70,0x1C,0x70,0x1C,0x78,0x1C,0x78,0x1C,0x38,0x3C,0x3C,0x38,0x1E,0x70,
                0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x3F,0xFC,0x78,0x18,
                0x70,0x30,0x60,0x70,0x00,0x60,0x00,0xE0,0x00,0xC0,0x01,0xC0,0x01,0xC0,0x03,0x80,
                0x03,0x80,0x03,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,
                0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x3C,0xF0,0x38,0x38,
                0x70,0x3C,0x70,0x1C,0x70,0x1C,0x78,0x38,0x3E,0x38,0x1F,0xF0,0x0F,0xE0,0x1F,0xF0,
                0x38,0xF8,0x70,0x78,0x70,0x3C,0x70,0x1C,0x70,0x1C,0x70,0x1C,0x78,0x38,0x3C,0xF0,
                0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        },
        {
                0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x3C,0xF0,0x38,0x78,
                0x70,0x38,0x70,0x3C,0x70,0x3C,0x70,0x3C,0x70,0x3C,0x70,0x3C,0x78,0x7C,0x3C,0xFC,
                0x1F,0xFC,0x07,0x3C,0x00,0x3C,0x00,0x38,0x00,0x78,0x38,0x70,0x38,0xF0,0x3D,0xE0,
                0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
        }

};

#endif //SHARE_NUMBERS_H
