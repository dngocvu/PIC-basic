#include <main9.h>

unsigned int8 i=0;
unsigned int8 j=0;

void data(unsigned char d)
{
   if(d==1) {output_high(pin_e1);}
   if(d==0) {output_low(pin_e1);}
}
void clk()
{
   output_high(pin_e0);
   output_low(pin_e0);
}
void latch()
{
   output_high(pin_e2);
   output_low(pin_e2);
   delay_ms(50);
}
void zero()
{
   data(1);
   clk();
   for(i=0;i<6;i++){
   data(0);
   clk();
}
}
void one()
{
   for(i=0;i<4;i++){
   data(1);
   clk();
   }
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
}
void two()
{
   data(0);
   clk();
   data(1);
   clk();
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
}
void three()
{
   data(0);
   clk();
   for(i=0;i<2;i++){
   data(1);
   clk();
   }
   for(i=0;i<4;i++){
   data(0);
   clk();
   }
}
void four()
{
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   for(i=0;i<2;i++){
   data(1);
   clk();
   }
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
}
void five()
{
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
   data(0);
   clk();
}  
void six()
{
   for(i=0;i<5;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
   data(0);
   clk();
}
void seven()
{
   for(i=0;i<4;i++){
   data(1);
   clk();
   }
   for(i=0;i<3;i++){
   data(0);
   clk();
   }
}
void eight()
{
   for(i=0;i<7;i++){
   data(0);
   clk();
   }
}
void nine()
{
   for(i=0;i<2;i++){
   data(0);
   clk();
   }
   data(1);
   clk();
   for(i=0;i<4;i++){
   data(0);
   clk();
   }
}
void high()
{
   data(1);
   clk();
}
void low()
{
   data(0);
   clk();
}
void main()
{
   set_tris_e(0x0f);
   output_e(0x00);
   while(TRUE)
   {   
         for(j=0;j<10;j++)
         {
            if (j==0)  {
                        zero();zero();high();latch();
                        one();zero();high();latch();
                        two();zero();high();latch();
                        three();zero();high();latch();
                        four();zero();high();latch();
                        five();zero();high();latch();
                        six();zero();high();latch();
                        seven();zero();high();latch();
                        eight();zero();high();latch();
                        nine();zero();high();latch();
                        }
            if (j==1) {
                        zero();one();high();latch();
                        one();;one();high();latch();
                        two();one();high();latch();
                        three();one();high();latch();
                        four();one();high();latch();
                        five();one();high();latch();
                        six();one();high();latch();
                        seven();one();high();latch();
                        eight();one();high();latch();
                        nine();one();high();latch();
                        
                        }
            if (j==2) {
                        zero();two();high();latch();
                        one();two();high();latch();
                        two();two();high();latch();
                        three();two();high();latch();
                        four();two();high();latch();
                        five();two();high();latch();
                        six();two();high();latch();
                        seven();two();high();latch();
                        eight();two();high();latch();
                        nine();two();high();latch();
                        }
            if (j==3) {
                        zero();three();high();latch();
                        one();three();high();latch();
                        two();three();high();latch();
                        three();three();high();latch();
                        four();three();high();latch();
                        five();three();high();latch();
                        six();three();high();latch();
                        seven();three();high();latch();
                        eight();three();high();latch();
                        nine();three();high();latch();}
            if (j==4) {zero();four();high();latch();
                        one();four();high();latch();
                        two();four();high();latch();
                        three();four();high();latch();
                        four();four();high();latch();
                        five();four();high();latch();
                        six();four();high();latch();
                        seven();four();high();latch();
                        eight();four();high();latch();
                        nine();four();high();latch();}
            if (j==5) {zero();five();high();latch();
                        one();five();high();latch();
                        two();five();high();latch();
                        three();five();high();latch();
                        four();five();high();latch();
                        five();five();high();latch();
                        six();five();high();latch();
                        seven();five();high();latch();
                        eight();five();high();latch();
                        nine();five();high();latch();}
            if (j==6) {zero();six();high();latch();
                        one();six();high();latch();
                        two();six();high();latch();
                        three();six();high();latch();
                        four();six();high();latch();
                        five();six();high();latch();
                        six();six();high();latch();
                        seven();six();high();latch();
                        eight();six();high();latch();
                        nine();six();high();latch();}
            if (j==7) {zero();seven();high();latch();
                        one();seven();high();latch();
                        two();seven();high();latch();
                        three();seven();high();latch();
                        four();seven();high();latch();
                        five();seven();high();latch();
                        six();seven();high();latch();
                        seven();seven();high();latch();
                        eight();seven();high();latch();
                        nine();seven();high();latch();}
            if (j==8) {zero();eight();high();latch();
                        one();eight();high();latch();
                        two();eight();high();latch();
                        three();eight();high();latch();
                        four();eight();high();latch();
                        five();eight();high();latch();
                        six();eight();high();latch();
                        seven();eight();high();latch();
                        eight();eight();high();latch();
                        nine();eight();high();latch();}
            if (j==9) {zero();nine();high();latch();
                        one();nine();high();latch();
                        two();nine();high();latch();
                        three();nine();high();latch();
                        four();nine();high();latch();
                        five();;nine();high();latch();
                        six();nine();high();latch();
                        seven();nine();high();latch();
                        eight();nine();high();latch();
                        nine();nine();high();latch();}
         }
         

      //TODO: User Code
   }

}
