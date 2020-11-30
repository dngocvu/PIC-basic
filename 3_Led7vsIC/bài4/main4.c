#include <main4.h>

signed int8 i;
const unsigned int8 ma7doan1[10]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09};
const unsigned int8 ma7doan2[10]={0x00,0x10,0x20,0x30,0x40,0x50,0x60,0x70,0x80,0x90};
void main()
{
    set_tris_c(0xff);
    //delay_ms(500);
   while(TRUE)
   {
   for(i=0;i<100;i++){
    output_c(ma7doan1[i/10]+ma7doan2[i%10]);//output 2led-1port
    delay_ms(50);
    }


      //TODO: User Code
   }

}
