#include <main3.h>
void main()
{
    set_tris_c(0xff);
    //delay_ms(500);
   while(TRUE)
   {
    output_c(0x90); 
    delay_ms(500);
    output_c(0x81); 
    delay_ms(500);
    output_c(0x72); 
    delay_ms(500);
    output_c(0x63); 
    delay_ms(500);
    output_c(0x54); 
    delay_ms(500);
    output_c(0x45); 
    delay_ms(500);
    output_c(0x36); 
    delay_ms(500);
    output_c(0x27); 
    delay_ms(500);
    output_c(0x18); 
    delay_ms(500);
    output_c(0x09); 
    delay_ms(500);


      //TODO: User Code
   }

}
