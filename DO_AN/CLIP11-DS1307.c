//#define BOARD D401
#include<tv_boards.c>
#include<tv_lcd.c>
#include<tv_glcd.c>
#include<tv_ds1307.c>
#include<tv_ds18b20.c> 

unsigned int8 sp=0,n=0,giay,phut,gio;
unsigned int16 lm35a,sum1=0;
unsigned int16 distance;
unsigned int16 ng,tp;
unsigned int1 mode=0;

void kiemtra_nutnhan()
{
   if(inputcd(INV)==0)
   {
      mode=~mode;
      glcd_clear(0);
   }
}
void hienthi_GLCD()
{
             
      if(ds1307_read_time()==OK)                             
      {    
                 
         giay= (ds1307.second/16)*10 + ds1307.second%16;
         phut= (ds1307.minute/16)*10 + ds1307.minute%16;
         gio= (ds1307.hour  /16)*10 + ds1307.hour%16;
         if(mode==0)
         {
            glcd_text_setup(20,25,2,1,1); 
            printf(glcd_text,"%d%d:",ds1307.hour/16,ds1307.hour%16);
            glcd_text_setup(53,25,2,1,1); 
            printf(glcd_text,"%d%d:",ds1307.minute/16,ds1307.minute%16);
            glcd_text_setup(85,25,2,1,1); 
            printf(glcd_text,"%d%d",ds1307.second/16,ds1307.second%16);   
            glcd_update();
         }else
         {
            glcd_circle(63, 31, 30, 0, 1);
            glcd_update();
            glcd_circle(63, 31, 1, 1, 1);
            glcd_update();
            
            glcd_text_setup(58,6,1,1,1);
            glcd_text("12");
            glcd_update();
            
            glcd_text_setup(61,52,1,1,1);
            glcd_text("6");
            glcd_update();
            
            glcd_text_setup(85,27,1,1,1);
            glcd_text("3");
            glcd_update();
            
            glcd_text_setup(38,27,1,1,1);
            glcd_text("9");
            glcd_update();
            
            if(ds1307.second<=0x30)
            {
               glcd_line(63, 31, 63 -  15*sin(29*(pi)/30)           ,    46-15*(1-cos(29*(pi)/30))       ,0);
               glcd_line(63, 31, 63 +  15*sin((giay-1)*(pi)/30)     ,    16+15*(1-cos((giay-1)*(pi)/30)) ,0);
               glcd_line(63, 31, 63 +  15*sin(giay*(pi)/30)         ,    16+15*(1-cos(giay*(pi)/30))     ,1);
               glcd_update();
            }else if(ds1307.second<0x60)
            {
               glcd_line(63, 31, 63 -  15*sin((giay-31)*(pi)/30)    ,    46-15*(1-cos((giay-31)*(pi)/30)) ,0);
               glcd_line(63, 31, 63 -  15*sin((giay-30)*(pi)/30)    ,    46-15*(1-cos((giay-30)*(pi)/30)) ,1);
               glcd_update();
            }
            if(ds1307.minute<=0x30)
            {
               glcd_line(63, 31, 63 -  15*sin(29*(pi)/30)           ,    46-15*(1-cos(29*(pi)/30))       ,0);
               glcd_line(63, 31, 63 +  15*sin((phut-1)*(pi)/30)     ,    16+15*(1-cos((phut-1)*(pi)/30)) ,0);
               glcd_line(63, 31, 63 +  15*sin(phut*(pi)/30)         ,    16+15*(1-cos(phut*(pi)/30))     ,1);
               glcd_update();
            }else if(ds1307.minute<0x60)
            {
               glcd_line(63, 31, 63 -  15*sin((phut-31)*(pi)/30)    ,    46-15*(1-cos((phut-31)*(pi)/30)) ,0);
               glcd_line(63, 31, 63 -  15*sin((phut-30)*(pi)/30)    ,    46-15*(1-cos((phut-30)*(pi)/30)) ,1);
               glcd_update();
            }
            if( gio%12 <=6)
            {
               glcd_line(63, 31, 63 -  10*sin(5*(pi)/6 +(phut/60)*(pi/6))             ,    46-15*(1-cos(5*(pi)/6 + (phut/60)*(pi/6)))       ,0);
               glcd_line(63, 31, 63 +  10*sin((gio-1)*(pi)/6 + (phut/60)*(pi/6))      ,    16+15*(1-cos((gio-1)*(pi)/6) + (phut/60)*(pi/6))   ,0);
               glcd_line(63, 31, 63 +  10*sin(gio*(pi)/6 + (phut/60)*(pi/6))          ,    16+15*(1-cos(gio*(pi)/6) + (phut/60)*(pi/6))       ,1);
               glcd_update();
            }else if(gio%12 < 12)
            {
               glcd_line(63, 31, 63 -  10*sin((gio-7)*(pi)/6 + (phut/60)*(pi/6))     ,    46-15*(1-cos((gio-7)*(pi)/6) + (phut/60)*(pi/6)) ,0);
               glcd_line(63, 31, 63 -  10*sin((gio-6)*(pi)/6 + (phut/60)*(pi/6))     ,    46-15*(1-cos((gio-6)*(pi)/6) + (phut/60)*(pi/6)) ,1);
               glcd_update();
            }
            glcd_update();
          
         }
      }
   

}
void main()
{ 
   system_init();
   lcd_setup();
   glcd_setup();
   
   setup_timer_0(T0_EXT_H_TO_L|T0_DIV_1|T0_8_bit);   
   set_timer0(0);           
   
   setup_adc(adc_clock_div_32);
   setup_adc_ports(analog_pins|vss_vdd);  
   
   ds18b20_set_resolution(11);
      
   if(ds1307_battery_check()==ERROR)                           // kiem tra pin
   {                                                           // do het pin nen thoi gian chay sai => can phai chinh lai
             ds1307.second=0x00;                                  // thay bang thoi gian hien tai
             ds1307.minute=0x00; 
             ds1307.hour  =0x00;             
             ds1307_set_time(ds1307);             
   }
   while(true)
   {
      
      // Dem san pham
       sp =get_timer0();
       // Do nhiet do
     if(ds18b20_read_temperature()==OK)        
     {
          ng= ds18b20.temperatureA>>4; 
          tp = (ds18b20.temperatureA & 0xff)*1000/16; 
          
          set_adc_channel(lm35a_channel); delay_us(20);
          sum1 = sum1 + read_adc()/2.046;
            n++;
            if(n>=100)
            { 
               lm35a= sum1/100;
               n=0; sum1=0;
            }                  
       }
     //Do khoang cach
     set_adc_channel(gp2d12_channel); delay_us(20);
     distance = read_adc();
     distance =pow(4277/distance,1.115);
     if (distance>80) distance=80; 
     else if(distance<10) distance=10;     
     
     // Hien thi LCD
     lcd_goto(0,0);
     printf(lcd_data,"SP     : %3u", sp);
     lcd_goto(0,1);
     printf(lcd_data,"LM35   : %3lu",lm35a);
     lcd_goto(0,2);
     printf(lcd_data,"GP2D12 :  %2lu", distance);
     lcd_goto(0,3);
     printf(lcd_data,"DS18B20: %3lu.%3lu",ng,tp);
     // GLCD
    kiemtra_nutnhan();
    hienthi_GLCD();
     

   }
}
