#include <main1.h>

void main()
{
 set_tris_c(0xff);
 //delay_ms(500);
   while(TRUE)
   {
    output_c(0x00); 
    delay_ms(500);
    output_c(0x01); 
    delay_ms(500);
    output_c(0x02); 
    delay_ms(500);
    output_c(0x03); 
    delay_ms(500);
    output_c(0x04); 
    delay_ms(500);
    output_c(0x05); 
    delay_ms(500);
    output_c(0x06); 
    delay_ms(500);
    output_c(0x07); 
    delay_ms(500);
    output_c(0x08); 
    delay_ms(500);
    output_c(0x09); 
    delay_ms(500);


      //TODO: User Code
   }

}
