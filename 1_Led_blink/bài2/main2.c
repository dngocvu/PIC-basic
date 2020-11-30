#include <main2.h>

void main()
{
  set_tris_c(0x00);
  output_c(0x00);
   while(TRUE)
   {
   output_c(0x0f);
   delay_ms(300);
   output_c(0xf0);
   delay_ms(300);
   
   
      //TODO: User Code
   }

}

