#include <main8.h>

void main()
{
  set_tris_c(0x00);
  output_c(0xff);
   while(TRUE)
   {
   output_c(0xfc); 
   delay_ms(300);
   output_c(0xf9); 
   delay_ms(300);
   output_c(0xf3); 
   delay_ms(300);
   output_c(0xe7); 
   delay_ms(300);
   output_c(0xcf); 
   delay_ms(300);
   output_c(0x9f); 
   delay_ms(300);
   output_c(0x3f); 
   delay_ms(300);
   output_c(0x7e); 
   delay_ms(300);


      //TODO: User Code
   }

}
