unsigned int8 key()
{
unsigned int8 result=0;
if(input(PIN_A1)==0)  result=1;
if(input(PIN_A0)==0)  result=2;
if(input(PIN_A3)==0)  result=3;
if(input(PIN_A2)==0)  result=4;
return result;
}
void scan_key()
{
   switch(key())
   {
   case 1:
      switch (state)
      {
      case monitor:
      state=metter;
      break;
      case metter1:
      state=metter1_action;
      break;
      case metter1_action:
      state= metter1_action_in;
      break;
      case metter1_type:
      state=metter1_type_in;
      break;
      case metter_current:
      input=metter[1].current;
      state=metter_current_in;
      break;
      case metter2:
      state=metter2_action;
      break;
      case metter2_action:
      state= metter2_action_in;
      break;
      case metter2_type:
      state=metter2_type_in;
      break;
      case metter2_current:
      input=metter[2].current;
      state=metter2_current_in;
      break;
      case metter3:
      state=metter3_action;
      break;
      case metter3_action:
      state= metter3_action_in;
      break;
      case metter3_type:
      state=metter3_type_in;
      break;
      case metter3_current:
      input=metter[3].current;
      state=metter3_current_in;
      break;
      case metter4:
      state=metter4_action;
      break;
      case metter4_action:
      state= metter4_action_in;
      break;
      case metter4_type:
      state=metter4_type_in;
      break;
      case metter4_current:
      input=metter[4].current;
      state=metter4_current_in;
      break;
      case metter5:
      state=metter5_action;
      break;
      case metter5_action:
      state= metter5_action_in;
      break;
      case metter5_type:
      state=metter5_type_in;
      break;
      case metter5_current:
      input=metter[5].current;
      state=metter5_current_in;
      break;
      case metter6:
      state=metter6_action;
      break;
      case metter6_action:
      state= metter6_action_in;
      break;
      case metter6_type:
      state=metter6_type_in;
      break;
      case metter6_current:
      input=metter[6].current;
      state=metter6_current_in;
      break;
      case metter7:
      state=metter7_action;
      break;
      case metter7_action:
      state= metter7_action_in;
      break;
      case metter7_type:
      state=metter7_type_in;
      break;
      case metter7_current:
      input=metter[7].current;
      state=metter7_current_in;
      break;
      case metter8:
      state=metter8_action;
      break;
      case metter8_action:
      state= metter8_action_in;
      break;
      case metter8_type:
      state=metter8_type_in;
      break;
      case metter8_current:
      input=metter[8].current;
      state=metter8_current_in;
      break;
      case metter9:
      state=metter9_action;
      break;
      case metter9_action:
      state= metter9_action_in;
      break;
      case metter9_type:
      state=metter9_type_in;
      break;
      case metter9_current:
      input=metter[9].current;
      state=metter9_current_in;
      break;
      case metter0:
      state=metter0_action;
      break;
      case metter0_action:
      state= metter0_action_in;
      break;
      case metter0_type:
      state=metter0_type_in;
      break;
      case metter0_current:
      input=metter[10].current;
      state=metter0_current_in;
      break;
      case metter1:
      state=metter1_action;
      break;
      case metter1_action:
      state= metter1_action_in;
      break;
      case metter1_type:
      state=metter1_type_in;
      break;
      case metter1_current:
      input=metter[11].current;
      state=metter1_current_in;
      break;
      case metter2:
      state=metter2_action;
      break;
      case metter2_action:
      state= metter2_action_in;
      break;
      case metter2_type:
      state=metter2_type_in;
      break;
      case metter2_current:
      input=metter[12].current;
      state=metter2_current_in;
      break;
      case metter3:
      state=metter3_action;
      break;
      case metter3_action:
      state= metter3_action_in;
      break;
      case metter3_type:
      state=metter3_type_in;
      break;
      case metter3_current:
      input=metter[13].current;
      state=metter3_current_in;
      break;
      case metter4:
      state=metter4_action;
      break;
      case metter4_action:
      state= metter4_action_in;
      break;
      case metter4_type:
      state=metter4_type_in;
      break;
      case metter4_current:
      input=metter[14].current;
      state=metter4_current_in;
      break;
      case metter5:
      state=metter5_action;
      break;
      case metter5_action:
      state= metter5_action_in;
      break;
      case metter5_type:
      state=metter5_type_in;
      break;
      case metter5_current:
      input=metter[15].current;
      state=metter5_current_in;
      break;
      case metter6:
      state=metter6_action;
      break;
      case metter6_action:
      state= metter6_action_in;
      break;
      case metter6_type:
      state=metter6_type_in;
      break;
      case metter6_current:
      input=metter[16].current;
      state=metter6_current_in;
      break;
      case add_ip:
      state=add_ip_server;
      break;
      case add_ip_server:
      ip1=read_eeprom(64);
      ip2=read_eeprom(65);
      ip3=read_eeprom(66);
      ip4=read_eeprom(67);
      state=add_ip_server1;
      break;
      case add_ip_server1:
      state=add_ip_server2;
      break;
      case add_ip_server2:
      state=add_ip_server3;
      break;
      case add_ip_server3:
      state=add_ip_server4;
      break;
      case add_ip_server4:
      write_eeprom(64,ip1);
      write_eeprom(65,ip2);
      write_eeprom(66,ip3);
      write_eeprom(67,ip4);
      state=add_ip_server;
      break;
      case add_ip_client:
      ip1=read_eeprom(68);
      ip2=read_eeprom(69);
      ip3=read_eeprom(70);
      ip4=read_eeprom(71);
      port=read_eeprom(72)+read_eeprom(73)*256;
      state=add_ip_client1;
      break;
      case add_ip_client1:
      state=add_ip_client2;
      break;
      case add_ip_client2:
      state=add_ip_client3;
      break;
      case add_ip_client3:
      state=add_ip_client4;
      break;
      case add_ip_client4:
      state=add_ip_client_port;
      break;
      case add_ip_client_port:
      write_eeprom(68,ip1);
      write_eeprom(69,ip2);
      write_eeprom(70,ip3);
      write_eeprom(71,ip4);
      write_eeprom(72,port&0x00ff);
      write_eeprom(73,(port>>8)&0x00ff);
      state=add_ip_client;
      break;
      case date:
      state=date_hour;
      break;
      case date_hour:
       ds1307_set_date_time(day,month,year,0,hour,min,0);
      state=date_min;
      break;
      case date_min:
       ds1307_set_date_time(day,month,year,0,hour,min,0);
      state=date_day;
      break;
      case date_day:
       ds1307_set_date_time(day,month,year,0,hour,min,0);
      state=date_month;
      break;
      case date_month:
       ds1307_set_date_time(day,month,year,0,hour,min,0);
      state=date_year;
      break;
      case date_year:
       ds1307_set_date_time(day,month,year,0,hour,min,0);
      state=date;
      break;
      case metter_action_in:
         write_eeprom(0,metter[1].action);
         state=metter_action;
      break;
      case metter_type_in:
         write_eeprom(1,metter[1].type);
         state=metter_type;
      break;
      case metter_current_in:
         metter[1].current=input;
         write_eeprom(32,input & 0x00ff);
         write_eeprom(33,(input >>8) & 0x00ff);
         state=metter_current;
      break;
      case metter2_action_in:
         write_eeprom(2,metter[2].action);
         state=metter2_action;
      break;
      case metter2_type_in:
         write_eeprom(3,metter[2].type);
         state=metter2_type;
      break;
      case metter2_current_in:
         metter[2].current=input;
         write_eeprom(34,input & 0x00ff);
         write_eeprom(35,(input >>8) & 0x00ff);
         state=metter2_current;
      break;
      case metter3_action_in:
         write_eeprom(4,metter[3].action);
         state=metter3_action;
      break;
      case metter3_type_in:
         write_eeprom(5,metter[3].type);
         state=metter3_type;
      break;
      case metter3_current_in:
         metter[3].current=input;
         write_eeprom(36,input & 0x00ff);
         write_eeprom(37,(input >>8) & 0x00ff);
         state=metter3_current;
      break;
      case metter4_action_in:
         write_eeprom(6,metter[4].action);
         state=metter4_action;
      break;
      case metter4_type_in:
         write_eeprom(7,metter[4].type);
         state=metter4_type;
      break;
      case metter4_current_in:
         metter[4].current=input;
         write_eeprom(38,input & 0x00ff);
         write_eeprom(39,(input >>8) & 0x00ff);
         state=metter4_current;
      break;
      case metter5_action_in:
         write_eeprom(8,metter[5].action);
         state=metter5_action;
      break;
      case metter5_type_in:
         write_eeprom(9,metter[5].type);
         state=metter5_type;
      break;
      case metter5_current_in:
         metter[5].current=input;
         write_eeprom(40,input & 0x00ff);
         write_eeprom(41,(input >>8) & 0x00ff);
         state=metter5_current;
      break;
      case metter6_action_in:
         write_eeprom(10,metter[6].action);
         state=metter6_action;
      break;
      case metter6_type_in:
         write_eeprom(11,metter[6].type);
         state=metter6_type;
      break;
      case metter6_current_in:
         metter[6].current=input;
         write_eeprom(42,input & 0x00ff);
         write_eeprom(43,(input >>8) & 0x00ff);
         state=metter6_current;
      break;
      case metter7_action_in:
         write_eeprom(12,metter[7].action);
         state=metter7_action;
      break;
      case metter7_type_in:
         write_eeprom(13,metter[7].type);
         state=metter7_type;
      break;
      case metter7_current_in:
         metter[7].current=input;
         write_eeprom(44,input & 0x00ff);
         write_eeprom(45,(input >>8) & 0x00ff);
         state=metter7_current;
      break;
      case metter8_action_in:
         write_eeprom(14,metter[8].action);
         state=metter8_action;
      break;
      case metter8_type_in:
         write_eeprom(15,metter[8].type);
         state=metter8_type;
      break;
      case metter8_current_in:
         metter[8].current=input;
         write_eeprom(46,input & 0x00ff);
         write_eeprom(47,(input >>8) & 0x00ff);
         state=metter8_current;
      break;
       case metter9_action_in:
         write_eeprom(16,metter[9].action);
         state=metter9_action;
      break;
      case metter9_type_in:
         write_eeprom(17,metter[9].type);
         state=metter9_type;
      break;
      case metter9_current_in:
         metter[9].current=input;
         write_eeprom(48,input & 0x00ff);
         write_eeprom(49,(input >>8) & 0x00ff);
         state=metter9_current;
      break;
      case metter0_action_in:
         write_eeprom(18,metter[10].action);
         state=metter0_action;
      break;
      case metter0_type_in:
         write_eeprom(19,metter[10].type);
         state=metter0_type;
      break;
      case metter0_current_in:
         metter[10].current=input;
         write_eeprom(50,input & 0x00ff);
         write_eeprom(51,(input >>8) & 0x00ff);
         state=metter0_current;
      break;
      case metter1_action_in:
         write_eeprom(20,metter[11].action);
         state=metter1_action;
      break;
      case metter1_type_in:
         write_eeprom(21,metter[11].type);
         state=metter1_type;
      break;
      case metter1_current_in:
         metter[11].current=input;
         write_eeprom(52,input & 0x00ff);
         write_eeprom(53,(input >>8) & 0x00ff);
         state=metter1_current;
      break;
      case metter2_action_in:
         write_eeprom(22,metter[12].action);
         state=metter2_action;
      break;
      case metter2_type_in:
         write_eeprom(23,metter[12].type);
         state=metter2_type;
      break;
      case metter2_current_in:
         metter[12].current=input;
         write_eeprom(54,input & 0x00ff);
         write_eeprom(55,(input >>8) & 0x00ff);
         state=metter2_current;
      break;
      case metter3_action_in:
         write_eeprom(24,metter[13].action);
         state=metter3_action;
      break;
      case metter3_type_in:
         write_eeprom(25,metter[13].type);
         state=metter3_type;
      break;
      case metter3_current_in:
         metter[13].current=input;
         write_eeprom(56,input & 0x00ff);
         write_eeprom(57,(input >>8) & 0x00ff);
         state=metter3_current;
      break;
      case metter4_action_in:
         write_eeprom(26,metter[14].action);
         state=metter4_action;
      break;
      case metter4_type_in:
         write_eeprom(27,metter[14].type);
         state=metter4_type;
      break;
      case metter4_current_in:
         metter[14].current=input;
         write_eeprom(58,input & 0x00ff);
         write_eeprom(59,(input >>8) & 0x00ff);
         state=metter4_current;
      break;
      case metter5_action_in:
         write_eeprom(28,metter[15].action);
         state=metter5_action;
      break;
      case metter5_type_in:
         write_eeprom(29,metter[15].type);
         state=metter5_type;
      break;
      case metter5_current_in:
         metter[15].current=input;
         write_eeprom(60,input & 0x00ff);
         write_eeprom(61,(input >>8) & 0x00ff);
         state=metter5_current;
      break;
      case metter6_action_in:
         write_eeprom(30,metter[16].action);
         state=metter6_action;
      break;
      case metter6_type_in:
         write_eeprom(31,metter[16].type);
         state=metter6_type;
      break;
      case metter6_current_in:
         metter[16].current=input;
         write_eeprom(62,input & 0x00ff);
         write_eeprom(63,(input >>8) & 0x00ff);
         state=metter6_current;
      break;
      }
   break;
   case 2:
      switch (state)
      {
      case metter:
      state=metter2;
      break;
      case metter2:
      state=metter3;
      break;
      case metter3:
      state=metter4;
      break;
      case metter4:
      state=metter5;
      break;
      case metter5:
      state=metter6;
      break;
      case metter6:
      state=metter7;
      break;
      case metter7:
      state=metter8;
      break;
      case metter8:
      state=metter9;
      break;
      case metter9:
      state=metter0;
      break;
      case metter0:
      state=metter1;
      break;
      case metter1:
      state=metter2;
      break;
      case metter2:
      state=metter3;
      break;
      case metter3:
      state=metter4;
      break;
      case metter4:
      state=metter5;
      break;
      case metter5:
      state=metter6;
      break;
      case metter6:
      state=add_ip;
      break;
      case add_ip:
      state=date;
      break;
      case date:
      state=metter;
      break;
      case metter_type:
      state=metter_action;
      break;
      case metter_current:
      state=metter_type;
      break;
      case metter_action:
      state=metter_current;
      break;
      case metter_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter2_type:
      state=metter2_action;
      break;
      case metter2_current:
      state=metter2_type;
      break;
      case metter2_action:
      state=metter2_current;
      break;
      case metter2_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter3_type:
      state=metter3_action;
      break;
      case metter3_current:
      state=metter3_type;
      break;
      case metter3_action:
      state=metter3_current;
      break;
      case metter3_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter4_type:
      state=metter4_action;
      break;
      case metter4_current:
      state=metter4_type;
      break;
      case metter4_action:
      state=metter4_current;
      break;
      case metter4_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter5_type:
      state=metter5_action;
      break;
      case metter5_current:
      state=metter5_type;
      break;
      case metter5_action:
      state=metter5_current;
      break;
      case metter5_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter6_type:
      state=metter6_action;
      break;
      case metter6_current:
      state=metter6_type;
      break;
      case metter6_action:
      state=metter6_current;
      break;
      case metter6_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter7_type:
      state=metter7_action;
      break;
      case metter7_current:
      state=metter7_type;
      break;
      case metter7_action:
      state=metter7_current;
      break;
      case metter7_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter8_type:
      state=metter8_action;
      break;
      case metter8_current:
      state=metter8_type;
      break;
      case metter8_action:
      state=metter8_current;
      break;
      case metter8_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter9_type:
      state=metter9_action;
      break;
      case metter9_current:
      state=metter9_type;
      break;
      case metter9_action:
      state=metter9_current;
      break;
      case metter9_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
       case metter0_type:
      state=metter0_action;
      break;
      case metter0_current:
      state=metter0_type;
      break;
      case metter0_action:
      state=metter0_current;
      break;
      case metter0_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
       case metter1_type:
      state=metter1_action;
      break;
      case metter1_current:
      state=metter1_type;
      break;
      case metter1_action:
      state=metter1_current;
      break;
      case metter1_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter2_type:
      state=metter2_action;
      break;
      case metter2_current:
      state=metter2_type;
      break;
      case metter2_action:
      state=metter2_current;
      break;
      case metter2_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
       case metter3_type:
      state=metter3_action;
      break;
      case metter3_current:
      state=metter3_type;
      break;
      case metter3_action:
      state=metter3_current;
      break;
      case metter3_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter4_type:
      state=metter4_action;
      break;
      case metter4_current:
      state=metter4_type;
      break;
      case metter4_action:
      state=metter4_current;
      break;
      case metter4_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter5_type:
      state=metter5_action;
      break;
      case metter5_current:
      state=metter5_type;
      break;
      case metter5_action:
      state=metter5_current;
      break;
      case metter5_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case metter6_type:
      state=metter6_action;
      break;
      case metter6_current:
      state=metter6_type;
      break;
      case metter6_action:
      state=metter6_current;
      break;
      case metter6_current_in:
         if (input < 2000)
            input++;
         else
            input=0;
      break;
      case add_ip_client:
      state=add_ip_server;
      break;
      case add_ip_server1:
      if(ip1<255)
      ip1++;
      else
      ip1=0;
      break;
      case add_ip_server2:
      if(ip2<255)
      ip2++;
      else
      ip2=0;
      break;
      case add_ip_server3:
      if(ip3<255)
      ip3++;
      else
      ip3=0;
      break;
      case add_ip_server4:
      if(ip4<255)
      ip4++;
      else
      ip4=0;
      break;
      case add_ip_client1:
      if(ip1<255)
      ip1++;
      else
      ip1=0;
      break;
      case add_ip_client2:
      if(ip2<255)
      ip2++;
      else
      ip2=0;
      break;
      case add_ip_client3:
      if(ip3<255)
      ip3++;
      else
      ip3=0;
      break;
      case add_ip_client4:
      if(ip4<255)
      ip4++;
      else
      ip4=0;
      break;
      case add_ip_client_port:
      if(port <65535)
         port++;
      else
        port=0;
      break;
      case date_hour:
         if (hour <24)
            hour++;
         else
            hour=0;
      break;
      case date_min:
         if (min <60)
            min++;
         else
            min=0;
      break;
      case date_day:
         if (day <23)
            day++;
         else
            day=0;
      break;
      case date_month:
         if (month <12)
            month++;
         else
            month=1;
      break;
      case date_year:
         if (year <50)
            year++;
         else
            year=14;
      break;
      }
      
   break;
   case 3:
      switch (state)
      {
      case date:
      state=metter6;
      break;
      case add_ip:
      state=date;
      break;
      case metter:
      state=add_ip;
      break;
      case metter2:
      state=metter;
      break;
      case metter3:
      state=metter2;
      break;
      case metter4:
      state=metter3;
      break;
      case metter5:
      state=metter4;
      break;
      case metter6:
      state=metter5;
      break;
      case metter7:
      state=metter6;
      break;
      case metter8:
      state=metter7;
      break;
      case metter9:
      state=metter8;
      break;
      case metter0:
      state=metter9;
      break;
      case metter1:
      state=metter0;
      break;
      case metter2:
      state=metter3;
      break;
      case metter3:
      state=metter1;
      break;
      case metter4:
      state=metter3;
      break;
      case metter5:
      state=metter4;
      break;
      case metter6:
      state=metter5;
      break;
      case metter_action:
      state=metter_type;
      break;
      case metter_type:
      state=metter_current;
      break;
      case metter_current:
      state=metter_action;
      break;
      case metter_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter2_action:
      state=metter2_type;
      break;
      case metter2_type:
      state=metter2_current;
      break;
      case metter2_current:
      state=metter2_action;
      break;
      case metter2_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter3_action:
      state=metter3_type;
      break;
      case metter3_type:
      state=metter3_current;
      break;
      case metter3_current:
      state=metter3_action;
      break;
      case metter3_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter4_action:
      state=metter4_type;
      break;
      case metter4_type:
      state=metter4_current;
      break;
      case metter4_current:
      state=metter4_action;
      break;
      case metter4_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
     case metter5_action:
      state=metter5_type;
      break;
      case metter5_type:
      state=metter5_current;
      break;
      case metter5_current:
      state=metter5_action;
      break;
      case metter5_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter6_action:
      state=metter6_type;
      break;
      case metter6_type:
      state=metter6_current;
      break;
      case metter6_current:
      state=metter6_action;
      break;
      case metter6_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter7_action:
      state=metter7_type;
      break;
      case metter7_type:
      state=metter7_current;
      break;
      case metter7_current:
      state=metter7_action;
      break;
      case metter7_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter8_action:
      state=metter8_type;
      break;
      case metter8_type:
      state=metter8_current;
      break;
      case metter8_current:
      state=metter8_action;
      break;
      case metter8_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter9_action:
      state=metter9_type;
      break;
      case metter9_type:
      state=metter9_current;
      break;
      case metter9_current:
      state=metter9_action;
      break;
      case metter9_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter0_action:
      state=metter0_type;
      break;
      case metter0_type:
      state=metter0_current;
      break;
      case metter0_current:
      state=metter0_action;
      break;
      case metter0_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter1_action:
      state=metter1_type;
      break;
      case metter1_type:
      state=metter1_current;
      break;
      case metter1_current:
      state=metter1_action;
      break;
      case metter1_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter2_action:
      state=metter2_type;
      break;
      case metter2_type:
      state=metter2_current;
      break;
      case metter2_current:
      state=metter2_action;
      break;
      case metter2_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter3_action:
      state=metter3_type;
      break;
      case metter3_type:
      state=metter3_current;
      break;
      case metter3_current:
      state=metter3_action;
      break;
      case metter3_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter4_action:
      state=metter4_type;
      break;
      case metter4_type:
      state=metter4_current;
      break;
      case metter4_current:
      state=metter4_action;
      break;
      case metter4_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter5_action:
      state=metter5_type;
      break;
      case metter5_type:
      state=metter5_current;
      break;
      case metter5_current:
      state=metter5_action;
      break;
      case metter5_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case metter6_action:
      state=metter6_type;
      break;
      case metter6_type:
      state=metter6_current;
      break;
      case metter6_current:
      state=metter6_action;
      break;
      case metter6_current_in:
         if (input > 0)
            input--;
         else
            input=2000;
      break;
      case add_ip_server:
      state=add_ip_client;
      break;
      case metter_action_in:
         if(metter[1].action==0)
            metter[1].action=1;
         else
            metter[1].action=0; 
      break;
      case metter_type_in:
         switch(metter[1].type)
            {
            case 0: metter[1].type=1;
            break;
            case 1: metter[1].type=2;
            break;
            case 2: metter[1].type=3;
            break;
            case 3: metter[1].type=0;
            break;
            }
      break;
      case metter2_action_in:
         if(metter[2].action==0)
            metter[2].action=1;
         else
            metter[2].action=0; 
      break;
      case metter2_type_in:
         switch(metter[2].type)
            {
            case 0: metter[2].type=1;
            break;
            case 1: metter[2].type=2;
            break;
            case 2: metter[2].type=3;
            break;
            case 3: metter[2].type=0;
            break;
            }
      break;
      case metter3_action_in:
         if(metter[3].action==0)
            metter[3].action=1;
         else
            metter[3].action=0; 
      break;
      case metter3_type_in:
         switch(metter[3].type)
            {
            case 0: metter[3].type=1;
            break;
            case 1: metter[3].type=2;
            break;
            case 2: metter[3].type=3;
            break;
            case 3: metter[3].type=0;
            break;
            }
      break;
      case metter4_action_in:
         if(metter[4].action==0)
            metter[4].action=1;
         else
            metter[4].action=0; 
      break;
      case metter4_type_in:
         switch(metter[4].type)
            {
            case 0: metter[4].type=1;
            break;
            case 1: metter[4].type=2;
            break;
            case 2: metter[4].type=3;
            break;
            case 3: metter[4].type=0;
            break;
            }
      break;
      case metter5_action_in:
         if(metter[5].action==0)
            metter[5].action=1;
         else
            metter[5].action=0; 
      break;
      case metter5_type_in:
         switch(metter[5].type)
            {
            case 0: metter[5].type=1;
            break;
            case 1: metter[5].type=2;
            break;
            case 2: metter[5].type=3;
            break;
            case 3: metter[5].type=0;
            break;
            }
      break;
      case metter6_action_in:
         if(metter[6].action==0)
            metter[6].action=1;
         else
            metter[6].action=0; 
      break;
      case metter6_type_in:
         switch(metter[6].type)
            {
            case 0: metter[6].type=1;
            break;
            case 1: metter[6].type=2;
            break;
            case 2: metter[6].type=3;
            break;
            case 3: metter[6].type=0;
            break;
            }
      break;
     case metter7_action_in:
         if(metter[7].action==0)
            metter[7].action=1;
         else
            metter[7].action=0; 
      break;
      case metter7_type_in:
         switch(metter[7].type)
            {
            case 0: metter[7].type=1;
            break;
            case 1: metter[7].type=2;
            break;
            case 2: metter[7].type=3;
            break;
            case 3: metter[7].type=0;
            break;
            }
      break;
      case metter8_action_in:
         if(metter[8].action==0)
            metter[8].action=1;
         else
            metter[8].action=0; 
      break;
      case metter8_type_in:
         switch(metter[8].type)
            {
            case 0: metter[8].type=1;
            break;
            case 1: metter[8].type=2;
            break;
            case 2: metter[8].type=3;
            break;
            case 3: metter[8].type=0;
            break;
            }
      break;
      case metter9_action_in:
         if(metter[9].action==0)
            metter[9].action=1;
         else
            metter[9].action=0; 
      break;
      case metter9_type_in:
         switch(metter[9].type)
            {
            case 0: metter[9].type=1;
            break;
            case 1: metter[9].type=2;
            break;
            case 2: metter[9].type=3;
            break;
            case 3: metter[9].type=0;
            break;
            }
      break;
      case metter0_action_in:
         if(metter[10].action==0)
            metter[10].action=1;
         else
            metter[10].action=0; 
      break;
      case metter0_type_in:
         switch(metter[10].type)
            {
            case 0: metter[10].type=1;
            break;
            case 1: metter[10].type=2;
            break;
            case 2: metter[10].type=3;
            break;
            case 3: metter[10].type=0;
            break;
            }
      break;
      case metter1_action_in:
         if(metter[11].action==0)
            metter[11].action=1;
         else
            metter[11].action=0; 
      break;
      case metter1_type_in:
         switch(metter[11].type)
            {
            case 0: metter[11].type=1;
            break;
            case 1: metter[11].type=2;
            break;
            case 2: metter[11].type=3;
            break;
            case 3: metter[11].type=0;
            break;
            }
      break;
      case metter2_action_in:
         if(metter[12].action==0)
            metter[12].action=1;
         else
            metter[12].action=0; 
      break;
      case metter2_type_in:
         switch(metter[12].type)
            {
            case 0: metter[12].type=1;
            break;
            case 1: metter[12].type=2;
            break;
            case 2: metter[12].type=3;
            break;
            case 3: metter[12].type=0;
            break;
            }
      break;
      case metter3_action_in:
         if(metter[13].action==0)
            metter[13].action=1;
         else
            metter[13].action=0; 
      break;
      case metter3_type_in:
         switch(metter[13].type)
            {
            case 0: metter[13].type=1;
            break;
            case 1: metter[13].type=2;
            break;
            case 2: metter[13].type=3;
            break;
            case 3: metter[13].type=0;
            break;
            }
      break;
      case metter4_action_in:
         if(metter[14].action==0)
            metter[14].action=1;
         else
            metter[14].action=0; 
      break;
      case metter4_type_in:
         switch(metter[14].type)
            {
            case 0: metter[14].type=1;
            break;
            case 1: metter[14].type=2;
            break;
            case 2: metter[14].type=3;
            break;
            case 3: metter[14].type=0;
            break;
            }
      break;
     case metter5_action_in:
         if(metter[15].action==0)
            metter[15].action=1;
         else
            metter[15].action=0; 
      break;
      case metter5_type_in:
         switch(metter[15].type)
            {
            case 0: metter[15].type=1;
            break;
            case 1: metter[15].type=2;
            break;
            case 2: metter[15].type=3;
            break;
            case 3: metter[15].type=0;
            break;
            }
      break;
      case metter6_action_in:
         if(metter[16].action==0)
            metter[16].action=1;
         else
            metter[16].action=0; 
      break;
      case metter6_type_in:
         switch(metter[16].type)
            {
            case 0: metter[16].type=1;
            break;
            case 1: metter[16].type=2;
            break;
            case 2: metter[16].type=3;
            break;
            case 3: metter[16].type=0;
            break;
            }
      break;
      case add_ip_server1:
      if(ip1>0)
      ip1--;
      else
      ip1=255;
      break;
      case add_ip_server2:
      if(ip2>0)
      ip2--;
      else
      ip2=255;
      break;
      case add_ip_server3:
      if(ip3>0)
      ip3--;
      else
      ip3=255;
      break;
      case add_ip_server4:
      if(ip4>0)
      ip4--;
      else
      ip4=255;
      break;
      case add_ip_client1:
      if(ip1>0)
      ip1--;
      else
      ip1=255;
      break;
      case add_ip_client2:
      if(ip2>0)
      ip2--;
      else
      ip2=255;
      break;
      case add_ip_client3:
      if(ip3>0)
      ip3--;
      else
      ip3=255;
      break;
      case add_ip_client4:
      if(ip4>0)
      ip4--;
      else
      ip4=255;
      break;
      case add_ip_client_port:
      if(port >0)
         port--;
      else
        port=65535;
      break;
      case date_hour:
         if (hour >1)
            hour--;
         else
            hour=23;
      break;
      case date_min:
         if (min >0)
            min--;
         else
            min=59;
      break;
      case date_day:
         if (day >1)
            day--;
         else
            day=31;
      break;
      case date_month:
         if (month >1)
            month--;
         else
            month=12;
      break;
      case date_year:
         if (year >14)
            year--;
         else
            year=50;
      break;
      }
   break;
   case 4:
      switch (state)
      {
      case metter:
      state=monitor;
      break;
      case metter2:
      state=monitor;
      break;
      case metter3:
      state=monitor;
      break;
      case metter4:
      state=monitor;
      break;
      case metter5:
      state=monitor;
      break;
      case metter6:
      state=monitor;
      break;
      case metter7:
      state=monitor;
      break;
      case metter8:
      state=monitor;
      break;
      case metter9:
      state=monitor;
      break;
      case metter0:
      state=monitor;
      break;
      case metter1:
      state=monitor;
      break;
      case metter2:
      state=monitor;
      break;
      case metter3:
      state=monitor;
      break;
      case metter4:
      state=monitor;
      break;
      case metter5:
      state=monitor;
      break;
      case metter6:
      state=monitor;
      break;
      case add_ip:
      state=monitor;
      break;
      case date:
      state=monitor;
      break;
      case metter_action:
      state=metter;
      break;
      case metter_type:
      state=metter;
      break;
      case metter_current:
      state=metter;
      break;
      case metter2_action:
      state=metter2;
      break;
      case metter2_type:
      state=metter2;
      break;
      case metter2_current:
      state=metter2;
      break;
      case metter3_action:
      state=metter3;
      break;
      case metter3_type:
      state=metter3;
      break;
      case metter3_current:
      state=metter3;
      break;
      case metter4_action:
      state=metter4;
      break;
      case metter4_type:
      state=metter4;
      break;
      case metter4_current:
      state=metter4;
      break;
      case metter5_action:
      state=metter5;
      break;
      case metter5_type:
      state=metter5;
      break;
      case metter5_current:
      state=metter5;
      break;
      case metter6_action:
      state=metter6;
      break;
      case metter6_type:
      state=metter6;
      break;
      case metter6_current:
      state=metter6;
      break;
      case metter7_action:
      state=metter7;
      break;
      case metter7_type:
      state=metter7;
      break;
      case metter7_current:
      state=metter7;
      break;
      case metter8_action:
      state=metter8;
      break;
      case metter8_type:
      state=metter8;
      break;
      case metter8_current:
      state=metter8;
      break;
      case metter9_action:
      state=metter9;
      break;
      case metter9_type:
      state=metter9;
      break;
      case metter9_current:
      state=metter9;
      break;
      case metter0_action:
      state=metter0;
      break;
      case metter0_type:
      state=metter0;
      break;
      case metter0_current:
      state=metter0;
      break;
      case metter1_action:
      state=metter1;
      break;
      case metter1_type:
      state=metter1;
      break;
      case metter1_current:
      state=metter1;
      break;
      case metter2_action:
      state=metter2;
      break;
      case metter2_type:
      state=metter2;
      break;
      case metter2_current:
      state=metter2;
      break;
      case metter3_action:
      state=metter3;
      break;
      case metter3_type:
      state=metter3;
      break;
      case metter3_current:
      state=metter3;
      break;
      case metter4_action:
      state=metter4;
      break;
      case metter4_type:
      state=metter4;
      break;
      case metter4_current:
      state=metter4;
      break;
      case metter5_action:
      state=metter5;
      break;
      case metter5_type:
      state=metter5;
      break;
      case metter5_current:
      state=metter5;
      break;
      case metter6_action:
      state=metter6;
      break;
      case metter6_type:
      state=metter6;
      break;
      case metter6_current:
      state=metter6;
      break;
      case add_ip_server:
      state=add_ip;
      break;
      case add_ip_client:
      state=add_ip;
      break;
      case add_ip_server1:
      state=add_ip_server;
      break;
      case add_ip_server2:
      state=add_ip_server;
      break;
      case add_ip_server3:
      state=add_ip_server;
      break;
      case add_ip_server4:
      state=add_ip_server;
      break;
      case add_ip_client1:
      state=add_ip_client;
      break;
      case add_ip_client2:
      state=add_ip_client;
      break;
      case add_ip_client3:
      state=add_ip_client;
      break;
      case add_ip_client4:
      state=add_ip_client;
      break;
      case add_ip_client_port:
      state=add_ip_client;
      break;
      case metter_action_in:
      state=metter_action;
      break;
      case metter_type_in:
      state=metter_type;
      break;
      case metter_current_in:
      state=metter_current;
      break;
      case metter2_action_in:
      state=metter2_action;
      break;
      case metter2_type_in:
      state=metter2_type;
      break;
      case metter2_current_in:
      state=metter2_current;
      break;
      case metter3_action_in:
      state=metter3_action;
      break;
      case metter3_type_in:
      state=metter3_type;
      break;
      case metter3_current_in:
      state=metter3_current;
      break;
      case metter4_action_in:
      state=metter4_action;
      break;
      case metter4_type_in:
      state=metter4_type;
      break;
      case metter4_current_in:
      state=metter4_current;
      break;
      case metter5_action_in:
      state=metter5_action;
      break;
      case metter5_type_in:
      state=metter5_type;
      break;
      case metter5_current_in:
      state=metter5_current;
      break;
      case metter6_action_in:
      state=metter6_action;
      break;
      case metter6_type_in:
      state=metter6_type;
      break;
      case metter6_current_in:
      state=metter6_current;
      break;
      case metter7_action_in:
      state=metter7_action;
      break;
      case metter7_type_in:
      state=metter7_type;
      break;
      case metter7_current_in:
      state=metter7_current;
      break;
      case metter8_action_in:
      state=metter8_action;
      break;
      case metter8_type_in:
      state=metter8_type;
      break;
      case metter8_current_in:
      state=metter8_current;
      break;
       case metter9_action_in:
      state=metter9_action;
      break;
      case metter9_type_in:
      state=metter9_type;
      break;
      case metter9_current_in:
      state=metter9_current;
      break;
      case metter0_action_in:
      state=metter0_action;
      break;
      case metter0_type_in:
      state=metter0_type;
      break;
      case metter0_current_in:
      state=metter0_current;
      break;
      case metter1_action_in:
      state=metter1_action;
      break;
      case metter1_type_in:
      state=metter1_type;
      break;
      case metter1_current_in:
      state=metter1_current;
      break;
      case metter2_action_in:
      state=metter2_action;
      break;
      case metter2_type_in:
      state=metter2_type;
      break;
      case metter2_current_in:
      state=metter2_current;
      break;
      case metter3_action_in:
      state=metter3_action;
      break;
      case metter3_type_in:
      state=metter3_type;
      break;
      case metter3_current_in:
      state=metter3_current;
      break;
      case metter4_action_in:
      state=metter4_action;
      break;
      case metter4_type_in:
      state=metter4_type;
      break;
      case metter4_current_in:
      state=metter4_current;
      break;
      case metter5_action_in:
      state=metter5_action;
      break;
      case metter5_type_in:
      state=metter5_type;
      break;
      case metter5_current_in:
      state=metter5_current;
      break;
      case metter6_action_in:
      state=metter6_action;
      break;
      case metter6_type_in:
      state=metter6_type;
      break;
      case metter6_current_in:
      state=metter6_current;
      break;
      case date_hour:
         state=date;
      break;
      case date_min:
          state=date;
      break;
      case date_day:
          state=date;
      break;
      case date_month:
          state=date;
      break;
      case date_year:
         state=date;
      break;
      }
  
   break;
}
   
}
void show_lcd()
{
 switch(state)
 {
 case monitor:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("EVNEPU RTU") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"%02d:%02d-%02d/%02d/20%d",hour,min,day,month,year);
   lcd_en=1;
   }
 break;
 case metter:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter") ;
   lcd_en=1;
   }
 break;
 case metter2:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter2") ;
   lcd_en=1;
   }
 break;
 case metter3:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter3") ;
   lcd_en=1;
   }
 break;
 case metter4:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter4") ;
   lcd_en=1;
   }
 break;
 case metter5:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter5") ;
   lcd_en=1;
   }
 break;
 case metter6:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter6") ;
   lcd_en=1;
   }
 break;
 case metter7:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter7") ;
   lcd_en=1;
   }
 break;
 case metter8:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter8") ;
   lcd_en=1;
   }
 break;
 case metter9:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>Metter9") ;
   lcd_en=1;
   }
 break;
 case metter0:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter0") ;
   lcd_en=1;
   }
 break;
 case metter1:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter1") ;
   lcd_en=1;
   }
 break;
 case metter2:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter2") ;
   lcd_en=1;
   }
 break;
 case metter3:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter3") ;
   lcd_en=1;
   }
 break;
 case metter4:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter4") ;
   lcd_en=1;
   }
 break;
 case metter5:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter5") ;
   lcd_en=1;
   }
 break;
 case metter6:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>metter6") ;
   lcd_en=1;
   }
 break;
 case add_ip:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>SETTING IP") ;
   lcd_en=1;
   }
 break;
 case date:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>SETTING DATE") ;
   lcd_en=1;
   }
 break;
 case metter_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter TYPE") ;
   lcd_en=1;
   }
 break;
 case metter_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
