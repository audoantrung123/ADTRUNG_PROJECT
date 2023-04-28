//#define BOARD D401
#include<tv_boards.c>
#include<tv_ds18b20.c>
#include<tv_lcd.c>
#include<tv_glcd.c>

unsigned int16 ng,tp;
unsigned int8 distance,dpg=9,TT_tp=0,TT_dpg=0;
unsigned int1 TT=0;
void kiemtra_nutnhan()
{
   if(inputcd(BT1)==0)
   {
      TT=~TT;     
   }
   
   if(TT==0)
   {
      if(inputcd(BT0)==0)
      {
         if(TT_dpg==3) TT_dpg=3;
         else  TT_dpg+=1;
      }
      if(inputcd(BT2)==0)
      {
         if(TT_dpg==0) TT_dpg=0;
         else TT_dpg-=1;                
      }           
   }else
   {
      if(inputcd(BT0)==0)
      {
         if(TT_tp==2) TT_tp=2;
         else TT_tp-=1;
      }
      if(inputcd(BT2)==0)
      {
         if(TT_tp==0) TT_tp=0;
         else TT_tp-=1;                
      } 
   } 
   if(TT_dpg==0)        dpg=9;
   else if(TT_dpg==1)   dpg=10;
   else if(TT_dpg==2)   dpg=11;
   else if(TT_dpg==3)   dpg=12;
  
}

void hienthi_GLCD()
{
   if(TT_dpg==0)
   {
      
      glcd_rect(5,16, 70, 30,  1, 0);
      glcd_rect(5,30, 70, 44,  1, 0);
      glcd_rect(5,44, 70, 58,  1, 0);  
      glcd_rect(5,0, 70, 16,   1, 1);
         
      glcd_text_setup(8, 19 ,1, 1, 1) ;
      glcd_text("DPG 10 BIT");
      glcd_text_setup(8, 33 ,1, 1, 1) ;
      glcd_text("DPG 11 BIT");
      glcd_text_setup(8, 47 ,1, 1, 1) ;
      glcd_text("DPG 12 BIT");
      glcd_text_setup(8, 5 ,1, 0, 1) ;
      glcd_text("DPG 09 BIT");
      
      glcd_update();  
   }else if(TT_dpg==1)
   {
      glcd_rect(5,0, 70, 16,   1, 0);     
      glcd_rect(5,30, 70, 44,  1, 0);
      glcd_rect(5,44, 70, 58,  1, 0);
      glcd_rect(5,16, 70, 30,  1, 1);
      
      glcd_text_setup(8, 5 ,1, 1, 1) ;
      glcd_text("DPG 09 BIT");
      glcd_text_setup(8, 33 ,1, 1, 1) ;
      glcd_text("DPG 11 BIT");
      glcd_text_setup(8, 47 ,1, 1, 1) ;
      glcd_text("DPG 12 BIT");
      glcd_text_setup(8, 19 ,1, 0, 1) ;
      glcd_text("DPG 10 BIT");
      
      glcd_update();  
   }else if(TT_dpg==2)
   {
      glcd_rect(5,0, 70, 16,   1, 0);
      glcd_rect(5,16, 70, 30,  1, 0);      
      glcd_rect(5,44, 70, 58,  1, 0);
      glcd_rect(5,30, 70, 44,  1, 1);
      
      glcd_text_setup(8, 5 ,1, 1, 1) ;
      glcd_text("DPG 09 BIT");
      glcd_text_setup(8, 19 ,1, 1, 1) ;
      glcd_text("DPG 10 BIT");     
      glcd_text_setup(8, 47 ,1, 1, 1) ;
      glcd_text("DPG 12 BIT");
      glcd_text_setup(8, 33 ,1, 0, 1) ;
      glcd_text("DPG 11 BIT");
      
      glcd_update();  
   }else if(TT_dpg==3)
   {
      glcd_rect(5,0, 70, 16,  1, 0);
      glcd_rect(5,16, 70, 30,  1, 0);
      glcd_rect(5,30, 70, 44,  1, 0);
      glcd_rect(5,44, 70, 58,  1, 1);
      
      glcd_text_setup(8, 5 ,1, 1, 1) ;
      glcd_text("DPG 09 BIT");
      glcd_text_setup(8, 19 ,1, 1, 1) ;
      glcd_text("DPG 10 BIT");
      glcd_text_setup(8, 33 ,1, 1, 1) ;
      glcd_text("DPG 11 BIT");
      glcd_text_setup(8, 47 ,1, 0, 1) ;
      glcd_text("DPG 12 BIT");
      glcd_update();  
   }     
   
   if(TT_tp==0)
   {      
      glcd_rect(75,16, 125,30,  1, 0);
      glcd_rect(75,30, 125,44,  1, 0);
      glcd_rect(75,0, 125,16,  1, 1);
            
      glcd_text_setup(78, 19 ,1, 1, 1) ;
      glcd_text("2 SO TP");
      glcd_text_setup(78, 33 ,1, 1, 1) ;
      glcd_text("3 SO TP");
      glcd_text_setup(78, 5 ,1, 0, 1) ;
      glcd_text("1 SO TP");
      glcd_update();  
   }else if(TT_tp==1)
   {
      glcd_rect(75,0, 125,16,   1, 0);      
      glcd_rect(75,30, 125,44,  1, 0);
      glcd_rect(75,16, 125,30,  1, 1);
      
      glcd_text_setup(78, 5 ,1, 1, 1) ;
      glcd_text("1 SO TP");    
      glcd_text_setup(78, 33 ,1, 1, 1) ;
      glcd_text("3 SO TP");
      glcd_text_setup(78, 19 ,1, 0, 1) ;
      glcd_text("2 SO TP");
      glcd_update();  
   }else if(TT_tp==2)
   {
      glcd_rect(75,0, 125,16,   1, 0);
      glcd_rect(75,16, 125,30,  1, 0);
      glcd_rect(75,30, 125,44,  1, 1);
      
      glcd_text_setup(78, 5 ,1, 1, 1) ;
      glcd_text("1 SO TP");
      glcd_text_setup(78, 19 ,1, 1, 1) ;
      glcd_text("2 SO TP");
      glcd_text_setup(78, 33 ,1, 0, 1) ;
      glcd_text("3 SO TP");
      glcd_update();  
   }    
}

