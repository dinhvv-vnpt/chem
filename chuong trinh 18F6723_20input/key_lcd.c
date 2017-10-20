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
      state=metter1;
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
      input1=metter[1].current;
      state=metter1_current_in;
      break;
      case metter1_vol:
      input1=metter[1].vol;
      state=metter1_vol_in;
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
      input1=metter[2].current;
      state=metter2_current_in;
      break;
      case metter2_vol:
      input1=metter[2].vol;
      state=metter2_vol_in;
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
      input1=metter[3].current;
      state=metter3_current_in;
      break;
      case metter3_vol:
      input1=metter[3].vol;
      state=metter3_vol_in;
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
      input1=metter[4].current;
      state=metter4_current_in;
      break;
      case metter4_vol:
      input1=metter[4].vol;
      state=metter4_vol_in;
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
      input1=metter[5].current;
      state=metter5_current_in;
      break;
      case metter5_vol:
      input1=metter[5].vol;
      state=metter5_vol_in;
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
      input1=metter[6].current;
      state=metter6_current_in;
      break;
      case metter6_vol:
      input1=metter[6].vol;
      state=metter6_vol_in;
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
      input1=metter[7].current;
      state=metter7_current_in;
      break;
      case metter7_vol:
      input1=metter[7].vol;
      state=metter7_vol_in;
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
      input1=metter[8].current;
      state=metter8_current_in;
      break;
      case metter8_vol:
      input1=metter[8].vol;
      state=metter8_vol_in;
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
      input1=metter[9].current;
      state=metter9_current_in;
      break;
      case metter9_vol:
      input1=metter[9].vol;
      state=metter9_vol_in;
      break;
      case metter10:
      state=metter10_action;
      break;
      case metter10_action:
      state= metter10_action_in;
      break;
      case metter10_type:
      state=metter10_type_in;
      break;
      case metter10_current:
      input1=metter[10].current;
      state=metter10_current_in;
      break;
      case metter10_vol:
      input1=metter[10].vol;
      state=metter10_vol_in;
      break;
      case metter11:
      state=metter11_action;
      break;
      case metter11_action:
      state= metter11_action_in;
      break;
      case metter11_type:
      state=metter11_type_in;
      break;
      case metter11_current:
      input1=metter[11].current;
      state=metter11_current_in;
      break;
      case metter11_vol:
      input1=metter[11].vol;
      state=metter11_vol_in;
      break;
      case metter12:
      state=metter12_action;
      break;
      case metter12_action:
      state= metter12_action_in;
      break;
      case metter12_type:
      state=metter12_type_in;
      break;
      case metter12_current:
      input1=metter[12].current;
      state=metter12_current_in;
      break;
      case metter12_vol:
      input1=metter[12].vol;
      state=metter12_vol_in;
      break;
      case metter13:
      state=metter13_action;
      break;
      case metter13_action:
      state= metter13_action_in;
      break;
      case metter13_type:
      state=metter13_type_in;
      break;
      case metter13_current:
      input1=metter[13].current;
      state=metter13_current_in;
      break;
      case metter13_vol:
      input1=metter[13].vol;
      state=metter13_vol_in;
      break;
      case metter14:
      state=metter14_action;
      break;
      case metter14_action:
      state= metter14_action_in;
      break;
      case metter14_type:
      state=metter14_type_in;
      break;
      case metter14_current:
      input1=metter[14].current;
      state=metter14_current_in;
      break;
      case metter14_vol:
      input1=metter[14].vol;
      state=metter14_vol_in;
      break;
      case metter15:
      state=metter15_action;
      break;
      case metter15_action:
      state= metter15_action_in;
      break;
      case metter15_type:
      state=metter15_type_in;
      break;
      case metter15_current:
      input1=metter[15].current;
      state=metter15_current_in;
      break;
      case metter15_vol:
      input1=metter[15].vol;
      state=metter15_vol_in;
      break;
      case metter16:
      state=metter16_action;
      break;
      case metter16_action:
      state= metter16_action_in;
      break;
      case metter16_type:
      state=metter16_type_in;
      break;
      case metter16_current:
      input1=metter[16].current;
      state=metter16_current_in;
      break;
      case metter16_vol:
      input1=metter[16].vol;
      state=metter16_vol_in;
      break;
      case metter17:
      state=metter17_action;
      break;
      case metter17_action:
      state= metter17_action_in;
      break;
      case metter17_type:
      state=metter17_type_in;
      break;
      case metter17_current:
      input1=metter[17].current;
      state=metter17_current_in;
      break;
      case metter17_vol:
      input1=metter[17].vol;
      state=metter17_vol_in;
      break;
      case metter18:
      state=metter18_action;
      break;
      case metter18_action:
      state= metter18_action_in;
      break;
      case metter18_type:
      state=metter18_type_in;
      break;
      case metter18_current:
      input1=metter[18].current;
      state=metter18_current_in;
      break;
      case metter18_vol:
      input1=metter[18].vol;
      state=metter18_vol_in;
      break;
      case metter19:
      state=metter19_action;
      break;
      case metter19_action:
      state= metter19_action_in;
      break;
      case metter19_type:
      state=metter19_type_in;
      break;
      case metter19_current:
      input1=metter[19].current;
      state=metter19_current_in;
      break;
      case metter19_vol:
      input1=metter[19].vol;
      state=metter19_vol_in;
      break;
      //
      case metter20:
      state=metter20_action;
      break;
      case metter20_action:
      state= metter20_action_in;
      break;
      case metter20_type:
      state=metter20_type_in;
      break;
      case metter20_current:
      input1=metter[20].current;
      state=metter20_current_in;
      break;
      case metter20_vol:
      input1=metter[20].vol;
      state=metter20_vol_in;
      break;
      //
      case metter21:
      state=metter21_action;
      break;
      case metter21_action:
      state= metter21_action_in;
      break;
      case metter21_type:
      state=metter21_type_in;
      break;
      case metter21_current:
      input1=metter[21].current;
      state=metter21_current_in;
      break;
      case metter21_vol:
      input1=metter[21].vol;
      state=metter21_vol_in;
      break;
      //
      case metter22:
      state=metter22_action;
      break;
      case metter22_action:
      state= metter22_action_in;
      break;
      case metter22_type:
      state=metter22_type_in;
      break;
      case metter22_current:
      input1=metter[22].current;
      state=metter22_current_in;
      break;
      case metter22_vol:
      input1=metter[22].vol;
      state=metter22_vol_in;
      break;
      //
      case metter23:
      state=metter23_action;
      break;
      case metter23_action:
      state= metter23_action_in;
      break;
      case metter23_type:
      state=metter23_type_in;
      break;
      case metter23_current:
      input1=metter[23].current;
      state=metter23_current_in;
      break;
      case metter23_vol:
      input1=metter[23].vol;
      state=metter23_vol_in;
      break;
      //
      case metter24:
      state=metter24_action;
      break;
      case metter24_action:
      state= metter24_action_in;
      break;
      case metter24_type:
      state=metter24_type_in;
      break;
      case metter24_current:
      input1=metter[24].current;
      state=metter24_current_in;
      break;
      case metter24_vol:
      input1=metter[24].vol;
      state=metter24_vol_in;
      break;
       //
      case metter25:
      state=metter25_action;
      break;
      case metter25_action:
      state= metter25_action_in;
      break;
      case metter25_type:
      state=metter25_type_in;
      break;
      case metter25_current:
      input1=metter[25].current;
      state=metter25_current_in;
      break;
      case metter25_vol:
      input1=metter[25].vol;
      state=metter25_vol_in;
      break;
       //
      case metter26:
      state=metter26_action;
      break;
      case metter26_action:
      state= metter26_action_in;
      break;
      case metter26_type:
      state=metter26_type_in;
      break;
      case metter26_current:
      input1=metter[26].current;
      state=metter26_current_in;
      break;
      case metter26_vol:
      input1=metter[26].vol;
      state=metter26_vol_in;
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
      case metter1_action_in:
         write_eeprom(0,metter[1].action);
         state=metter1_action;
      break;
      case metter1_type_in:
         write_eeprom(1,metter[1].type);
         state=metter1_type;
      break;
      case metter1_current_in:
         metter[1].current=input1;
         write_eeprom(32,input1 & 0x00ff);
         write_eeprom(33,(input1 >>8) & 0x00ff);
         state=metter1_current;
      break;
      case metter1_vol_in:
         metter[1].vol=input1;
         write_eeprom(90,input1 & 0x00ff);
         write_eeprom(91,(input1 >>8) & 0x00ff);
         state=metter1_vol;
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
         metter[2].current=input1;
         write_eeprom(34,input1 & 0x00ff);
         write_eeprom(35,(input1 >>8) & 0x00ff);
         state=metter2_current;
      break;
      case metter2_vol_in:
         metter[2].vol=input1;
         write_eeprom(92,input1 & 0x00ff);
         write_eeprom(93,(input1 >>8) & 0x00ff);
         state=metter2_vol;
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
         metter[3].current=input1;
         write_eeprom(36,input1 & 0x00ff);
         write_eeprom(37,(input1 >>8) & 0x00ff);
         state=metter3_current;
      break;
      case metter3_vol_in:
         metter[3].vol=input1;
         write_eeprom(94,input1 & 0x00ff);
         write_eeprom(95,(input1 >>8) & 0x00ff);
         state=metter3_vol;
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
         metter[4].current=input1 ;
         write_eeprom(38,input1 & 0x00ff);
         write_eeprom(39,(input1 >>8) & 0x00ff);
         state=metter4_current;
      break;
      case metter4_vol_in:
         metter[4].vol=input1;
         write_eeprom(96,input1 & 0x00ff);
         write_eeprom(97,(input1 >>8) & 0x00ff);
         state=metter4_vol;
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
         metter[5].current=input1;
         write_eeprom(40,input1 & 0x00ff);
         write_eeprom(41,(input1 >>8) & 0x00ff);
         state=metter5_current;
      break;
      case metter5_vol_in:
         metter[5].vol=input1;
         write_eeprom(98,input1 & 0x00ff);
         write_eeprom(99,(input1 >>8) & 0x00ff);
         state=metter5_vol;
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
         metter[6].current=input1;
         write_eeprom(42,input1 & 0x00ff);
         write_eeprom(43,(input1 >>8) & 0x00ff);
         state=metter6_current;
      break;
      case metter6_vol_in:
         metter[6].vol=input1;
         write_eeprom(100,input1 & 0x00ff);
         write_eeprom(101,(input1 >>8) & 0x00ff);
         state=metter6_vol;
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
         metter[7].current=input1;
         write_eeprom(44,input1 & 0x00ff);
         write_eeprom(45,(input1 >>8) & 0x00ff);
         state=metter7_current;
      break;
      case metter7_vol_in:
         metter[7].vol=input1;
         write_eeprom(102,input1 & 0x00ff);
         write_eeprom(103,(input1 >>8) & 0x00ff);
         state=metter7_vol;
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
         metter[8].current=input1;
         write_eeprom(46,input1 & 0x00ff);
         write_eeprom(47,(input1 >>8) & 0x00ff);
         state=metter8_current;
      break;
      case metter8_vol_in:
         metter[8].vol=input1;
         write_eeprom(104,input1 & 0x00ff);
         write_eeprom(105,(input1 >>8) & 0x00ff);
         state=metter8_vol;
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
         metter[9].current=input1;
         write_eeprom(48,input1 & 0x00ff);
         write_eeprom(49,(input1 >>8) & 0x00ff);
         state=metter9_current;
      break;
       case metter9_vol_in:
         metter[9].vol=input1;
         write_eeprom(106,input1 & 0x00ff);
         write_eeprom(107,(input1 >>8) & 0x00ff);
         state=metter9_vol;
      break;
      case metter10_action_in:
         write_eeprom(18,metter[10].action);
         state=metter10_action;
      break;
      case metter10_type_in:
         write_eeprom(19,metter[10].type);
         state=metter10_type;
      break;
      case metter10_current_in:
         metter[10].current=input1;
         write_eeprom(50,input1 & 0x00ff);
         write_eeprom(51,(input1 >>8) & 0x00ff);
         state=metter10_current;
      break;
       case metter10_vol_in:
         metter[10].vol=input1;
         write_eeprom(108,input1 & 0x00ff);
         write_eeprom(109,(input1 >>8) & 0x00ff);
         state=metter10_vol;
      break;
      case metter11_action_in:
         write_eeprom(20,metter[11].action);
         state=metter11_action;
      break;
      case metter11_type_in:
         write_eeprom(21,metter[11].type);
         state=metter11_type;
      break;
      case metter11_current_in:
         metter[11].current=input1;
         write_eeprom(52,input1 & 0x00ff);
         write_eeprom(53,(input1 >>8) & 0x00ff);
         state=metter11_current;
      break;
      case metter11_vol_in:
         metter[11].vol=input1;
         write_eeprom(110,input1 & 0x00ff);
         write_eeprom(111,(input1 >>8) & 0x00ff);
         state=metter11_vol;
      break;
      case metter12_action_in:
         write_eeprom(22,metter[12].action);
         state=metter12_action;
      break;
      case metter12_type_in:
         write_eeprom(23,metter[12].type);
         state=metter12_type;
      break;
      case metter12_current_in:
         metter[12].current=input1;
         write_eeprom(54,input1 & 0x00ff);
         write_eeprom(55,(input1 >>8) & 0x00ff);
         state=metter12_current;
      break;
      case metter12_vol_in:
         metter[12].vol=input1;
         write_eeprom(112,input1 & 0x00ff);
         write_eeprom(113,(input1 >>8) & 0x00ff);
         state=metter12_vol;
      break;
      case metter13_action_in:
         write_eeprom(24,metter[13].action);
         state=metter13_action;
      break;
      case metter13_type_in:
         write_eeprom(25,metter[13].type);
         state=metter13_type;
      break;
      case metter13_current_in:
         metter[13].current=input1;
         write_eeprom(56,input1 & 0x00ff);
         write_eeprom(57,(input1 >>8) & 0x00ff);
         state=metter13_current;
      break;
      case metter13_vol_in:
         metter[13].vol=input1;
         write_eeprom(114,input1 & 0x00ff);
         write_eeprom(115,(input1 >>8) & 0x00ff);
         state=metter13_vol;
      break;
      case metter14_action_in:
         write_eeprom(26,metter[14].action);
         state=metter14_action;
      break;
      case metter14_type_in:
         write_eeprom(27,metter[14].type);
         state=metter14_type;
      break;
      case metter14_current_in:
         metter[14].current=input1;
         write_eeprom(58,input1 & 0x00ff);
         write_eeprom(59,(input1 >>8) & 0x00ff);
         state=metter14_current;
      break;
      case metter14_vol_in:
         metter[14].vol=input1;
         write_eeprom(116,input1 & 0x00ff);
         write_eeprom(117,(input1 >>8) & 0x00ff);
         state=metter14_vol;
      break;
      case metter15_action_in:
         write_eeprom(28,metter[15].action);
         state=metter15_action;
      break;
      case metter15_type_in:
         write_eeprom(29,metter[15].type);
         state=metter15_type;
      break;
      case metter15_current_in:
         metter[15].current=input1;
         write_eeprom(60,input1 & 0x00ff);
         write_eeprom(61,(input1 >>8) & 0x00ff);
         state=metter15_current;
      break;
      case metter15_vol_in:
         metter[15].vol=input1;
         write_eeprom(118,input1 & 0x00ff);
         write_eeprom(119,(input1 >>8) & 0x00ff);
         state=metter15_vol;
      break;
      case metter16_action_in:
         write_eeprom(30,metter[16].action);
         state=metter16_action;
      break;
      case metter16_type_in:
         write_eeprom(31,metter[16].type);
         state=metter16_type;
      break;
      case metter16_current_in:
         metter[16].current=input1;
         write_eeprom(62,input1 & 0x00ff);
         write_eeprom(63,(input1 >>8) & 0x00ff);
         state=metter16_current;
      break;
       case metter16_vol_in:
         metter[16].vol=input1;
         write_eeprom(120,input1 & 0x00ff);
         write_eeprom(121,(input1 >>8) & 0x00ff);
         state=metter16_vol;
      break;
       case metter17_action_in:
         write_eeprom(74,metter[17].action);
         state=metter17_action;
      break;
      case metter17_type_in:
         write_eeprom(75,metter[17].type);
         state=metter17_type;
      break;
      case metter17_current_in:
         metter[17].current=input1;
         write_eeprom(76,input1 & 0x00ff);
         write_eeprom(77,(input1 >>8) & 0x00ff);
         state=metter17_current;
      break;
      case metter17_vol_in:
         metter[17].vol=input1;
         write_eeprom(122,input1 & 0x00ff);
         write_eeprom(123,(input1 >>8) & 0x00ff);
         state=metter17_vol;
      break;
       case metter18_action_in:
         write_eeprom(78,metter[18].action);
         state=metter18_action;
      break;
      case metter18_type_in:
         write_eeprom(79,metter[18].type);
         state=metter18_type;
      break;
      case metter18_current_in:
         metter[18].current=input1;
         write_eeprom(80,input1 & 0x00ff);
         write_eeprom(81,(input1 >>8) & 0x00ff);
         state=metter18_current;
      break;
      case metter18_vol_in:
         metter[18].vol=input1;
         write_eeprom(124,input1 & 0x00ff);
         write_eeprom(125,(input1 >>8) & 0x00ff);
         state=metter18_vol;
      break;
       case metter19_action_in:
         write_eeprom(82,metter[19].action);
         state=metter19_action;
      break;
      case metter19_type_in:
         write_eeprom(83,metter[19].type);
         state=metter19_type;
      break;
      case metter19_current_in:
         metter[19].current=input1;
         write_eeprom(84,input1 & 0x00ff);
         write_eeprom(85,(input1 >>8) & 0x00ff);
         state=metter19_current;
      break;
      case metter19_vol_in:
         metter[19].vol=input1;
         write_eeprom(126,input1 & 0x00ff);
         write_eeprom(127,(input1 >>8) & 0x00ff);
         state=metter19_vol;
      break;
      //
      case metter20_action_in:
         write_eeprom(86,metter[20].action);
         state=metter20_action;
      break;
      case metter20_type_in:
         write_eeprom(87,metter[20].type);
         state=metter20_type;
      break;
      case metter20_current_in:
         metter[20].current=input1;
         write_eeprom(88,input1 & 0x00ff);
         write_eeprom(89,(input1 >>8) & 0x00ff);
         state=metter20_current;
      break;
      case metter20_vol_in:
         metter[20].vol=input1;
         write_eeprom(128,input1 & 0x00ff);
         write_eeprom(129,(input1 >>8) & 0x00ff);
         state=metter20_vol;
      break;
       //
      case metter21_action_in:
         write_eeprom(130,metter[21].action);
         state=metter21_action;
      break;
      case metter21_type_in:
         write_eeprom(131,metter[21].type);
         state=metter21_type;
      break;
      case metter21_current_in:
         metter[21].current=input1;
         write_eeprom(132,input1 & 0x00ff);
         write_eeprom(133,(input1 >>8) & 0x00ff);
         state=metter21_current;
      break;
      case metter21_vol_in:
         metter[21].vol=input1;
         write_eeprom(134,input1 & 0x00ff);
         write_eeprom(135,(input1 >>8) & 0x00ff);
         state=metter20_vol;
      break;
       //
      case metter22_action_in:
         write_eeprom(136,metter[22].action);
         state=metter22_action;
      break;
      case metter22_type_in:
         write_eeprom(137,metter[22].type);
         state=metter22_type;
      break;
      case metter22_current_in:
         metter[22].current=input1;
         write_eeprom(138,input1 & 0x00ff);
         write_eeprom(139,(input1 >>8) & 0x00ff);
         state=metter22_current;
      break;
      case metter22_vol_in:
         metter[22].vol=input1;
         write_eeprom(140,input1 & 0x00ff);
         write_eeprom(141,(input1 >>8) & 0x00ff);
         state=metter22_vol;
      break;
        //
      case metter23_action_in:
         write_eeprom(142,metter[23].action);
         state=metter23_action;
      break;
      case metter23_type_in:
         write_eeprom(143,metter[23].type);
         state=metter23_type;
      break;
      case metter23_current_in:
         metter[23].current=input1;
         write_eeprom(144,input1 & 0x00ff);
         write_eeprom(145,(input1 >>8) & 0x00ff);
         state=metter23_current;
      break;
      case metter23_vol_in:
         metter[23].vol=input1;
         write_eeprom(146,input1 & 0x00ff);
         write_eeprom(147,(input1 >>8) & 0x00ff);
         state=metter23_vol;
      break;
       //
      case metter24_action_in:
         write_eeprom(148,metter[24].action);
         state=metter24_action;
      break;
      case metter24_type_in:
         write_eeprom(149,metter[24].type);
         state=metter24_type;
      break;
      case metter24_current_in:
         metter[24].current=input1;
         write_eeprom(150,input1 & 0x00ff);
         write_eeprom(151,(input1 >>8) & 0x00ff);
         state=metter24_current;
      break;
      case metter24_vol_in:
         metter[24].vol=input1;
         write_eeprom(152,input1 & 0x00ff);
         write_eeprom(153,(input1 >>8) & 0x00ff);
         state=metter24_vol;
      break;
         //
      case metter25_action_in:
         write_eeprom(154,metter[25].action);
         state=metter25_action;
      break;
      case metter25_type_in:
         write_eeprom(155,metter[25].type);
         state=metter25_type;
      break;
      case metter25_current_in:
         metter[25].current=input1;
         write_eeprom(156,input1 & 0x00ff);
         write_eeprom(157,(input1 >>8) & 0x00ff);
         state=metter25_current;
      break;
      case metter25_vol_in:
         metter[25].vol=input1;
         write_eeprom(158,input1 & 0x00ff);
         write_eeprom(159,(input1 >>8) & 0x00ff);
         state=metter25_vol;
      break;
           //
      case metter26_action_in:
         write_eeprom(160,metter[26].action);
         state=metter26_action;
      break;
      case metter26_type_in:
         write_eeprom(161,metter[26].type);
         state=metter26_type;
      break;
      case metter26_current_in:
         metter[26].current=input1;
         write_eeprom(162,input1 & 0x00ff);
         write_eeprom(163,(input1 >>8) & 0x00ff);
         state=metter26_current;
      break;
      case metter26_vol_in:
         metter[26].vol=input1;
         write_eeprom(164,input1 & 0x00ff);
         write_eeprom(165,(input1 >>8) & 0x00ff);
         state=metter26_vol;
      break;
      }
   break;
   case 2:
      switch (state)
      {
      case monitor:
      for(i=0;i<26;i++)
      {
      if(alarm[i]==1)
         {
         state=state_alarm;
         ready=1;
         }
      }
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
      state=metter7;
      break;
      case metter7:
      state=metter8;
      break;
      case metter8:
      state=metter9;
      break;
      case metter9:
      state=metter10;
      break;
      case metter10:
      state=metter11;
      break;
      case metter11:
      state=metter12;
      break;
      case metter12:
      state=metter13;
      break;
      case metter13:
      state=metter14;
      break;
      case metter14:
      state=metter15;
      break;
      case metter15:
      state=metter16;
      break;
      case metter16:
      state=metter17;
      break;
      case metter17:
      state=metter18;
      break;
      case metter18:
      state=metter19;
      break;
      case metter19:
      state=metter20;
      break;
      case metter20:
      state=metter21;
      break;
      case metter21:
      state=metter22;
      break;
      case metter22:
      state=metter23;
      break;
      case metter23:
      state=metter24;
      break;
      case metter24:
      state=metter25;
      break;
      case metter25:
      state=metter26;
      break;
      case metter26:
      state=add_ip;
      break;
      case add_ip:
      state=date;
      break;
      case date:
      state=metter1;
      break;
      case metter1_type:
      state=metter1_action;
      break;
      case metter1_current:
      state=metter1_type;
      break;
      case metter1_vol:
      state=metter1_current;
      break;
      case metter1_action:
      state=metter1_vol;
      break;
      case metter1_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter1_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter2_type:
      state=metter2_action;
      break;
      case metter2_current:
      state=metter2_type;
      break;
      case metter2_vol:
      state=metter2_current;
      break;
      case metter2_action:
      state=metter2_vol;
      break;
      case metter2_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter2_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter3_type:
      state=metter3_action;
      break;
      case metter3_current:
      state=metter3_type;
      break;
      case metter3_vol:
      state=metter3_current;
      break;
      case metter3_action:
      state=metter3_vol;
      break;
      case metter3_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter3_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter4_type:
      state=metter4_action;
      break;
      case metter4_current:
      state=metter4_type;
      break;
      case metter4_vol:
      state=metter4_current;
      break;
      case metter4_action:
      state=metter4_vol;
      break;
      case metter4_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter4_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter5_type:
      state=metter5_action;
      break;
      case metter5_current:
      state=metter5_type;
      break;
      case metter5_vol:
      state=metter5_current;
      break;
      case metter5_action:
      state=metter5_vol;
      break;
      case metter5_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter5_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter6_type:
      state=metter6_action;
      break;
      case metter6_current:
      state=metter6_type;
      break;
      case metter6_vol:
      state=metter6_current;
      break;
      case metter6_action:
      state=metter6_vol;
      break;
      case metter6_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter6_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter7_type:
      state=metter7_action;
      break;
      case metter7_current:
      state=metter7_type;
      break;
      case metter7_vol:
      state=metter7_current;
      break;
      case metter7_action:
      state=metter7_vol;
      break;
      case metter7_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter7_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter8_type:
      state=metter8_action;
      break;
      case metter8_current:
      state=metter8_type;
      break;
      case metter8_vol:
      state=metter8_current;
      break;
      case metter8_action:
      state=metter8_vol;
      break;
      case metter8_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter8_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter9_type:
      state=metter9_action;
      break;
      case metter9_current:
      state=metter9_type;
      break;
      case metter9_vol:
      state=metter9_current;
      break;
      case metter9_action:
      state=metter9_vol;
      break;
      case metter9_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter9_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter10_type:
      state=metter10_action;
      break;
      case metter10_current:
      state=metter10_type;
      break;
      case metter10_vol:
      state=metter10_current;
      break;
      case metter10_action:
      state=metter10_vol;
      break;
      case metter10_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter10_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter11_type:
      state=metter11_action;
      break;
      case metter11_current:
      state=metter11_type;
      break;
      case metter11_vol:
      state=metter11_current;
      break;
      case metter11_action:
      state=metter11_vol;
      break;
      case metter11_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter11_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter12_type:
      state=metter12_action;
      break;
      case metter12_current:
      state=metter12_type;
      break;
      case metter12_vol:
      state=metter12_current;
      break;
      case metter12_action:
      state=metter12_vol;
      break;
      case metter12_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter12_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter13_type:
      state=metter13_action;
      break;
      case metter13_current:
      state=metter13_type;
      break;
      case metter13_vol:
      state=metter13_current;
      break;
      case metter13_action:
      state=metter13_vol;
      break;
      case metter13_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter13_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter14_type:
      state=metter14_action;
      break;
      case metter14_current:
      state=metter14_type;
      break;
      case metter14_vol:
      state=metter14_current;
      break;
      case metter14_action:
      state=metter14_vol;
      break;
      case metter14_current_in:
         if (input1< 2000)
            input1 ++;
         else
            input1 =0;
      break;
      case metter14_vol_in:
         if (input1    < 550)
            input1 ++;
         else
            input1=0;
      break;
      case metter15_type:
      state=metter15_action;
      break;
      case metter15_current:
      state=metter15_type;
      break;
      case metter15_vol:
      state=metter15_current;
      break;
      case metter15_action:
      state=metter15_vol;
      break;
      case metter15_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter15_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter16_type:
      state=metter16_action;
      break;
      case metter16_current:
      state=metter16_type;
      break;
      case metter16_vol:
      state=metter16_current;
      break;
      case metter16_action:
      state=metter16_vol;
      break;
      case metter16_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter16_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter17_type:
      state=metter17_action;
      break;
      case metter17_current:
      state=metter17_type;
      break;
      case metter17_vol:
      state=metter17_current;
      break;
      case metter17_action:
      state=metter17_vol;
      break;
      case metter17_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter17_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter18_type:
      state=metter18_action;
      break;
      case metter18_current:
      state=metter18_type;
      break;
      case metter18_vol:
      state=metter18_current;
      break;
      case metter18_action:
      state=metter18_vol;
      break;
      case metter18_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter18_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      case metter19_type:
      state=metter19_action;
      break;
      case metter19_current:
      state=metter19_type;
      break;
      case metter19_vol:
      state=metter19_current;
      break;
      case metter19_action:
      state=metter19_vol;
      break;
      case metter19_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter19_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
      //
      case metter20_type:
      state=metter20_action;
      break;
      case metter20_current:
      state=metter20_type;
      break;
      case metter20_vol:
      state=metter20_current;
      break;
      case metter20_action:
      state=metter20_current;
      break;
      case metter20_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter20_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
       //
      case metter21_type:
      state=metter21_action;
      break;
      case metter21_current:
      state=metter21_type;
      break;
      case metter21_vol:
      state=metter21_current;
      break;
      case metter21_action:
      state=metter21_current;
      break;
      case metter21_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter21_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
       //
      case metter22_type:
      state=metter22_action;
      break;
      case metter22_current:
      state=metter22_type;
      break;
      case metter22_vol:
      state=metter22_current;
      break;
      case metter22_action:
      state=metter22_current;
      break;
      case metter22_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter22_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
       //
      case metter23_type:
      state=metter23_action;
      break;
      case metter23_current:
      state=metter23_type;
      break;
      case metter23_vol:
      state=metter23_current;
      break;
      case metter23_action:
      state=metter23_current;
      break;
      case metter23_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter23_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
       //
      case metter24_type:
      state=metter24_action;
      break;
      case metter24_current:
      state=metter24_type;
      break;
      case metter24_vol:
      state=metter24_current;
      break;
      case metter24_action:
      state=metter24_current;
      break;
      case metter24_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter24_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
        //
      case metter25_type:
      state=metter25_action;
      break;
      case metter25_current:
      state=metter25_type;
      break;
      case metter25_vol:
      state=metter25_current;
      break;
      case metter25_action:
      state=metter25_current;
      break;
      case metter25_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter25_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
      break;
        //
      case metter26_type:
      state=metter26_action;
      break;
      case metter26_current:
      state=metter26_type;
      break;
      case metter26_vol:
      state=metter26_current;
      break;
      case metter26_action:
      state=metter26_current;
      break;
      case metter26_current_in:
         if (input1 < 2000)
            input1++;
         else
            input1=0;
      break;
      case metter26_vol_in:
         if (input1 < 550)
            input1++;
         else
            input1=0;
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
      state=metter26;
      break;
      case add_ip:
      state=date;
      break;
      case metter1:
      state=add_ip;
      break;
      case metter2:
      state=metter1;
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
      case metter10:
      state=metter9;
      break;
      case metter11:
      state=metter10;
      break;
      case metter12:
      state=metter13;
      break;
      case metter13:
      state=metter11;
      break;
      case metter14:
      state=metter13;
      break;
      case metter15:
      state=metter14;
      break;
      case metter16:
      state=metter15;
      break;
      case metter17:
      state=metter16;
      break;
      case metter18:
      state=metter17;
      break;
      case metter19:
      state=metter18;
      break;
      case metter20:
      state=metter19;
      break;
       case metter21:
      state=metter20;
      break;
       case metter22:
      state=metter21;
      break;
       case metter23:
      state=metter22;
      break;
      case metter24:
      state=metter23;
      break;
      case metter25:
      state=metter24; 
      break;
      case metter26:
      state=metter25;
      break;
      case metter1_action:
      state=metter1_type;
      break;
      case metter1_type:
      state=metter1_current;
      break;
      case metter1_current:
      state=metter1_vol;
      break;
      case metter1_vol:
      state=metter1_action;
      break;
      case metter1_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter1_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter2_action:
      state=metter2_type;
      break;
      case metter2_type:
      state=metter2_current;
      break;
      case metter2_current:
      state=metter2_vol;
      break;
      case metter2_vol:
      state=metter2_action;
      break;
      case metter2_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter2_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter3_action:
      state=metter3_type;
      break;
      case metter3_type:
      state=metter3_current;
      break;
      case metter3_current:
      state=metter3_vol;
      break;
      case metter3_vol:
      state=metter3_action;
      break;
      case metter3_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter3_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter4_action:
      state=metter4_type;
      break;
      case metter4_type:
      state=metter4_current;
      break;
      case metter4_current:
      state=metter4_vol;
      break;
      case metter4_vol:
      state=metter4_action;
      break;
      case metter4_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter4_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter5_action:
      state=metter5_type;
      break;
      case metter5_type:
      state=metter5_current;
      break;
      case metter5_current:
      state=metter5_vol;
      break;
       case metter5_vol:
      state=metter5_action;
      break;
      case metter5_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter5_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter6_action:
      state=metter6_type;
      break;
      case metter6_type:
      state=metter6_current;
      break;
      case metter6_current:
      state=metter6_vol;
      break;
      case metter6_vol:
      state=metter6_action;
      break;
      case metter6_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter6_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter7_action:
      state=metter7_type;
      break;
      case metter7_type:
      state=metter7_current;
      break;
      case metter7_current:
      state=metter7_vol;
      break;
       case metter7_vol:
      state=metter7_action;
      break;
      case metter7_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter7_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter8_action:
      state=metter8_type;
      break;
      case metter8_type:
      state=metter8_current;
      break;
      case metter8_current:
      state=metter8_vol;
      break;
      case metter8_vol:
      state=metter8_action;
      break;
      case metter8_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter8_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter9_action:
      state=metter9_type;
      break;
      case metter9_type:
      state=metter9_current;
      break;
      case metter9_current:
      state=metter9_vol;
      break;
      case metter9_vol:
      state=metter9_action;
      break;
      case metter9_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter9_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter10_action:
      state=metter10_type;
      break;
      case metter10_type:
      state=metter10_current;
      break;
      case metter10_current:
      state=metter10_vol;
      break;
      case metter10_vol:
      state=metter10_action;
      break;
      case metter10_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter10_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter11_action:
      state=metter11_type;
      break;
      case metter11_type:
      state=metter11_current;
      break;
      case metter11_current:
      state=metter11_vol;
      break;
      case metter11_vol:
      state=metter11_action;
      break;
      case metter11_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter11_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter12_action:
      state=metter12_type;
      break;
      case metter12_type:
      state=metter12_current;
      break;
      case metter12_current:
      state=metter12_vol;
      break;
      case metter12_vol:
      state=metter12_action;
      break;
      case metter12_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter12_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter13_action:
      state=metter13_type;
      break;
      case metter13_type:
      state=metter13_current;
      break;
      case metter13_current:
      state=metter13_vol;
      break;
      case metter13_vol:
      state=metter13_action;
      break;
      case metter13_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter13_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter14_action:
      state=metter14_type;
      break;
      case metter14_type:
      state=metter14_current;
      break;
      case metter14_current:
      state=metter14_vol;
      break;
      case metter14_vol:
      state=metter14_action;
      break;
      case metter14_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter14_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter15_action:
      state=metter15_type;
      break;
      case metter15_type:
      state=metter15_current;
      break;
      case metter15_current:
      state=metter15_vol;
      break;
      case metter15_vol:
      state=metter15_action;
      break;
      case metter15_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter15_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter16_action:
      state=metter16_type;
      break;
      case metter16_type:
      state=metter16_current;
      break;
      case metter16_current:
      state=metter16_vol;
      break;
      case metter16_vol:
      state=metter16_action;
      break;
      case metter16_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter16_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter17_action:
      state=metter17_type;
      break;
      case metter17_type:
      state=metter17_current;
      break;
      case metter17_current:
      state=metter17_vol;
      break;
      case metter17_vol:
      state=metter17_action;
      break;
      case metter17_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter17_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter18_action:
      state=metter18_type;
      break;
      case metter18_type:
      state=metter18_current;
      break;
      case metter18_current:
      state=metter18_vol;
      break;
      case metter18_vol:
      state=metter18_action;
      break;
      case metter18_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter18_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case metter19_action:
      state=metter19_type;
      break;
      case metter19_type:
      state=metter19_current;
      break;
      case metter19_current:
      state=metter19_vol;
      break;
      case metter19_vol:
      state=metter19_action;
      break;
      case metter19_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter19_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      //
      case metter20_action:
      state=metter20_type;
      break;
      case metter20_type:
      state=metter20_current;
      break;
      case metter20_current:
      state=metter20_vol;
      break;
      case metter20_vol:
      state=metter20_action;
      break;
      case metter20_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter20_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
       //
      case metter21_action:
      state=metter21_type;
      break;
      case metter21_type:
      state=metter21_current;
      break;
      case metter21_current:
      state=metter21_vol;
      break;
      case metter21_vol:
      state=metter21_action;
      break;
      case metter21_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter21_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
       //
      case metter22_action:
      state=metter22_type;
      break;
      case metter22_type:
      state=metter22_current;
      break;
      case metter22_current:
      state=metter22_vol;
      break;
      case metter22_vol:
      state=metter22_action;
      break;
      case metter22_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter22_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
       //
      case metter23_action:
      state=metter23_type;
      break;
      case metter23_type:
      state=metter23_current;
      break;
      case metter23_current:
      state=metter23_vol;
      break;
      case metter23_vol:
      state=metter23_action;
      break;
      case metter23_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter23_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
       //
      case metter24_action:
      state=metter24_type;
      break;
      case metter24_type:
      state=metter24_current;
      break;
      case metter24_current:
      state=metter24_vol;
      break;
      case metter24_vol:
      state=metter24_action;
      break;
      case metter24_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter24_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
       //
      case metter25_action:
      state=metter25_type;
      break;
      case metter25_type:
      state=metter25_current;
      break;
      case metter25_current:
      state=metter25_vol;
      break;
      case metter25_vol:
      state=metter25_action;
      break;
      case metter25_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter25_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
       //
      case metter26_action:
      state=metter26_type;
      break;
      case metter26_type:
      state=metter26_current;
      break;
      case metter26_current:
      state=metter26_vol;
      break;
      case metter26_vol:
      state=metter26_action;
      break;
      case metter26_current_in:
         if (input1 > 0)
            input1--;
         else
            input1=2000;
      break;
      case metter26_vol_in:
         if (input1 > 0)
            input1--;
         else
            input1=550;
      break;
      case add_ip_server:
      state=add_ip_client;
      break;
      case metter1_action_in:
         if(metter[1].action==0)
            metter[1].action=1;
         else
            metter[1].action=0; 
      break;
      case metter1_type_in:
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
      case metter10_action_in:
         if(metter[10].action==0)
            metter[10].action=1;
         else
            metter[10].action=0; 
      break;
      case metter10_type_in:
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
      case metter11_action_in:
         if(metter[11].action==0)
            metter[11].action=1;
         else
            metter[11].action=0; 
      break;
      case metter11_type_in:
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
      case metter12_action_in:
         if(metter[12].action==0)
            metter[12].action=1;
         else
            metter[12].action=0; 
      break;
      case metter12_type_in:
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
      case metter13_action_in:
         if(metter[13].action==0)
            metter[13].action=1;
         else
            metter[13].action=0; 
      break;
      case metter13_type_in:
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
      case metter14_action_in:
         if(metter[14].action==0)
            metter[14].action=1;
         else
            metter[14].action=0; 
      break;
      case metter14_type_in:
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
     case metter15_action_in:
         if(metter[15].action==0)
            metter[15].action=1;
         else
            metter[15].action=0; 
      break;
      case metter15_type_in:
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
      case metter16_action_in:
         if(metter[16].action==0)
            metter[16].action=1;
         else
            metter[16].action=0; 
      break;
      case metter16_type_in:
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
       case metter17_action_in:
         if(metter[17].action==0)
            metter[17].action=1;
         else
            metter[17].action=0; 
      break;
      case metter17_type_in:
         switch(metter[17].type)
            {
            case 0: metter[17].type=1;
            break;
            case 1: metter[17].type=2;
            break;
            case 2: metter[17].type=3;
            break;
            case 3: metter[17].type=0;
            break;
            }
      break;
       case metter18_action_in:
         if(metter[18].action==0)
            metter[18].action=1;
         else
            metter[18].action=0; 
      break;
      case metter18_type_in:
         switch(metter[18].type)
            {
            case 0: metter[18].type=1;
            break;
            case 1: metter[18].type=2;
            break;
            case 2: metter[18].type=3;
            break;
            case 3: metter[18].type=0;
            break;
            }
      break;
       case metter19_action_in:
         if(metter[19].action==0)
            metter[19].action=1;
         else
            metter[19].action=0; 
      break;
      case metter19_type_in:
         switch(metter[19].type)
            {
            case 0: metter[19].type=1;
            break;
            case 1: metter[19].type=2;
            break;
            case 2: metter[19].type=3;
            break;
            case 3: metter[19].type=0;
            break;
            }
      break;
      //
       case metter20_action_in:
         if(metter[20].action==0)
            metter[20].action=1;
         else
            metter[20].action=0; 
      break;
      case metter20_type_in:
         switch(metter[20].type)
            {
            case 0: metter[20].type=1;
            break;
            case 1: metter[20].type=2;
            break;
            case 2: metter[20].type=3;
            break;
            case 3: metter[20].type=0;
            break;
            }
      break;
       //
       case metter21_action_in:
         if(metter[21].action==0)
            metter[21].action=1;
         else
            metter[21].action=0; 
      break;
      case metter21_type_in:
         switch(metter[21].type)
            {
            case 0: metter[21].type=1;
            break;
            case 1: metter[21].type=2;
            break;
            case 2: metter[21].type=3;
            break;
            case 3: metter[21].type=0;
            break;
            }
      break;
       //
       case metter22_action_in:
         if(metter[22].action==0)
            metter[22].action=1;
         else
            metter[22].action=0; 
      break;
      case metter22_type_in:
         switch(metter[22].type)
            {
            case 0: metter[22].type=1;
            break;
            case 1: metter[22].type=2;
            break;
            case 2: metter[22].type=3;
            break;
            case 3: metter[22].type=0;
            break;
            }
      break;
       //
       case metter23_action_in:
         if(metter[23].action==0)
            metter[23].action=1;
         else
            metter[23].action=0; 
      break;
      case metter23_type_in:
         switch(metter[23].type)
            {
            case 0: metter[23].type=1;
            break;
            case 1: metter[23].type=2;
            break;
            case 2: metter[23].type=3;
            break;
            case 3: metter[23].type=0;
            break;
            }
      break;
       //
       case metter24_action_in:
         if(metter[24].action==0)
            metter[24].action=1;
         else
            metter[24].action=0; 
      break;
      case metter24_type_in:
         switch(metter[24].type)
            {
            case 0: metter[24].type=1;
            break;
            case 1: metter[24].type=2;
            break;
            case 2: metter[24].type=3;
            break;
            case 3: metter[24].type=0;
            break;
            }
      break;
      //
       case metter25_action_in:
         if(metter[25].action==0)
            metter[25].action=1;
         else
            metter[25].action=0; 
      break;
      case metter25_type_in:
         switch(metter[25].type)
            {
            case 0: metter[25].type=1;
            break;
            case 1: metter[25].type=2;
            break;
            case 2: metter[25].type=3;
            break;
            case 3: metter[25].type=0;
            break;
            }
      break;
      //
       case metter26_action_in:
         if(metter[26].action==0)
            metter[26].action=1;
         else
            metter[26].action=0; 
      break;
      case metter26_type_in:
         switch(metter[26].type)
            {
            case 0: metter[26].type=1;
            break;
            case 1: metter[26].type=2;
            break;
            case 2: metter[26].type=3;
            break;
            case 3: metter[26].type=0;
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
      case state_alarm:
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
      case metter7:
      state=monitor;
      break;
      case metter8:
      state=monitor;
      break;
      case metter9:
      state=monitor;
      break;
      case metter10:
      state=monitor;
      break;
      case metter11:
      state=monitor;
      break;
      case metter12:
      state=monitor;
      break;
      case metter13:
      state=monitor;
      break;
      case metter14:
      state=monitor;
      break;
      case metter15:
      state=monitor;
      break;
      case metter16:
      state=monitor;
      break;
      case metter17:
      state=monitor;
      break;
      case metter18:
      state=monitor;
      break;
      case metter19:
      state=monitor;
      break;
      case metter20:
      state=monitor;
      break;
      case metter21:
      state=monitor;
      break;
      case metter22:
      state=monitor;
      break;
      case metter23:
      state=monitor;
      break;
      case metter24:
      state=monitor;
      break;
      case metter25:
      state=monitor;
      break;
      case metter26:
      state=monitor;
      break;
      case add_ip:
      state=monitor;
      break;
      case date:
      state=monitor;
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
      case metter1_vol:
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
      case metter2_vol:
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
      case metter3_vol:
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
      case metter4_vol:
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
      case metter5_vol:
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
      case metter6_vol:
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
      case metter7_vol:
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
      case metter8_vol:
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
      case metter9_vol:
      state=metter9;
      break;
      case metter10_action:
      state=metter10;
      break;
      case metter10_type:
      state=metter10;
      break;
      case metter10_current:
      state=metter10;
      break;
      case metter10_vol:
      state=metter10;
      break;
      case metter11_action:
      state=metter11;
      break;
      case metter11_type:
      state=metter11;
      break;
      case metter11_current:
      state=metter11;
      break;
      case metter11_vol:
      state=metter11;
      break;
      case metter12_action:
      state=metter12;
      break;
      case metter12_type:
      state=metter12;
      break;
      case metter12_current:
      state=metter12;
      break;
      case metter12_vol:
      state=metter12;
      break;
      case metter13_action:
      state=metter13;
      break;
      case metter13_type:
      state=metter13;
      break;
      case metter13_current:
      state=metter13;
      break;
      case metter13_vol:
      state=metter13;
      break;
      case metter14_action:
      state=metter14;
      break;
      case metter14_type:
      state=metter14;
      break;
      case metter14_current:
      state=metter14;
      break;
      case metter14_vol:
      state=metter14;
      break;
      case metter15_action:
      state=metter15;
      break;
      case metter15_type:
      state=metter15;
      break;
      case metter15_current:
      state=metter15;
      break;
      case metter15_vol:
      state=metter15;
      break;
      case metter16_action:
      state=metter16;
      break;
      case metter16_type:
      state=metter16;
      break;
      case metter16_current:
      state=metter16;
      break;
      case metter16_vol:
      state=metter16;
      break;
      case metter17_action:
      state=metter17;
      break;
      case metter17_type:
      state=metter17;
      break;
      case metter17_current:
      state=metter17;
      break;
      case metter17_vol:
      state=metter17;
      break;
      case metter18_action:
      state=metter18;
      break;
      case metter18_type:
      state=metter18;
      break;
      case metter18_current:
      state=metter18;
      break;
      case metter18_vol:
      state=metter18;
      break;
      case metter19_action:
      state=metter19;
      break;
      case metter19_type:
      state=metter19;
      break;
      case metter19_current:
      state=metter19;
      break;
      case metter19_vol:
      state=metter19;
      break;
      //
      case metter20_action:
      state=metter20;
      break;
      case metter20_type:
      state=metter20;
      break;
      case metter20_current:
      state=metter20;
      break;
      case metter20_vol:
      state=metter20;
      break;
       //
      case metter21_action:
      state=metter21;
      break;
      case metter21_type:
      state=metter21;
      break;
      case metter21_current:
      state=metter21;
      break;
      case metter21_vol:
      state=metter21;
      break;
       //
      case metter22_action:
      state=metter22;
      break;
      case metter22_type:
      state=metter22;
      break;
      case metter22_current:
      state=metter22;
      break;
      case metter22_vol:
      state=metter22;
      break;
       //
      case metter23_action:
      state=metter23;
      break;
      case metter23_type:
      state=metter23;
      break;
      case metter23_current:
      state=metter23;
      break;
      case metter23_vol:
      state=metter23;
      break;
       //
      case metter24_action:
      state=metter24;
      break;
      case metter24_type:
      state=metter24;
      break;
      case metter24_current:
      state=metter24;
      break;
      case metter24_vol:
      state=metter24;
      break;
        //
      case metter25_action:
      state=metter25;
      break;
      case metter25_type:
      state=metter25;
      break;
      case metter25_current:
      state=metter25;
      break;
      case metter25_vol:
      state=metter25;
      break;
        //
      case metter26_action:
      state=metter26;
      break;
      case metter26_type:
      state=metter26;
      break;
      case metter26_current:
      state=metter26;
      break;
      case metter26_vol:
      state=metter26;
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
      case metter1_action_in:
      state=metter1_action;
      break;
      case metter1_type_in:
      state=metter1_type;
      break;
      case metter1_current_in:
      state=metter1_current;
      break;
      case metter1_vol_in:
      state=metter1_vol;
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
      case metter2_vol_in:
      state=metter2_vol;
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
      case metter3_vol_in:
      state=metter3_vol;
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
       case metter4_vol_in:
      state=metter4_vol;
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
      case metter5_vol_in:
      state=metter5_vol;
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
      case metter6_vol_in:
      state=metter6_vol;
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
      case metter7_vol_in:
      state=metter7_vol;
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
      case metter8_vol_in:
      state=metter8_vol;
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
      case metter9_vol_in:
      state=metter9_vol;
      break;
      case metter10_action_in:
      state=metter10_action;
      break;
      case metter10_type_in:
      state=metter10_type;
      break;
      case metter10_current_in:
      state=metter10_current;
      break;
      case metter10_vol_in:
      state=metter10_vol;
      break;
      case metter11_action_in:
      state=metter11_action;
      break;
      case metter11_type_in:
      state=metter11_type;
      break;
      case metter11_current_in:
      state=metter11_current;
      break;
      case metter11_vol_in:
      state=metter11_vol;
      break;
      case metter12_action_in:
      state=metter12_action;
      break;
      case metter12_type_in:
      state=metter12_type;
      break;
      case metter12_current_in:
      state=metter12_current;
      break;
      case metter12_vol_in:
      state=metter12_vol;
      break;
      case metter13_action_in:
      state=metter13_action;
      break;
      case metter13_type_in:
      state=metter13_type;
      break;
      case metter13_current_in:
      state=metter13_current;
      break;
      case metter13_vol_in:
      state=metter13_vol;
      break;
      case metter14_action_in:
      state=metter14_action;
      break;
      case metter14_type_in:
      state=metter14_type;
      break;
      case metter14_current_in:
      state=metter14_current;
      break;
      case metter14_vol_in:
      state=metter14_vol;
      break;
      case metter15_action_in:
      state=metter15_action;
      break;
      case metter15_type_in:
      state=metter15_type;
      break;
      case metter15_current_in:
      state=metter15_current;
      break;
      case metter15_vol_in:
      state=metter15_vol;
      break;
      case metter16_action_in:
      state=metter16_action;
      break;
      case metter16_type_in:
      state=metter16_type;
      break;
      case metter16_current_in:
      state=metter16_current;
      break;
      case metter16_vol_in:
      state=metter16_vol;
      break;
      case metter17_action_in:
      state=metter17_action;
      break;
      case metter17_type_in:
      state=metter17_type;
      break;
      case metter17_current_in:
      state=metter17_current;
      break;
      case metter17_vol_in:
      state=metter17_vol;
      break;
      case metter18_action_in:
      state=metter18_action;
      break;
      case metter18_type_in:
      state=metter18_type;
      break;
      case metter18_current_in:
      state=metter18_current;
      break;
      case metter18_vol_in:
      state=metter18_vol;
      break;
      case metter19_action_in:
      state=metter19_action;
      break;
      case metter19_type_in:
      state=metter19_type;
      break;
      case metter19_current_in:
      state=metter19_current;
      break;
      case metter19_vol_in:
      state=metter19_vol;
      break;
      //
      case metter20_action_in:
      state=metter20_action;
      break;
      case metter20_type_in:
      state=metter20_type;
      break;
      case metter20_current_in:
      state=metter20_current;
      break;
      case metter20_vol_in:
      state=metter20_vol;
      break;
      //
      case metter21_action_in:
      state=metter21_action;
      break;
      case metter21_type_in:
      state=metter21_type;
      break;
      case metter21_current_in:
      state=metter21_current;
      break;
      case metter21_vol_in:
      state=metter21_vol;
      break;
       //
      case metter22_action_in:
      state=metter22_action;
      break;
      case metter22_type_in:
      state=metter22_type;
      break;
      case metter22_current_in:
      state=metter22_current;
      break;
      case metter22_vol_in:
      state=metter22_vol;
      break;
       //
      case metter23_action_in:
      state=metter23_action;
      break;
      case metter23_type_in:
      state=metter23_type;
      break;
      case metter23_current_in:
      state=metter23_current;
      break;
      case metter23_vol_in:
      state=metter23_vol;
      break;
       //
      case metter24_action_in:
      state=metter24_action;
      break;
      case metter24_type_in:
      state=metter24_type;
      break;
      case metter24_current_in:
      state=metter24_current;
      break;
      case metter24_vol_in:
      state=metter24_vol;
      break;
      //
      case metter25_action_in:
      state=metter25_action;
      break;
      case metter25_type_in:
      state=metter25_type;
      break;
      case metter25_current_in:
      state=metter25_current;
      break;
      case metter25_vol_in:
      state=metter25_vol;
      break;
      //
      case metter26_action_in:
      state=metter26_action;
      break;
      case metter26_type_in:
      state=metter26_type;
      break;
      case metter26_current_in:
      state=metter26_current;
      break;
      case metter26_vol_in:
      state=metter26_vol;
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
 case metter1:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER1") ;
   lcd_en=1;
   }
 break;
 case metter2:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER2") ;
   lcd_en=1;
   }
 break;
 case metter3:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER3") ;
   lcd_en=1;
   }
 break;
 case metter4:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER4") ;
   lcd_en=1;
   }
 break;
 case metter5:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER5") ;
   lcd_en=1;
   }
 break;
 case metter6:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER6") ;
   lcd_en=1;
   }
 break;
 case metter7:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER7") ;
   lcd_en=1;
   }
 break;
 case metter8:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER8") ;
   lcd_en=1;
   }
 break;
 case metter9:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER9") ;
   lcd_en=1;
   }
 break;
 case metter10:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER10") ;
   lcd_en=1;
   }
 break;
 case metter11:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER11") ;
   lcd_en=1;
   }
 break;
 case metter12:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER12") ;
   lcd_en=1;
   }
 break;
 case metter13:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER13") ;
   lcd_en=1;
   }
 break;
 case metter14:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER14") ;
   lcd_en=1;
   }
 break;
 case metter15:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER15") ;
   lcd_en=1;
   }
 break;
 case metter16:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER16") ;
   lcd_en=1;
   }
 break;
 case metter17:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER17") ;
   lcd_en=1;
   }
 break;
 case metter18:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER18") ;
   lcd_en=1;
   }
 break;
 case metter19:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER19") ;
   lcd_en=1;
   }
 break;
 //
 case metter20:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER20") ;
   lcd_en=1;
   }
 break;
 //
 case metter21:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER21") ;
   lcd_en=1;
   }
 break;
  //
 case metter22:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER22") ;
   lcd_en=1;
   }
 break;
  //
 case metter23:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER23") ;
   lcd_en=1;
   }
 break;
  //
 case metter24:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER24") ;
   lcd_en=1;
   }
 break;
  //
 case metter25:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER25") ;
   lcd_en=1;
   }
 break;
  //
 case metter26:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>METER26") ;
   lcd_en=1;
   }
 break;
 case add_ip:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>SETTING IP") ;
   lcd_en=1;
   }
 break;
 case date:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER") ;
   lcd_gotoxy(1,2);
   lcd_putc(">>SETTING DATE") ;
   lcd_en=1;
   }
 break;
 case metter1_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER1 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter1_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER1 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter1_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter1_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER1") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
