
#include "ssd1289_i8080.h"


 const unsigned char simbols [] PROGMEM = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// ������
	0x04,0x04,0x04,0x04,0x00,0x04,0x00,0x00,// !
	0x0A,0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,// "
	0x0A,0x0A,0x1F,0x0A,0x1F,0x0A,0x0A,0x00,// #
	0x04,0x0F,0x14,0x0E,0x05,0x1E,0x04,0x00,// $
	0x18,0x19,0x02,0x04,0x08,0x13,0x03,0x00,// %
	0x0C,0x12,0x14,0x08,0x14,0x12,0x0D,0x00,// &
	0x0C,0x04,0x08,0x00,0x00,0x00,0x00,0x00,// '
	0x02,0x04,0x08,0x08,0x08,0x04,0x02,0x00,// (
	0x08,0x04,0x02,0x02,0x02,0x04,0x08,0x00,// )
	0x00,0x04,0x15,0x0E,0x15,0x04,0x00,0x00,// *
	0x00,0x04,0x04,0x1F,0x04,0x04,0x00,0x00,// +
	0x00,0x00,0x00,0x00,0x0C,0x04,0x08,0x00,// ,
	0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,// -
	0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,// .
	0x00,0x01,0x02,0x04,0x08,0x10,0x00,0x00,// /

	0x0E,0x11,0x13,0x15,0x19,0x11,0x0E,0x00,// 0
	0x04,0x0C,0x04,0x04,0x04,0x04,0x0E,0x00,// 1
	0x0E,0x11,0x01,0x02,0x04,0x08,0x1F,0x00,// 2
	0x1F,0x02,0x04,0x02,0x01,0x11,0x0E,0x00,// 3
	0x02,0x06,0x0A,0x12,0x1F,0x02,0x02,0x00,// 4
	0x1F,0x10,0x1E,0x01,0x01,0x11,0x0E,0x00,// 5
	0x06,0x08,0x10,0x1E,0x11,0x11,0x0E,0x00,// 6
	0x1F,0x01,0x02,0x04,0x08,0x08,0x08,0x00,// 7
	0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E,0x00,// 8
	0x0E,0x11,0x11,0x0F,0x01,0x02,0x0C,0x00,// 9
	0x00,0x01,0x02,0x04,0x08,0x10,0x00,0x00,// :
	0x00,0x0C,0x0C,0x00,0x0C,0x04,0x08,0x00,// ;
	0x02,0x04,0x08,0x10,0x08,0x04,0x02,0x00,// <
	0x00,0x00,0x1F,0x00,0x1F,0x00,0x00,0x00,// =
	0x08,0x04,0x02,0x01,0x02,0x04,0x08,0x00,// >
	0x0E,0x11,0x01,0x02,0x04,0x00,0x04,0x00,// ?

	0x0E,0x11,0x01,0x0D,0x15,0x15,0x0E,0x00,// @
	0x0E,0x11,0x11,0x11,0x1F,0x11,0x11,0x00,// A
	0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E,0x00,// B
	0x0E,0x11,0x10,0x10,0x10,0x11,0x0E,0x00,// C
	0x1C,0x12,0x11,0x11,0x11,0x12,0x1C,0x00,// D
	0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F,0x00,// E
	0x1F,0x10,0x10,0x1E,0x10,0x10,0x10,0x00,// F
	0x0E,0x11,0x10,0x17,0x11,0x11,0x0E,0x00,// G
	0x11,0x11,0x11,0x1F,0x11,0x11,0x11,0x00,// H
	0x0E,0x04,0x04,0x04,0x04,0x04,0x0E,0x00,// I
	0x07,0x02,0x02,0x02,0x02,0x12,0x0C,0x00,// J
	0x11,0x12,0x14,0x18,0x14,0x12,0x11,0x00,// K
	0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0x00,// L
	0x11,0x1B,0x15,0x15,0x11,0x11,0x11,0x00,// M
	0x11,0x11,0x19,0x15,0x13,0x11,0x11,0x00,// N
	0x0E,0x11,0x11,0x11,0x11,0x11,0x0E,0x00,// O

	0x1E,0x11,0x11,0x1E,0x10,0x10,0x10,0x00,// P
	0x0E,0x11,0x11,0x11,0x15,0x12,0x0D,0x00,// Q
	0x1E,0x11,0x11,0x1E,0x14,0x12,0x11,0x00,// R
	0x0F,0x10,0x10,0x0E,0x01,0x01,0x1E,0x00,// S
	0x1F,0x04,0x04,0x04,0x04,0x04,0x04,0x00,// T
	0x11,0x11,0x11,0x11,0x11,0x11,0x0E,0x00,// U
	0x11,0x11,0x11,0x11,0x11,0x0A,0x04,0x00,// V
	0x11,0x11,0x11,0x11,0x15,0x15,0x0E,0x00,// W
	0x11,0x11,0x0A,0x04,0x0A,0x11,0x11,0x00,// X
	0x11,0x11,0x11,0x0A,0x04,0x04,0x04,0x00,// Y
	0x1F,0x01,0x02,0x04,0x08,0x10,0x1F,0x00,// Z
	0x0E,0x08,0x08,0x08,0x08,0x08,0x0E,0x00,// [
	0x11,0x0A,0x1F,0x04,0x1F,0x04,0x04,0x00,//
	0x0E,0x02,0x02,0x02,0x02,0x02,0x0E,0x00,// ]
	0x04,0x0A,0x11,0x00,0x00,0x00,0x00,0x00,// ^
	0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,// _

	0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,// '
	0x00,0x00,0x0E,0x01,0x0F,0x11,0x0F,0x00,// a
	0x10,0x10,0x1E,0x11,0x11,0x11,0x1E,0x00,// b
	0x00,0x00,0x0E,0x10,0x10,0x11,0x0E,0x00,// c
	0x01,0x01,0x0D,0x13,0x11,0x11,0x0F,0x00,// d
	0x00,0x00,0x0E,0x11,0x1F,0x10,0x0E,0x00,// e
	0x06,0x09,0x08,0x1C,0x08,0x08,0x08,0x00,// f
	0x00,0x0F,0x11,0x11,0x0F,0x01,0x0E,0x00,// g
	0x10,0x10,0x16,0x19,0x11,0x11,0x11,0x00,// h
	0x04,0x00,0x0C,0x04,0x04,0x04,0x0E,0x00,// i
	0x02,0x00,0x06,0x02,0x02,0x12,0x0C,0x00,// j
	0x10,0x10,0x12,0x14,0x18,0x14,0x12,0x00,// k
	0x18,0x08,0x08,0x08,0x08,0x08,0x1C,0x00,// l
	0x00,0x00,0x1A,0x15,0x15,0x11,0x11,0x00,// m
	0x00,0x00,0x16,0x19,0x11,0x11,0x11,0x00,// n
	0x00,0x00,0x0E,0x11,0x11,0x11,0x0E,0x00,// o

	0x00,0x00,0x1E,0x11,0x1E,0x10,0x10,0x00,// p
	0x00,0x00,0x0F,0x11,0x0F,0x01,0x01,0x00,// q
	0x00,0x00,0x16,0x19,0x10,0x10,0x10,0x00,// r
	0x00,0x00,0x0E,0x10,0x0E,0x01,0x1E,0x00,// s
	0x08,0x08,0x1C,0x08,0x08,0x09,0x06,0x00,// t
	0x00,0x00,0x11,0x11,0x11,0x13,0x0D,0x00,// u
	0x00,0x00,0x11,0x11,0x11,0x0A,0x04,0x00,// v
	0x00,0x00,0x11,0x11,0x11,0x15,0x0A,0x00,// w
	0x00,0x00,0x11,0x0A,0x04,0x0A,0x11,0x00,// x
	0x00,0x00,0x11,0x11,0x0F,0x01,0x0E,0x00,// y
	0x00,0x00,0x1F,0x02,0x04,0x08,0x1F,0x00,// z
	0x17,0x15,0x15,0x15,0x17,0x00,0x00,0x00,// 10
	0x17,0x11,0x17,0x14,0x17,0x00,0x00,0x00,// 12
	0x17,0x14,0x17,0x11,0x17,0x00,0x00,0x00,// 15
	0x01,0x05,0x09,0x1F,0x08,0x04,0x00,0x00,// �������
