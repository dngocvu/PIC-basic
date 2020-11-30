#include <main10.h>

void main()
{
  set_tris_c(0x00);
  output_c(0x00); 
  //delay_ms(50);
   while(TRUE)
   {
   output_c(0x01); 
   delay_ms(300);
   output_c(0x03); 
   delay_ms(300);
   output_c(0x07); 
   delay_ms(300);
   output_c(0x0f); 
   delay_ms(300);
   output_c(0x1f); 
   delay_ms(300);
   output_c(0x3f); 
   delay_ms(300);
   output_c(0x7f); 
   delay_ms(300);
   output_c(0xff); 
   delay_ms(300);


      //TODO: User Code
   }

}
