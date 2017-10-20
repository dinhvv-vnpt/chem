#include <18F6723.h>
#device adc=16
#FUSES WDT                    //No Watch Dog Timer
//#FUSES WDT128                   //Watch Dog Timer uses 1:128 Postscale
#FUSES HS                      //High speed Osc, high power 16MHz-25MHz
#FUSES NOXINST                  //Extended set extension and Indexed Addressing mode disabled (Legacy mode)
#FUSES NOLVP  
#FUSES PROTECT,PUT, NOIESO, NOFCMEN 
#use delay(clock=20000000)
#use rs232(baud=38400,parity=N,xmit=PIN_B7,rcv=PIN_B6,bits=8,FORCE_SW,stream=DEBUG)
#use rs232(baud=9600,UART1,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=ethernet,errors)
#use rs232(baud=9600,UART2,parity=N,xmit=PIN_G1,rcv=PIN_G2,bits=8,stream=rs485,ENABLE=PIN_E1,errors)
#use i2c(Master,sda=PIN_C4,scl=PIN_C3)
#define  BUZZ_ON   output_high(PIN_C5)
#define  BUZZ_OFF  output_low(PIN_C5)
#define  ALARM_ON   output_low(PIN_C0)
#define  ALARM_OFF  output_high(PIN_C0)
#DEFINE SDI PIN_D7
#DEFINE SFT PIN_D5
#DEFINE LCH PIN_D6
#include <math.h>
unsigned int8 data_metter[200],crc_high,crc_low,time_key=0,tack=0,day,month,year,hour,min,dow,sec,tack_1s=0,addr=1,count=0,i,ip1,ip2,ip3,ip4,count_alarm=0;
unsigned int16 crc16,port,input1,output,lo[21];
unsigned int1 lcd_en=0,alarm[26],ready=0,out_alarm=0;
float32 i1=0,i2=0,i3=0,u1=0,u2=0,u3=0,cos1=0,cos2=0,cos3=0,p,q,p1,p2,p3,q1,q2,q3;
char f,gfilename[20],msg[200]; 
typedef enum{monitor,state_alarm,add_ip,date,metter1,metter2,metter3,metter4,metter5,metter6,metter7,metter8,
metter9,metter10,metter11,metter12,metter13,metter14,metter15,metter16,metter17,metter18,metter19,metter20,
metter21,metter22,metter23,metter24,metter25,metter26,
metter1_action,metter1_type,metter2_action,metter2_type,metter3_action,metter3_type,
metter4_action,metter4_type,metter5_action,metter5_type,metter6_action,metter6_type,
metter7_action,metter7_type,metter8_action,metter8_type,metter9_action,metter9_type,
metter10_action,metter10_type,metter11_action,metter11_type,metter12_action,metter12_type,
metter13_action,metter13_type,metter14_action,metter14_type,metter15_action,metter15_type,
metter16_action,metter16_type,metter17_action,metter17_type,metter18_action,metter18_type,metter19_action,metter19_type,metter20_action,metter20_type,
metter21_action,metter21_type,metter22_action,metter22_type,metter23_action,metter23_type,metter24_action,metter24_type,metter25_action,metter25_type,
metter26_action,metter26_type,
metter1_action_in,metter1_type_in,metter2_action_in,metter2_type_in,
metter3_action_in,metter3_type_in,metter4_action_in,metter4_type_in,metter5_action_in,metter5_type_in,
metter6_action_in,metter6_type_in,metter7_action_in,metter7_type_in,metter8_action_in,metter8_type_in,
metter9_action_in,metter9_type_in,metter10_action_in,metter10_type_in,metter11_action_in,metter11_type_in,
metter12_action_in,metter12_type_in,metter13_action_in,metter13_type_in,metter14_action_in,metter14_type_in,
metter15_action_in,metter15_type_in,metter16_action_in,metter16_type_in,metter17_action_in,metter17_type_in,metter18_action_in,metter18_type_in,
metter19_action_in,metter19_type_in,metter20_action_in,metter20_type_in,metter21_action_in,metter21_type_in,metter22_action_in,metter22_type_in,
metter23_action_in,metter23_type_in,metter24_action_in,metter24_type_in,metter25_action_in,metter25_type_in,metter26_action_in,metter26_type_in,
add_ip_server,add_ip_client,add_ip_server1,add_ip_server2,
add_ip_server3,add_ip_server4,add_ip_client1,add_ip_client2,add_ip_client3,add_ip_client4,add_ip_client_port,date_min,date_hour,date_day
,date_month,date_year,metter1_current,metter1_current_in,metter2_current,metter2_current_in,metter3_current,metter3_current_in,
metter4_current,metter4_current_in,metter5_current,metter5_current_in,metter6_current,metter6_current_in,metter7_current,metter7_current_in,
metter8_current,metter8_current_in,metter9_current,metter9_current_in,metter10_current,metter10_current_in,metter11_current,metter11_current_in,
metter12_current,metter12_current_in,metter13_current,metter13_current_in,metter14_current,metter14_current_in,metter15_current,metter15_current_in,
metter16_current,metter16_current_in,metter17_current,metter17_current_in,metter18_current,metter18_current_in,metter19_current,metter19_current_in,
metter20_current,metter20_current_in,metter21_current,metter21_current_in,metter22_current,metter22_current_in,metter23_current,metter23_current_in,
metter24_current,metter24_current_in,metter25_current,metter25_current_in,metter26_current,metter26_current_in,
metter1_vol,metter1_vol_in,metter2_vol,metter2_vol_in,metter3_vol,metter3_vol_in,metter4_vol,metter4_vol_in,
metter5_vol,metter5_vol_in,metter6_vol,metter6_vol_in,metter7_vol,metter7_vol_in,metter8_vol,metter8_vol_in,metter9_vol,metter9_vol_in,
metter10_vol,metter10_vol_in,metter11_vol,metter11_vol_in,metter12_vol,metter12_vol_in,metter13_vol,metter13_vol_in,metter14_vol,metter14_vol_in,
metter15_vol,metter15_vol_in,metter16_vol,metter16_vol_in,metter17_vol,metter17_vol_in,metter18_vol,metter18_vol_in,metter19_vol,metter19_vol_in,
metter20_vol,metter20_vol_in,metter21_vol,metter21_vol_in,metter22_vol,metter22_vol_in,metter23_vol,metter23_vol_in,metter24_vol,metter24_vol_in,
metter25_vol,metter25_vol_in,metter26_vol,metter26_vol_in} state_device;
state_device state=monitor;
struct metter_define {
unsigned int1 action;
unsigned int8 type;
unsigned int16 current;
unsigned int16 vol;
};                                      
struct metter_define metter[33];
float32 conver_ieee574(unsigned int8 value1,unsigned int8 value2,unsigned int8 value3,unsigned int8 value4)
{
  unsigned int32 value;
  float32 fraction=1,result,exponent;
  value=make32(value1,value2,value3,value4);
  if(bit_test(value,22)==1) 
     fraction=fraction+pow(2,-1);
  if(bit_test(value,21)==1) 
    fraction=fraction+pow(2,-2);
  if(bit_test(value,20)==1) 
   fraction=fraction+pow(2,-3);
  if(bit_test(value,19)==1) 
   fraction=fraction+pow(2,-4);
  if(bit_test(value,18)==1) 
   fraction=fraction+pow(2,-5);
  if(bit_test(value,17)==1) 
   fraction=fraction+pow(2,-6);
  if(bit_test(value,16)==1) 
   fraction=fraction+pow(2,-7);
   if(bit_test(value,15)==1) 
   fraction=fraction+pow(2,-8);
  if(bit_test(value,14)==1) 
   fraction=fraction+pow(2,-9);  
  if(bit_test(value,13)==1) 
   fraction=fraction+pow(2,-10);
  if(bit_test(value,12)==1) 
   fraction=fraction+pow(2,-11); 
  if(bit_test(value,11)==1) 
   fraction=fraction+pow(2,-12);  
 if(bit_test(value,10)==1) 
   fraction=fraction+pow(2,-13); 
 if(bit_test(value,9)==1) 
   fraction=fraction+pow(2,-14);  
 if(bit_test(value,8)==1) 
   fraction=fraction+pow(2,-15);    
  exponent = ((value >>23) & 0xff);
 result = (fraction) * pow(2, exponent-127);
  if(value1>127)
    result=- result;
  return(result);
}
void show_debug()
{
fprintf(DEBUG,"\n\rDu lieu tai ngan lo %d\n\r",addr);
fprintf(DEBUG,"\n\rU1= %f(KV)\n\r",u1);
//!fprintf(DEBUG,"\n\rU2= %f(KV)\n\r",u2);
//!fprintf(DEBUG,"\n\rU3= %f(KV)\n\r",u3);
fprintf(DEBUG,"\n\rI1= %f(A)\n\r",i1);
//!fprintf(DEBUG,"\n\rI2= %f(A)\n\r",i2);
//!fprintf(DEBUG,"\n\rI3= %f(A)\n\r",i3);
fprintf(DEBUG,"\n\rCOS1= %02f\n\r",cos1);
//!fprintf(DEBUG,"\n\rCOS2= %02f\n\r",cos2);
//!fprintf(DEBUG,"\n\rCOS3= %02f\n\r",cos3);
fprintf(DEBUG,"\n\rP= %f\n\r",p);
fprintf(DEBUG,"\n\rq= %f\n\r",q);
}
void data_out(unsigned int8 type)
{
   switch (type)
   {
   case 0:
   u1=(((data_metter[3])*256+data_metter[4])*(1.7320))/10;
   u2=(((data_metter[7])*256+data_metter[8])*(1.7320))/10;
   u3=(((data_metter[11])*256+data_metter[12])*(1.7320))/10;
   i1=(data_metter[19])*256+data_metter[20];
   i2=(data_metter[23])*256+data_metter[24];
   i3=(data_metter[27])*256+data_metter[28];
   cos1=(data_metter[119]*256+data_metter[120])*0.001;
   cos2=(data_metter[123]*256+data_metter[124])*0.001;
   cos3=(data_metter[127]*256+data_metter[128])*0.001;
   if(cos1<0.1)
      cos1=0;
   if(cos2<0.1)
      cos2=0;
  if(cos3<0.1)
      cos3=0;
    if(u1>1000)
      u1=u1/10;
   if(u2>1000)
      u2=u2/10;   
  if(u3>1000)
      u3=u3/10; 
  if(i1>2000)
   i1=i1/10;
  if(i2>2000)
   i2=i2/10;
  if(i3>2000)
   i3=i3/10;    
   p=((u1*i1*cos1+u2*i2*cos2+u3*i3*cos3)/sqrt(3))/1000;
   q=((u1*i1*sqrt(1-cos1*cos1)+u2*i2*sqrt(1-cos2*cos2)+u3*i3*sqrt(1-cos3*cos3))/sqrt(3))/1000;
   if((data_metter[67]>0x0f))
      p=-p;
   if((data_metter[83]>0x0f))
      q=-q;   
   break;
   case 1:
   u1=conver_ieee574(data_metter[7],data_metter[8],data_metter[9],data_metter[10]);
   u1=(u1/1000)*sqrt(3);
   u2=conver_ieee574(data_metter[11],data_metter[12],data_metter[13],data_metter[14]);
    u2=(u2/1000)*sqrt(3);
   u3=conver_ieee574(data_metter[15],data_metter[16],data_metter[17],data_metter[18]);   
    u3=(u3/1000)*sqrt(3);
   i1=conver_ieee574(data_metter[35],data_metter[36],data_metter[37],data_metter[38]);
   i2=conver_ieee574(data_metter[39],data_metter[40],data_metter[41],data_metter[42]);
   i3=conver_ieee574(data_metter[43],data_metter[44],data_metter[45],data_metter[46]);
   cos1=conver_ieee574(data_metter[51],data_metter[52],data_metter[53],data_metter[54]);
   cos2=conver_ieee574(data_metter[55],data_metter[56],data_metter[57],data_metter[58]);
   cos3=conver_ieee574(data_metter[59],data_metter[60],data_metter[61],data_metter[62]);
   p1=conver_ieee574(data_metter[99],data_metter[100],data_metter[101],data_metter[102]);
   p2=conver_ieee574(data_metter[103],data_metter[104],data_metter[105],data_metter[106]);
   p3=conver_ieee574(data_metter[107],data_metter[108],data_metter[109],data_metter[110]);
   p=(p1+p2+p3)/1000000;
   q1=conver_ieee574(data_metter[115],data_metter[116],data_metter[117],data_metter[118]);
   q2=conver_ieee574(data_metter[119],data_metter[120],data_metter[121],data_metter[122]);
   q3=conver_ieee574(data_metter[123],data_metter[124],data_metter[125],data_metter[126]);
   q=(q1+q2+q3)/1000000;
//!   if(addr==14)
//!      q=3*q;
   break;
   case 2:
   u1=conver_ieee574(data_metter[3],data_metter[4],data_metter[5],data_metter[6]);
   u2=conver_ieee574(data_metter[7],data_metter[8],data_metter[9],data_metter[10]);
   u3=conver_ieee574(data_metter[11],data_metter[12],data_metter[13],data_metter[14]);
   u1=(u1*pow(3,0.5)/1000);
   u2=(u2*pow(3,0.5)/1000);
   u3=(u3*pow(3,0.5)/1000);
   i1=conver_ieee574(data_metter[15],data_metter[16],data_metter[17],data_metter[18]);
   i2=conver_ieee574(data_metter[19],data_metter[20],data_metter[21],data_metter[22]);
   i3=conver_ieee574(data_metter[23],data_metter[24],data_metter[25],data_metter[26]);
   p1=conver_ieee574(data_metter[27],data_metter[28],data_metter[29],data_metter[30]);
   p2=conver_ieee574(data_metter[31],data_metter[32],data_metter[33],data_metter[34]);
   p3=conver_ieee574(data_metter[35],data_metter[36],data_metter[37],data_metter[38]);
   p=(p1+p2+p3)/1000000;  
   q1=conver_ieee574(data_metter[51],data_metter[52],data_metter[53],data_metter[54]);
   q2=conver_ieee574(data_metter[55],data_metter[56],data_metter[57],data_metter[58]);
   q3=conver_ieee574(data_metter[59],data_metter[60],data_metter[61],data_metter[62]);
   q=(q1+q2+q3)/1000000;  
   cos1=conver_ieee574(data_metter[63],data_metter[64],data_metter[65],data_metter[66]);
   cos2=conver_ieee574(data_metter[67],data_metter[68],data_metter[69],data_metter[70]);
   cos3=conver_ieee574(data_metter[71],data_metter[72],data_metter[73],data_metter[74]);
   break;
   case 3:
   u1= data_metter[3]* 16777216+data_metter[4]*65536+data_metter[5]*256+data_metter[6];  
   u2= data_metter[7]* 16777216+data_metter[8]*65536+data_metter[9]*256+data_metter[10]; 
   u3= data_metter[11]* 16777216+data_metter[12]*65536+data_metter[13]*256+data_metter[14]; 
   u1=u1/1000;
   u2=u2/1000;
   u3=u3/1000;
   i1 =data_metter[31]* 16777216+data_metter[32]*65536+data_metter[33]*256+data_metter[34]; 
   i2 =data_metter[35]* 16777216+data_metter[36]*65536+data_metter[37]*256+data_metter[38]; 
   i3 =data_metter[39]* 16777216+data_metter[40]*65536+data_metter[41]*256+data_metter[42];
   cos1=data_metter[127]* 16777216+data_metter[128]*65536+data_metter[129]*256+data_metter[130];
   cos2=data_metter[131]* 16777216+data_metter[132]*65536+data_metter[133]*256+data_metter[134];
   cos3=data_metter[135]* 16777216+data_metter[136]*65536+data_metter[137]*256+data_metter[138];
   cos1=cos1/100;
   cos2=cos2/100;
   cos3=cos3/100;
   p=((u1*i1*cos1+u2*i2*cos2+u3*i3*cos3)/sqrt(3))/1000;
   q=((u1*i1*sqrt(1-cos1*cos1)+u2*i2*sqrt(1-cos2*cos2)+u3*i3*sqrt(1-cos3*cos3))/sqrt(3))/1000;
   break;
   }
show_debug();
}


