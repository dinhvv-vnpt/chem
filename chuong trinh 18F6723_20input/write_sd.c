#include <MMC_SPI_FAT32.h>
#include <MMC_SPI_FAT32.c>
void wite_data_sd()
{
fprintf(ethernet,"@,%d,20%2d-%02d-%02d %02d:%02d:%02d,%f,%f,%f,%f,%f,%f,%02f,%02f,%02f,%lu,%f,%f,#",addr+17,year,month,day,hour,min,sec,u1,u2,u3,i1,i2,i3,cos1,cos2,cos3,metter[addr].current,p,q);
//!if(MMCInit() == MMC_OK)
//!   {
//!   InitFAT(); 
//!   fprintf(DEBUG,"\n\rSD OK\n\r");
//!  // BUZZ_OFF;
//!   ALARM_OFF;
//!   sprintf(gfilename,"%02d%02d20%02d.TXT",day,month,year);
//!  // strcpy(gfilename,"DATA.TXT");                             
//!   f = fopen(gfilename,'a'); 
//!   if (f & MMC_ERROR)                                          
//!   {                                                            
//!      fprintf(DEBUG,"Couldn't open file!\r\n");                       
//!      if(f == MMC_NO_CARD_INSERTED)                            
//!         fprintf(DEBUG,"Please, insert MMC!");                        
//!      else if(f == MMC_MAX_FILES_REACHED)                      
//!        fprintf(DEBUG,"ops.. =)");                                    
//!   }                                                            
//!   else                                                         
//!   {         
//!     ds1307_get_time(hour,min,sec);
//!     sprintf(msg,"%02d:%02d:%02d %02d/%02d/20%d address=%02d %f(KV) %f(KV) %f(KV) %f(A) %f(A) %f(A) %02f %02f %02f %02f %02f,\r\n",hour,min,sec,day,month,year,addr,u1,u2,u3,i1,i2,i3,cos1,cos2,cos3,p,q);
//!     fputstring(msg,f);    
//!     fclose(f); 
//!     //fprintf(ethernet,"@,%d,20%2d-%02d-%02d %02d:%02d:%02d,%f,%f,%f,%f,%f,%f,%02f,%02f,%02f,%lu,%f,%f,#",addr+17,year,month,day,hour,min,sec,u1,u2,u3,i1,i2,i3,cos1,cos2,cos3,metter[addr].current,p,q);
//!     fprintf(DEBUG,"\n\rWrite file OK\n\r");                                             
//!   }                        
//!  
//!  }
//!  else
//!  {
//!  fprintf(DEBUG,"\n\rSD ERROR\n\r");
//! // BUZZ_ON;
//!  ALARM_ON;
//!  }
   
}