void do_hienthi_nhietdo()
{
   if(ds18b20_read_temperature()==OK)
   {
      ng = ds18b20.temperatureA>>4; 
      
      lcd_write_2x3_num(ng/10%10,0,2);
      lcd_write_2x3_num(ng/1%10,3,2);
      lcd_data(".");
      if(TT_tp==0)
      {
         tp = (ds18b20.temperatureA&0x0f)*10/16; 
         lcd_write_2x3_num(tp/1%10,7,2);
         lcd_write_2x3_num(10,10,2);
         lcd_write_2x3_num(10,13,2);   
      }
      else if(TT_tp==1)   
      {
         tp = (ds18b20.temperatureA&0x0f)*100/16; 
         lcd_write_2x3_num(tp/10%10,7,2);
         lcd_write_2x3_num(tp/1%10,10,2);
         lcd_write_2x3_num(10,13,2);  
      }
      else if(TT_tp==2)   
      {
         tp = (ds18b20.temperatureA&0x0f)*1000/16;
         lcd_write_2x3_num(tp/100%10,7,2);
         lcd_write_2x3_num(tp/10%10,10,2);
         lcd_write_2x3_num(tp/1%10,13,2);  
      }               
   }    
}
void main()
{
   system_init();
   lcd_setup();
   glcd_setup();
   setup_adc(adc_clock_div_32);
   setup_adc_ports(analog_pins|vss_vdd);
   while(true)
   {
      kiemtra_nutnhan();
      ds18b20_set_resolution(dpg);
      // Do khoang cach 
      set_adc_channel(gp2d12_channel); delay_us(20);
      distance = read_adc();
      distance =pow(4277/distance,1.115);
      if (distance>80) distance=80; 
      else if(distance<10) distance=10;
      
      d7seg.led[1]= m7d[distance/10%10];
      d7seg.led[0]= m7d[distance%10];
      d7seg_display();
      
      do_hienthi_nhietdo();
      hienthi_GLCD();
      
   }
}