case metter2_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER2 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter2_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER2 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter2_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter2_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER2") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter3_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER3 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter3_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER3 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter3_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter3_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER3") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
case metter4_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER4 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter4_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER4 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter4_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter4_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER4") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter5_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER5 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter5_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER5 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter5_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter5_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER5") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter6_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER6 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter6_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER6 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter6_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter6_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER6") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter7_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER7 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter7_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER7 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter7_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter7_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER7") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
case metter8_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER8 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter8_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER8 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter8_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter8_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER8") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter9_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER9 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter9_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER9 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter9_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter9_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER9") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter10_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER10") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER10 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter10_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER10") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER10 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter10_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER10") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter10_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER10") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter11_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER11") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER11 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter11_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER11") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER11 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter11_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER11") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter11_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER11") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
case metter12_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER12") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER12 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter12_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER12") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER12 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter12_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER12") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter12_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER12") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter13_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER13") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER13 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter13_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER13") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER13 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter13_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER13") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter13_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER13") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter14_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER14") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER14 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter14_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER14") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER14 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter14_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER14") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter14_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER14") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter15_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER15") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER15 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter15_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER15") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER15 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter15_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER15") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter15_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER15") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
case metter16_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER16") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER16 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter16_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER16") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER16 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter16_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER16") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter16_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER16") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter17_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER17") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER17 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter17_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER17") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER17 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter17_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER17") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter17_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER17") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter18_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER18") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER18 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter18_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER18") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER18 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter18_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER18") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter18_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER18") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 case metter19_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER19") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER19 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter19_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER19") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER19 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter19_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER19") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter19_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER19") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter20_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER20") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER20 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter20_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER20") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER20 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter20_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER20") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter20_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER20") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter21_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER21") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER21 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter21_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER21") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER21 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter21_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER21") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter21_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER21") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter22_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER22") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER22 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter22_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER22") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER22 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter22_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER22") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter22_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER22") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter23_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER23") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER23 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter23_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER23") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER23 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter23_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER23") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter23_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER23") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter24_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER24") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER24 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter24_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER24") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER24 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter24_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER24") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter24_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER24") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter25_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER25") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER25 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter25_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER25") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER25 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter25_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER25") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter25_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER25") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
   lcd_en=1;
   }
 break;
 //
 case metter26_action:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER26") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER26 ENABLE") ;
   lcd_en=1;
   }
 break;
 case metter26_type:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER26") ;
   lcd_gotoxy(1,2);
   lcd_putc(">METER26 TYPE") ;
   lcd_en=1;
   }
 break;
 case metter26_current:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER26") ;
   lcd_gotoxy(1,2);
   lcd_putc(">CURRENT MAX") ;
   lcd_en=1;
   }
 break;
 case metter26_vol:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("SETTING METER26") ;
   lcd_gotoxy(1,2);
   lcd_putc(">U MAX") ;
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
 case metter1_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER1 ENABLE") ;
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
 case metter1_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER1 TYPE") ;
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
 case metter1_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER1 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter1_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER1 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter2_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER2 ENABLE") ;
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
   lcd_putc(" METER2 TYPE") ;
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
   lcd_putc("METER2 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter2_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER2 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter3_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER3 ENABLE") ;
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
   lcd_putc(" METER3 TYPE") ;
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
   lcd_putc("METER3 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter3_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER3 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter4_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER4 ENABLE") ;
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
   lcd_putc(" METER4 TYPE") ;
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
   lcd_putc("METER4 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter4_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER4 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter5_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER5 ENABLE") ;
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
   lcd_putc(" METER5 TYPE") ;
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
   lcd_putc("METER5 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter5_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER5 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter6_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER6 ENABLE") ;
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
   lcd_putc(" METER6 TYPE") ;
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
   lcd_putc("METER6 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter6_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER6 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter7_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER7 ENABLE") ;
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
   lcd_putc(" METER7 TYPE") ;
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
   lcd_putc("METER7 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter7_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER7 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter8_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER8 ENABLE") ;
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
   lcd_putc(" METER8 TYPE") ;
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
   lcd_putc("METER8 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter8_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER8 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
  case metter9_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER9 ENABLE") ;
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
   lcd_putc(" METER9 TYPE") ;
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
   lcd_putc("METER9 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter9_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER9 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter10_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER10 ENABLE") ;
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
 case metter10_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER10 TYPE") ;
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
   lcd_putc("METER10 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter10_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER10 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter11_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER11 ENABLE") ;
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
   lcd_putc(" METER11 TYPE") ;
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
   lcd_putc("METER11 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter11_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER11 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter12_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER12 ENABLE") ;
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
   lcd_putc(" METER12 TYPE") ;
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
   lcd_putc("METER12 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter12_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER12 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter13_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER13 ENABLE") ;
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
   lcd_putc(" METER13 TYPE") ;
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
   lcd_putc("METER13 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter13_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER13 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter14_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER14 ENABLE") ;
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
   lcd_putc(" METER14 TYPE") ;
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
   lcd_putc("METER14 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter14_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER14 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter15_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER15 ENABLE") ;
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
   lcd_putc(" METER15 TYPE") ;
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
   lcd_putc("METER15 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter15_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER15 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 case metter16_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER16 ENABLE") ;
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
   lcd_putc(" METER16 TYPE") ;
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
   lcd_putc("METER16 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter16_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER16 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
  case metter17_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER17 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[17].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter17_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER17 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[17].type)
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
 case metter17_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER17 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter17_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER17 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
  case metter18_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER18 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[18].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter18_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER18 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[18].type)
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
 case metter18_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER18 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter18_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER18 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
  case metter19_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER19 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[19].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter19_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER19 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[19].type)
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
 case metter19_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER19 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter19_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER19 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter20_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER20 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[20].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter20_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER20 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[20].type)
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
 case metter20_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER20 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter20_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER20 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter21_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER21 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[21].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter21_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER21 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[21].type)
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
 case metter21_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER21 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter21_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER21 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter22_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER22 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[22].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter22_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER22 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[22].type)
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
 case metter22_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER22 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter22_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER22 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter23_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER23 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[23].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter23_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER23 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[23].type)
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
 case metter23_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER23 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter23_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER23 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter24_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER24 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[24].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter24_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER24 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[24].type)
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
 case metter24_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER24 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter24_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER24 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter25_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER25 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[25].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter25_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER25 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[25].type)
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
 case metter25_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER25 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter25_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER25 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
   lcd_en=1;
   }
 break;
 //
  case metter26_action_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER26 ENABLE") ;
   lcd_gotoxy(1,2);
   switch(metter[26].action)
   {
   case 0:lcd_putc(">DISABLE");
   break;
   case 1:lcd_putc(">ENABLE"); 
   break;
   }
   lcd_en=1;
   }
 break;
 case metter26_type_in:
   if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc(" METER26 TYPE") ;
   lcd_gotoxy(1,2);
   switch(metter[26].type)
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
 case metter26_current_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER26 CURRENT") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Imax=%lu(A)",input1);
   lcd_en=1;
   }
 break;
 case metter26_vol_in:
 if(lcd_en==0)
   {
   lcd_clr();
   lcd_putc("METER24 VOLTAGE") ;
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Umax=%lu(KV)",input1);
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
   case state_alarm:
   if(lcd_en==0)
   {
   lcd_en=1;
   lcd_clr();
   lcd_putc("LIST STATUS") ;
   lcd_gotoxy(1,2);
      if(count_alarm==0)
      {
      if(alarm[count_alarm]==1)
          lcd_putc("SD CARD ERROR") ;
      else
          lcd_putc("SD CARD OK") ;
      }
      else
      {
      if(alarm[count_alarm]==1)
          printf(lcd_putc,"LO %lu ALARM",lo[count_alarm]);
      else
          printf(lcd_putc,"LO %lu NORMAL",lo[count_alarm]);
      }
   }
   break;
 }
}
