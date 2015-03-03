#pragma once

#define F_CPU 8000000UL

#include <util/delay.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <string.h>
#include <stdlib.h>

#define DATA_DDR_0 DDRA
#define DATA_DDR_8 DDRD

#define DATA_PORT_0 PORTA
#define DATA_PORT_8 PORTD

#define COMMAND_PORT PORTB
#define COMMAND_PORT1 PORTC

#define COMMAND_DDR DDRB
#define COMMAND_DDR1 DDRC

#define lcd_dc 0   //RS(comm - 0; data - 1)
#define lcd_res 1  //(active - 0)
#define lcd_rd 2	//(read_active - 0)
#define lcd_cs 3  //(chip_select_active - 0)
#define lcd_wr 0	//(write_active - 0)


#define cyan	  0x07FF
#define magneta   0xF81F
#define yellow    0xFFE0
#define	red		  0X001F
#define	green	  0X07E0
#define	blue      0XF800
#define white     0XFFFF
#define black     0X0000


extern const unsigned char simbols [] PROGMEM;
void Lcd_Write_Index(uint16_t index);
void Lcd_Write_Data(uint16_t data);
void Lcd_Write_Reg(uint16_t lcd_reg, uint16_t lcd_data);
uint16_t Lcd_Read_Reg(uint16_t reg_addr);

void Set_Cursor(uint16_t x_kur, uint16_t y_kur);
void Lcd_Clear(uint16_t color);
void Get_Lcd_Id(uint16_t x, uint16_t y,uint16_t color, uint16_t phone, uint8_t size);
void Init_SSD1289();

void Draw_Simbol(uint16_t x, uint16_t y, uint16_t color, uint16_t phone, const uint8_t *sim, uint8_t size);
void Draw_String (uint16_t start_x,uint16_t start_y,uint16_t color,uint16_t phone,uint8_t size ,const uint8_t *string);
void Draw_Point (uint16_t x,uint16_t y,uint16_t color,uint8_t size);
void Draw_Line (uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2,uint16_t color,uint8_t size);
void Draw_Horizont_Line(uint16_t x1,uint16_t y1,uint16_t y2,uint16_t color,uint8_t size);
void Draw_Vertical_Line(uint16_t x1,uint16_t x2,uint16_t y1,uint16_t color, uint8_t size);
void Draw_Reactangle(uint16_t left,uint16_t top,uint16_t right,uint16_t bottom,uint16_t color, uint8_t size);
void Draw_Triangle( uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t size, uint16_t color);
void Draw_Circle (uint16_t x0,uint16_t y0,uint16_t radius,uint16_t color, uint8_t size);
void Set_Work_Area(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void Draw_Area(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom, uint16_t color);

void Draw_Circle1(unsigned int x,unsigned int y,char radius,char fill, char size, unsigned int color);
void Draw_Picture_Hor(uint16_t start_x,uint16_t start_y,uint16_t end_x,uint16_t end_y,const uint16_t *pic);