0x00,0x07,0x0E,0x1C,0x11,0x1E,0x00,0x00};// �����������
////////////////////////////////////////////////
void Lcd_Write_Index(uint16_t index)
{
	COMMAND_PORT &= ~(1<<lcd_dc);   //����� ����� �������
	COMMAND_PORT |= (1<<lcd_rd);	//���������� �� �����, ���������� �� ������ 1, �� ���� �������, ��� ��������� �� �� �����  
	COMMAND_PORT &= ~(1<<lcd_cs);    //���������� ���, ������ ��� �� 
	
	DATA_PORT_0 = (index & 0X00FF);			//����� ���� � �������� ���������� ���� �� 0 �� 7 ���� ������� ����
	DATA_PORT_8 = (index & 0XFF00)>>8;		//����� �������
	
	COMMAND_PORT1 &= ~(1<<lcd_wr);	//������ ���������� ����� ������
	_delay_us(5);
	COMMAND_PORT1 |= (1<<lcd_wr);
	
	COMMAND_PORT |= (1<<lcd_cs);	//������������ ���
}
////////////////////////
void Lcd_Write_Data(uint16_t data)
{
	COMMAND_PORT |= (1<<lcd_dc) ;
	COMMAND_PORT |= (1<<lcd_rd);
	COMMAND_PORT &= ~(1<<lcd_cs);
	
	DATA_PORT_0 = (data & 0X00FF);
	DATA_PORT_8 = (data & 0XFF00)>>8;
	
	COMMAND_PORT1 &= ~(1<<lcd_wr);
	_delay_us(5);
	COMMAND_PORT1 |= (1<<lcd_wr);
	
	COMMAND_PORT |= (1<<lcd_cs);
	
}
///////////////////
uint16_t Lcd_Read_Data()
{
	volatile uint16_t val = 0;
	DDRA = 0x00;
	DDRD = 0x00;
	
	COMMAND_PORT |= (1<<lcd_dc); 	//����� ����� ������
	COMMAND_PORT &= ~(1<<lcd_cs);
	COMMAND_PORT1 |= (1<<lcd_wr);
	
	COMMAND_PORT &= ~(1<<lcd_rd);
	
	_delay_us(10);
	val |= PIND;
	val = val<<8;
	val |= PINA;
	
	COMMAND_PORT |= (1<<lcd_rd);
	COMMAND_PORT |= (1<<lcd_cs);
	DDRA = 0xFF;
	DDRD = 0xFF;
	return val;
	
}
////////////////////////
//�-��� ��������� ������ �� ��������	
uint16_t Lcd_Read_Reg(uint16_t reg_addr)
{
	volatile uint16_t data = 0;
	COMMAND_PORT &= ~(1<<lcd_cs);
	Lcd_Write_Index(reg_addr);
	 data = Lcd_Read_Data();
	COMMAND_PORT |= (1<<lcd_cs);
	return data;
}
///////////////////////
//�-��� ���������� ������ � �������
void Lcd_Write_Reg(uint16_t reg_addr, uint16_t reg_data)
{
	COMMAND_PORT &= ~(1<<lcd_cs);
	Lcd_Write_Index(reg_addr);
	Lcd_Write_Data(reg_data);
	COMMAND_PORT |= (1<<lcd_cs);
}
//////////////////
//�-��� �������� ������ � �����
void Set_Cursor(uint16_t x_kur, uint16_t y_kur)
{	
	Lcd_Write_Reg(0x004e,x_kur);
	Lcd_Write_Reg(0x004f,y_kur);
	Lcd_Write_Index(0x0022);

}
////////////////////////
//�-��� ����������� ����� ��������� ������
void Lcd_Clear(uint16_t color)
{
	uint32_t index = 0;
	
	Set_Cursor(0,0);	
	
	  for(index=0;index < 76800;index++)
	  { 			
		  Lcd_Write_Data(color);
	  }
}
/////////////////////////////////////
//�-��� ������ id ������� �������� ������ �� ��������� ����, � ��������� �������
void Get_Lcd_Id(uint16_t x, uint16_t y,uint16_t color, uint16_t phone, uint8_t size)
{
	 uint16_t data = 0;
	 uint8_t id [4] = {0};
	
	data = Lcd_Read_Reg(0x00);
	itoa( data, (char*) id, 16); //����������� ����� � ������ ��� ������ �� �������
	for (uint8_t k = 0; k < 4; k++)
	{
		Draw_Simbol(x ,y + 8*k*size,color,phone, &simbols[(id[k]-0x20)*8],size);
	}
}
///////////////////////////////////

