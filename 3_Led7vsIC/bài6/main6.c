#include <main6.h>

unsigned int8 i=0;

void data(unsigned char d)
{
   if(d==1) {output_high(pin_c1);}
   if(d==0) {output_low(pin_c1);}
}
void clk()
{
   output_high(pin_c0);
   output_low(pin_c0);
}
void latch()
{
   output_high(pin_c2);
   output_low(pin_c2);
   delay_ms(500);
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
   while(TRUE)
   {
   //0
   zero();
   high();
   zero();
   latch();
   //1
   one();
   high();
   one();
   latch();
   //2
   two();
   high();
   two();
   latch();
   //3
   three();
   high();
   three();
   latch();
   //4
   four();
   high();
   four();
   latch();
   //5
   five();
   high();
   five();
   latch();
   //6
   six();
   high();
   six();
   latch();
   //7
   seven();
   high();
   seven();
   latch();
   //8
   eight();
   high();
   eight();
   latch();   
   //9
   nine();
   high();
   nine();
   latch();
   
   
      //TODO: User Code
  }
}

