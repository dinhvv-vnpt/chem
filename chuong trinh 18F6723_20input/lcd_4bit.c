///////////////////////////////////////////////////////////////////////////
////                             LCDD.C                                ////
////                 Driver for common LCD modules                     ////
////                                                                   ////
////  lcd_init()   Must be called before any other function.           ////
////                                                                   ////
////  lcd_putc(c)  Will display c on the next position of the LCD.     ////
////                     The following have special meaning:           ////
////                      \f  Clear display                            ////
////                      \n  Go to start of second line               ////
////                      \b  Move back one position                   ////
////                                                                   ////
////  lcd_gotoxy(x,y) Set write position on LCD (upper left is 1,1)    ////
////                                                                   ////
////  x is row: x=1 ==> row=1, x=2 ==>row=2                            ////
////  yx is colum: y=1 ==> colum=1, x=16 ==>colum = 16                 ////
////                                                                   ////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996,2007 Custom Computer Services           ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////

#include "string.h"
#include "lcd_4bit.h"

#define lcd_rs       PIN_B0
#define lcd_enable   PIN_B1
#define data4        PIN_B5
#define data5        PIN_B4
#define data6        PIN_B3
#define data7        PIN_B2
#define lcd_line_two 0x40    // LCD RAM address for the second line

//symbol set cgram for lcd  max = 8x8
const int8 image[56] =
{
0x04, 0x0e, 0x15, 0x04, 0x04, 0x00, 0x00, 0x00, /* Char1: mui ten Up nhon2    0*/ 
0x04, 0x04, 0x15, 0x0e, 0x04,0x00,0x00,0x00, /* Char2: mui ten down nhon1      1*/  
0x08, 0x0c, 0x0e, 0x0f, 0x0e, 0x0c, 0x08, 0x00, /* > solid                    2*/
0x00,0x04, 0x04, 0x15, 0x0e, 0x04,0x00,0x00, /* Char2: mui ten down nhon2      3*/ 
0x00, 0x01, 0x02, 0x14, 0x08, 0x08, 0x00, 0x00, //dau tic                     4 /
0x00,0x00,0x00,0x04, 0x04, 0x15, 0x0e, 0x04, /* Char2: mui ten down nhon3      5*/ 
0x00, 0x00, 0x00,0x04, 0x0e, 0x15, 0x04, 0x04 /* Char1: mui ten Up nhon1      6*/
};
BYTE const LCD_INIT_STRING[4] = {0x28, 0xc, 1, 6};
                             // These bytes need to be sent to the LCD
                             // to start it up.
BYTE const LCD_INIT_STRING1[4] = {0x28, 0x0e, 1, 6};  //0x0e nhap nhay
                             // These bytes need to be sent to the LCD
                             // to start it up. gach chan khong nhap nhay (nhap nhay {0x28, 0xf,1,6})


void lcd_send_nibble( BYTE n ) {
      BYTE n1;
      n1=n;
      if((n1&0x01) == 1) output_high(data4);
      else output_low(data4);
      if(((n1>>1)&0x01) == 1) output_high(data5);
      else output_low(data5);
      if(((n1>>2)&0x01) == 1) output_high(data6);
      else output_low(data6);
      if(((n1>>3)&0x01) == 1) output_high(data7);
      else output_low(data7);

      delay_cycles(1);
      output_high(lcd_enable);
      delay_us(2);
      output_low(lcd_enable);
}


void lcd_send_byte( BYTE address, BYTE n ) {

      output_low(lcd_rs);
      delay_ms(1);
      if(address ==1) output_high(lcd_rs);
      else output_low(lcd_rs);
      delay_cycles(1);
      output_low(lcd_enable);
      lcd_send_nibble(n >> 4);
      lcd_send_nibble(n & 0xf);
}


void lcd_init() {
    BYTE i;
   // set_tris_lcd(LCD_WRITE);
    output_low(lcd_rs);
    output_low(lcd_enable);
    delay_ms(10);
    for(i=1;i<=3;++i) {
       lcd_send_nibble(3);
       delay_ms(1);
    }
    lcd_send_nibble(2);
    for(i=0;i<=3;++i)
       lcd_send_byte(0,LCD_INIT_STRING[i]);
    set_cgram();
    lcd_gotoxy(1,1);
    lcd_putc("\f");
}

void lcd_init1() {
    BYTE i;
    for(i=0;i<=3;++i)
       lcd_send_byte(0,LCD_INIT_STRING1[i]);
}


void lcd_gotoxy( BYTE x, BYTE y) {
   BYTE address;

   if(y!=1)
     address=lcd_line_two;
   else
     address=0;
   address+=x-1;
   lcd_send_byte(0,0x80|address);
}

void lcd_putc( char c) {
   switch (c) {
     case '\f'   : lcd_send_byte(0,1);
                  // delay_ms(1);
                                           break;
     case '\n'   : lcd_gotoxy(1,2);        break;
     case '\b'   : lcd_send_byte(0,0x10);  break;
     default     : lcd_send_byte(1,c);     break;
   }
}

void lcd_clr()
{
   lcd_putc('\f');
   lcd_gotoxy(1,1);
}

/*
void lcd_text_art1(BYTE col,BYTE row,char *st,unsigned int16 time_delay)
{
   char i,n;
   n=strlen(st);
   if(n>(16-col))
   {
      lcd_clr();
      lcd_gotoxy(5,1);
      lcd_putc("ERROR!");
      lcd_gotoxy(2,2);
      lcd_putc("TEXT TOO LONG!");
   }
   else
   {
      lcd_gotoxy(col,row);
      for(i=0;i<n;i++)
      {
         lcd_putc(*st);
         st++;
         delay_ms(time_delay);
      }
   }
}

void display_art_base2(char col,char row, char n,char ch)
{
   char t;
   for(t=col;t<=16;t++)
   { 
      lcd_gotoxy(t,row);
      if(t==n) lcd_putc(ch);
      else lcd_putc(" ");
   }
}

void lcd_text_art2(BYTE col,BYTE row,char *st,unsigned int16 time_delay)
{
   char i,j,n;
   n=strlen(st);
   if(n>(16-col))
   {
      lcd_clr();
      lcd_gotoxy(5,1);
      lcd_putc("ERROR!");
      lcd_gotoxy(2,2);
      lcd_putc("TEXT TOO LONG!");
   }
   else
   {
      for(i=0;i<n;i++)
      {
         for(j=0;j<(17-col-i);j++)
         {
         display_art_base2(col+i,row,(16-j),*st);
         delay_ms(time_delay);
         }
         st++;
      }
   }
}*/

void lcd_display_int(unsigned int16 number){
unsigned int16 temp;
unsigned int8 i = 0, c[10];
temp = number; 
   if (temp != 0){
      while(temp){
      c[i++] = temp%10; 
      temp /= 10;
      }    
   while(i) lcd_putc(c[--i] + '0');
   }
else lcd_putc('0');
}
/*----------------*/
void lcd_display_time(int8 data){
   lcd_putc('0');
   lcd_putc(data+'0');
   
}
/*----------------*/
void set_cgram()
{
   int8 i_cgram;
   lcd_send_byte(0,0x40); // ghi CGRAM Address trong IR, giá tri. này
   // là vi. trí 0 trong CGRAM
   for (i_cgram = 0; i_cgram < sizeof(image); i_cgram++) // la^`n lu+.ot ghi các byte 5bit
   {
   lcd_send_byte(1,image[i_cgram]); // cua cac ki tu dac biet
   }
   }
