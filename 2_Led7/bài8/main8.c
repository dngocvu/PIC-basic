#include <main8.h>

const unsigned int8 ma7doan[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
signed int dem;
unsigned int ma_dem;
void main()
{
   set_tris_c(0xff);
   set_tris_d(0xff); // input port d
   while(TRUE)
   {
      for(dem=0;dem<10;dem++)
         {
            //ma_dem = ma7doan[dem];  
            output_c(ma7doan[dem]);
            output_d(ma7doan[dem]);
            delay_ms(500);
         }

      //TODO: User Code
   }
}