void Init_SSD1289()
{
	_delay_ms(100);
	COMMAND_PORT |= (1<<lcd_res);
	
	Lcd_Write_Reg(0X0007, 0X0021);
	Lcd_Write_Reg(0X0000, 0X0001);
	Lcd_Write_Reg(0X0007, 0X0023);
	Lcd_Write_Reg(0X0010, 0X0000);
	_delay_ms(30);
	Lcd_Write_Reg(0X0007, 0X0033);
	Lcd_Write_Reg(0X0011, 0X6838);
	Lcd_Write_Reg(0X0002, 0X0000);

	
}
/////////////////////////////////////////////////
//�-��� ������ ������ � �������� ����������, ��������� ����� �� ��������� ����, �� ������� ��������, ��������� �������
void Draw_Simbol ( uint16_t x, uint16_t y, uint16_t color, uint16_t phone, const uint8_t *sim, uint8_t size)
{
	 uint8_t j,i,k,p = 0;//���������� ���������, ����������� �� ������� � ��������

	for( j=0; j<8; j++)//��� 8-�� ����� �� x
	{
		for( k=0; k< size; k++)//� ����������� �� ������� �������
		{			  
			Set_Cursor(x+(j*size)+k, y);//������� "������ � �����
			
			for( i=0; i<8; i++)//��� 8-�� ����� �� y
			{
				//���� � ������� ������� 1 - ����� ����� ����� ������� size ���
				if(0x01 & ((pgm_read_byte(&sim[j])) >> (7 - i))) 
				{
					for( p=0; p< size; p++)
					{
						Lcd_Write_Data(color);
					}
				}
				//���� � ������� ������� 0 - ����� ����� ����� ���� size ���
				else 
				{
					for(p=0; p< size; p++)
					{
						 Lcd_Write_Data(phone);
					}
				}
			}
		}
	}

}
///////////////////////////////////
//�-��� ������ ���������� ������ � �������� ����������, ��������� ����� �� ��������� ����, ��������� �������
void Draw_String (uint16_t start_x, uint16_t start_y, uint16_t color, uint16_t phone, uint8_t size, const uint8_t *string)
{
	uint16_t max_x,max_y,x1,y1,k = 0;//���������� ��������� �� � � �, ������������� ���������� ������� �������� � ������
	
	if(size > 5) size=5;//������ ����� ����� 5�5 �������� ����������������
	max_y = 320/(size*8);//���������� ���-�� ��������� �� x
	max_x = 240/(size*8);//���������� ���-�� ��������� �� y
	
	for(x1 =start_x; x1 < max_x; x1++)//�� X
	{
		for(y1 =start_y; y1 < max_y; y1++)//�� Y
		{
			//������� ������ �������� ���������� �� ������
			Draw_Simbol(x1*8*size,y1*8*size,color,phone,simbols+((pgm_read_byte(&string[k]))-32)*8,size);
			//���� ������� �������� �������� ���-�� �������� � ������ - ����� �� �������
			if(k++ > (strlen_P ((char*) string))-2) return;
			
		}
	}
}
/////////////////////////////
//�-��� ������ ����� ��������� �������
void Draw_Point (uint16_t x,uint16_t y,uint16_t color,uint8_t size)
{
	uint8_t j,i = 0;

	for(j=0;j < size; j++)
	{
		Set_Cursor(x+j, y);
		for(i=0;i < size;i++)
		{
			Lcd_Write_Data(color);
		}
	}
}
//////////////////////////////////////////
//�-��� ������ ����� �� �������� ����������
void Draw_Line (uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2,uint16_t color, uint8_t size)
{
	int deltaX = abs(x2 - x1);
	int deltaY = abs(y2 - y1);
	int signX = x1 < x2 ? 1 : -1;
	int signY = y1 < y2 ? 1 : -1;
	int error = deltaX - deltaY;
	
	for (;;)
	{
		Draw_Point(x1,y1,color,size);
		
		if(x1 == x2 && y1 == y2)
		break;
		
		int error2 = error * 2;
		
		if(error2 > -deltaY)
		{
			error -= deltaY;
			x1 += signX;
		}
		
		if(error2 < deltaX)
		{
			error += deltaX;
			y1 += signY;
		}
	}
}
/////////////////////////////////
//�-��� ������ �������������� �����
void Draw_Horizont_Line(uint16_t x1,uint16_t y1,uint16_t y2,uint16_t color, uint8_t size)
{
	Draw_Line(x1, y1, x1, y2, color, size);
}
///////////////////////////////
//�-��� ������ ������������ �����
void Draw_Vertical_Line(uint16_t x1,uint16_t x2,uint16_t y1,uint16_t color, uint8_t size)
{
	Draw_Line(x1, y1, x2, y1, color, size);
}
///////////////////////////////
//�-��� ������ �������������
void Draw_Reactangle(uint16_t left,uint16_t top,uint16_t right,uint16_t bottom,uint16_t color, uint8_t size)
{
	Draw_Horizont_Line(top, left, right, color, size);
	Draw_Horizont_Line(bottom, left, right, color, size);
	Draw_Vertical_Line(top, bottom, left, color, size);
	Draw_Vertical_Line(top, bottom, right, color, size);
		
}
///////////////////////////////
//�-��� ������ ���������� �� ��������� ����������
void Draw_Circle (uint16_t x0,uint16_t y0,uint16_t radius,uint16_t color,uint8_t size)
{
	int x = 0;
	int y = radius;
	int delta = 2 - 2 * radius;
	int error = 0;
	while(y >= 0)
	{
		Draw_Point(x0 + x, y0 + y,color,size);
		Draw_Point(x0 + x, y0 - y,color,size);
		Draw_Point(x0 - x, y0 + y,color,size);
		Draw_Point(x0 - x, y0 - y,color,size);
		error = 2 * (delta + y) - 1;
		if(delta < 0 && error <= 0)
		{
			++x;
			delta += 2 * x + 1;
			continue;
		}
		error = 2 * (delta - x) - 1;
		if(delta > 0 && error > 0)
		{
			--y;
			delta += 1 - 2 * y;
			continue;
		}
		++x;
		delta += 2 * (x - y);
		--y;
	}
}
/////////////////////////////////////
//
void Draw_Circle1(unsigned int x,unsigned int y,char radius,char fill, char size, unsigned int color)
{
	int a_,b_,P;
	a_ = 0;
	b_ = radius;
	P = 1 - radius;
	while (a_ <= b_)
	{
		if(fill == 1)
		{
			Draw_Area(x-a_,y-b_,x+a_,y+b_,color);
			Draw_Area(x-b_,y-a_,x+b_,y+a_,color);
		}
		else
		{
			Draw_Point(a_+x, b_+y, color, size);
			Draw_Point(b_+x, a_+y, color, size);
			Draw_Point(x-a_, b_+y, color, size);
			Draw_Point(x-b_, a_+y, color, size);
			Draw_Point(b_+x, y-a_, color, size);
			Draw_Point(a_+x, y-b_, color, size);
			Draw_Point(x-a_, y-b_, color, size);
			Draw_Point(x-b_, y-a_, color, size);
		}
		if (P < 0 )
		{
			P = (P + 3) + (2* a_);
			a_ ++;
		}
		else
		{
			P = (P + 5) + (2* (a_ - b_));
			a_ ++;
			b_ --;
		}
	}
}
////////////////////////////////////
//�-��� ���������� ������� ������� 
void Set_Work_Area(uint16_t y1, uint16_t x1, uint16_t y2, uint16_t x2)
{
	
	Lcd_Write_Reg(0x0044,((x2 << 8) | x1));
	Lcd_Write_Reg(0x0045,y1);
	Lcd_Write_Reg(0x0046,y2);
	Set_Cursor(x1, y1);
}
///////////////////////////////////////
//�-��� ����������� ��������� �������
void Draw_Area(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom, uint16_t color)
{
	register uint16_t x,y;
	
	Set_Work_Area(left, top, right, bottom);

	for(y=top; y<=bottom; y++)
	{
		for(x=left; x<=right; x++)
		{
			Lcd_Write_Data(color);
	    }
	}
		
	Set_Work_Area(0, 0, 319, 239 );
	
}
////////////////////////////////////////
//�-��� ������ �����������
void Draw_Triangle( uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t size, uint16_t color)
{
	
	Draw_Line( x1, y1, x2, y2, color, size);
	Draw_Line( x2, y2, x3, y3, color, size);
	Draw_Line( x3, y3, x1, y1, color, size);
}
/*void Draw_Fill_Triangle( uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t size, uint16_t color )
{
	int dx1, dx2, dx3;
	int sx1, sx2, sy;
	
	
	if ( y1 > y2 ) { swap( ushort, y1, y2 ); swap( ushort, x1, x2 ); }
	if ( y2 > y3 ) { swap( ushort, y3, y2 ); swap( ushort, x3, x2 ); }
	if ( y1 > y2 ) { swap( ushort, y1, y2 ); swap( ushort, x1, x2 ); }
	
	sx2= x1 * 1000; // Use fixed point math for x axis values
	sx1 = sx2;
	sy=y1;
	
	// Calculate interpolation deltas
	if (y2-y1 > 0) dx1=((x2-x1)*1000)/(y2-y1);
	else dx1=0;
	if (y3-y1 > 0) dx2=((x3-x1)*1000)/(y3-y1);
	else dx2=0;
	if (y3-y2 > 0) dx3=((x3-x2)*1000)/(y3-y2);
	else dx3=0;
	
	// Render scanlines (horizontal lines are the fastest rendering method)
	if (dx1 > dx2)
	{
		for(; sy<=y2; sy++, sx1+=dx2, sx2+=dx1)
		{
			Draw_Horizont_Line(size, sx1/1000, sy, (sx2-sx1)/1000, color);
		}
		sx2 = x2*1000;
		sy = y2;
		for(; sy<=y3; sy++, sx1+=dx2, sx2+=dx3)
		{
			Draw_Horizont_Line(size, sx1/1000, sy, (sx2-sx1)/1000, color);
		}
	}
	else
	{
		for(; sy<=y2; sy++, sx1+=dx1, sx2+=dx2)
		{
			Draw_Horizont_Line(size, sx1/1000, sy, (sx2-sx1)/1000, color);
		}
		sx1 = x2*1000;
		sy = y2;
		for(; sy<=y3; sy++, sx1+=dx3, sx2+=dx2)
		{
			Draw_Horizont_Line(size, sx1/1000, sy, (sx2-sx1)/1000, color);
		}
	}
	
}*/

void Draw_Picture_Hor(uint16_t start_x,uint16_t start_y,uint16_t end_x,uint16_t end_y,const uint16_t *pic)
{
	uint16_t  x,y;
	for (y=0;y<(end_y);y++)
	{
		Set_Cursor(start_x,start_y+y);
		Lcd_Write_Index(0x0022);
		for (x=0;x<(end_x);x++) Lcd_Write_Data(*pic++);
	}
}