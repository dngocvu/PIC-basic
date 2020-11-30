#include <main1.h>

void main()
{
  set_tris_c(0x00);
  output_c(0x00);
   while(TRUE)
   {
   output_c(0xff);
   delay_ms(200);
   output_c(0x00);
   delay_ms(200);
      
      
      //TODO: User Code
   }

}

