#include <main4.h>

const unsigned int8 ma7doan[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
signed int dem;
unsigned int ma_dem;
void main()
{
   set_tris_c(0x00);
   set_tris_d(0x00); // input port d
   while(TRUE)
   {
      for(dem=0;dem<100;dem++)
         { 
            output_c(ma7doan[dem/10]);
            output_d(ma7doan[dem%10]);
            delay_ms(500);
         }

      //TODO: User Code
   }

}