case metter2_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter2 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter2_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter2 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter2_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter3_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter3 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter3_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter3 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter3_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
case metter4_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter4 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter4_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter4 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter4_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter5_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter5 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter5_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter5 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter5_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter6_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter6 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter6_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter6 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter6_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter7_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter7 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter7_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter7 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter7_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
case metter8_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter8 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter8_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter8 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter8_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter9_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter9 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter9_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">Metter9 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter9_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING Metter9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter0_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter0") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter0 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter0_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter0") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter0 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter0_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter0") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter1_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter1 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter1_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter1 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter1_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
case metter2_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter2 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter2_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter2 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter2_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter3_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter3 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter3_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter3 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter3_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter4_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter4 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter4_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter4 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter4_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter5_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter5 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter5_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter5 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter5_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
case metter6_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter6 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter6_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">metter6 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter6_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING metter6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case add_ip_server:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(">ADDR IP SERVER") ;
   lcd_gotoxy(1,2);
   lcd_putc(" ADDR IP") ;
   lcd_en=1;
   }
  break; 
  case add_ip_client:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" ADDR IP SERVER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">ADDR IP") ;
   lcd_en=1;
   }  
 break;
 case metter_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" metter ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[1].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" metter TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[1].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("metter CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter2_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter2 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[2].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter2_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter2 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[2].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break; 
 case metter2_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter2 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter3_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter3 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[3].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter3_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter3 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[3].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter3_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter3 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter4_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter4 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[4].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter4_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter4 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[4].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter4_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter4 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter5_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter5 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[5].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter5_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter5 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[5].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter5_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter5 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter6_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter6 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[6].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter6_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter6 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[6].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break; 
 case metter6_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter6 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter7_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter7 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[7].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter7_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter7 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[7].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter7_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter7 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter8_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter8 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[8].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter8_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter8 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[8].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter8_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter8 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
  case metter9_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter9 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[9].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter9_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" Metter9 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[9].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter9_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("Metter9 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter0_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" metter0 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[10].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter0_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" metter0 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[10].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break; 
 case metter10_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER10 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter11_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER11 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[11].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter11_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER11 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[11].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter11_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER11 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter12_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER12 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[12].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter12_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER12 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[12].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter12_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER12 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter13_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER13 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[13].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter13_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER13 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[13].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter13_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER13 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter14_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER14 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[14].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter14_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER14 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[14].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break; 
 case metter14_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER14 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter15_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER15 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[15].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter15_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER15 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[15].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter15_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER15 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case metter16_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER16 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[16].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter16_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METTER16 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[16].type)
   {
   case 0:lcd_putc(">SIMEAS P");
   break;
   case 1:lcd_putc(">EMA96N"); 
   break;
   case 2:lcd_putc(">RISH3440");
   break;
   case 3:lcd_putc(">PECA3000");
   break;
   }
   lcd_en=1;
   }
 break;
 case metter16_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METTER16 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input);
   lcd_en=1;
   }
 break;
 case add_ip_server1:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("ADDR SERVER") ;
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   }
 break;
 case add_ip_server2:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("ADDR SERVER") ;
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   }
 break;
 case add_ip_server3:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("ADDR SERVER") ;
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   }
 break;
 case add_ip_server4:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("ADDR SERVER") ;
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   }
 break;
 case add_ip_client1:
 if(lcd_en==0)
   {
   lcd_clr();
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"PORT:%lu",port);
   }
 break;
 case add_ip_client2:
 if(lcd_en==0)
   {
   lcd_clr();
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"PORT:%lu",port);
   }
 break;
 case add_ip_client3:
 if(lcd_en==0)
   {
   lcd_clr();
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"PORT:%lu",port);
   }
 break;
 case add_ip_client4:
 if(lcd_en==0)
   {
   lcd_clr();
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"PORT:%lu",port);
   }
 break;
 case add_ip_client_port:
 if(lcd_en==0)
   {
   lcd_clr();
   printf(lcd_putc,"%u.%u.%u.%u",ip1,ip2,ip3,ip4);
   lcd_gotoxy(1,2);
   lcd_en=1;
   printf(lcd_putc,"PORT:%lu",port);
   }
 break;
  case date_hour:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING TIME") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"%02d:%02d-%02d/%02d/20%d",hour,min,day,month,year);
   lcd_en=1;
   }
   break;
   case date_min:
    if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING TIME") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"%02d:%02d-%02d/%02d/20%d",hour,min,day,month,year);
   lcd_en=1;
   }
   break;
   case date_day:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING TIME") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"%02d:%02d-%02d/%02d/20%d",hour,min,day,month,year);
   lcd_en=1;
   }
   break;
   case date_month:
  if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING TIME") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"%02d:%02d-%02d/%02d/20%d",hour,min,day,month,year);
   lcd_en=1;
   }
   break;
   case date_year:
    if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING TIME") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"%02d:%02d-%02d/%02d/20%d",hour,min,day,month,year);
   lcd_en=1;
   }
   break;
 }
}
