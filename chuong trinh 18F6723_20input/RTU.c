#include <RTU.h>
#include <lcd_4bit.c>
#include <real_time_ds1307.c>
#include <config.c>
#include <write_sd.c> 
#include <key_lcd.c>
#int_timer1
void  TIMER1_isr(VOID){
set_timer1(65535-3125);   // ngat xay ra sau 5ms
restart_wdt();
tack++; 
output_toggle(PIN_A5);
   if(key()!=0)
      time_key++;
   else
      time_key=0;
   if(time_key >5)
      {
       lcd_en=0;
       scan_key();
      }
switch(tack)
{
   case 1:
   if(metter[addr].action==1)
      {
      send_metter(addr,metter[addr].type);//gui lenh doc xuong dong ho co dia chi addr
      }
   break;
   case 2:
   break;
   case 3:
   break;
   case 4:
   break;
   case 200:
   tack_1s++;
   if(tack_1s>5)
      {
      ds1307_get_date(day,month,year,dow);
      ds1307_get_time(hour,min,sec);
      tack_1s=0;
      lcd_en=0;
      }
    break;
   case 250:
   disable_interrupts (INT_TIMER1);
   tack=0;
   i1=0;
   i2=0;
   i3=0;
   if(metter[addr].action==1)
   {
      fprintf(DEBUG,"\n\rcount= %x \n\r",count);
//!      for(i=0;i<count;i++)
//!      fprintf(DEBUG," %x",data_metter[i]);
      switch(metter[addr].type)
      {
      case 0:
         if(count==0xbc)
         {
          fprintf(DEBUG,"\n\rMETTER SIMEAS P\n\r");
          data_out(metter[addr].type);
          
          wite_data_sd();
           if((i1<=metter[addr].current*0.9) && (i2<=metter[addr].current*0.9) && (i3<=metter[addr].current*0.9))
           {
            set_alarm_metter(addr,0,output);
            alarm[addr]=0;
           }
          else
          {
            set_alarm_metter(addr,1,output);
            alarm[addr]=1;
          }  
         }
         else
         {
         fprintf(DEBUG,"\n\rDon't Communication METTER SIMEAS P Address %d \n\r",addr);
         }
      break;
      case 1:
         if(count>=0x81)//81
           {
           if(data_metter[0]!=addr)
            {
            for(i=0;i<count;i++)
               data_metter[i]=data_metter[i+1];
            }
           fprintf(DEBUG,"\n\rMETTER EMA96N\n\r");
           data_out(metter[addr].type);
           wite_data_sd();
           if((i1<=metter[addr].current*0.9) && (i2<=metter[addr].current*0.9) && (i3<=metter[addr].current*0.9))
           {
            set_alarm_metter(addr,0,output);
            alarm[addr]=0;
           }
          else
          {
            set_alarm_metter(addr,1,output);
            alarm[addr]=1;
          }  
           }
           else
           {
           fprintf(DEBUG,"\n\rDon't Communication METTER EMA96N Address %d\n\r",addr);
           }
      break;
      case 2:
         if(count >=0x55)//0x55
         {
         fprintf(DEBUG,"\n\rMETTER RISH3440\n\r");
         data_out(metter[addr].type);
         wite_data_sd();
          if((i1<=metter[addr].current*0.9) && (i2<=metter[addr].current*0.9) && (i3<=metter[addr].current*0.9))
           {
            set_alarm_metter(addr,0,output);
            alarm[addr]=0;
           }
          else
          {
            set_alarm_metter(addr,1,output);
            alarm[addr]=1;
          }  
         }
         else
         {
         fprintf(DEBUG,"\n\rDon't Communication METTER RISH3440 Address %d\n\r",addr);
         }
      break;
      case 3:
         if(count ==0xA5)
         {
         fprintf(DEBUG,"\n\rMETTER PECA\n\r");
         data_out(metter[addr].type);
          wite_data_sd();
          if((i1<=metter[addr].current*0.9) && (i2<=metter[addr].current*0.9) && (i3<=metter[addr].current*0.9))
           {
            set_alarm_metter(addr,0,output);
            alarm[addr]=0;
           }
          else
          {
            set_alarm_metter(addr,1,output);
            alarm[addr]=1;
          }  
         }
         else
         {
         fprintf(DEBUG,"\n\rDon't Communication METTER PECA Address %d\n\r",addr);
         }
      break;
     }
   }
  if(addr<26)
      {
      count=0;
      addr++;
      }
   else
      {
      count=0; 
      addr=1;
      }
 //addr=18;
   ALARM_OFF;
   out_alarm=0;
   for(i=1;i<21;i++)
      {
      if(alarm[i]==1)
         ALARM_ON;
      out_alarm=out_alarm || alarm[i];   
      }
   if(out_alarm==1)
      {
      if(ready==0)
         BUZZ_ON;
      else
          BUZZ_OFF;
      }
   else
      {
      BUZZ_OFF;
      ready=0;
      }
    if(MMCInit() == MMC_OK)
       alarm[0]=0;  
    else
      {
       alarm[0]=1; 
       ALARM_ON;
      }
   if(state==state_alarm)
   {
   if(count_alarm<20)
      count_alarm++;
   else
      count_alarm=0;
   lcd_en=0; 
   }
   output_alarm(output); 
   enable_interrupts (INT_TIMER1);  
   break;
}

show_lcd();
}
#INT_RDA2
void  RDA_485(VOID){
unsigned char value;
value = fgetc(rs485);
data_metter[count]=value;
count++;
}
void main()
{
   enable_interrupts(INT_RDA);
   enable_interrupts(INT_RDA2);
   setup_timer_1 (T1_INTERNAL|T1_DIV_BY_8); //104 ms overflow
   enable_interrupts (INT_TIMER1);
   output=0;
   output_alarm(output);
   output_high(PIN_C1);
   lcd_init();
   rtu_init();
   send_ip();
   ds1307_init();
  // DS3231_init(); 
   //ds1307_set_date_time(26,04,15,0,17,13,0);
   ds1307_get_date(day,month,year,dow);
   ds1307_get_time(hour,min,sec);
   setup_wdt(100);
   addr=1;
   enable_interrupts (GLOBAL);
   while(1)
   {
   }
}



