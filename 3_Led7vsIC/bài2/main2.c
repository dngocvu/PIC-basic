#include <main2.h>

void main()
{
 set_tris_c(0xff);
 //delay_ms(500);
   while(TRUE)
   {
    output_c(0x00); 
    delay_ms(500);
    output_c(0x11); 
    delay_ms(500);
    output_c(0x22); 
    delay_ms(500);
    output_c(0x33); 
    delay_ms(500);
    output_c(0x44); 
    delay_ms(500);
    output_c(0x55); 
    delay_ms(500);
    output_c(0x66); 
    delay_ms(500);
    output_c(0x77); 
    delay_ms(500);
    output_c(0x88); 
    delay_ms(500);
    output_c(0x99); 
    delay_ms(500);


      //TODO: User Code
   }

}
