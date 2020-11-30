#include <main5.h>

const unsigned int8 ma7doan[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
signed int dem,n3,n1,n2; // n1 va n2 lan luot la so han n-2 va n-1
//unsigned int ma_dem;
void main()
{
   set_tris_c(0x00);
   set_tris_d(0x00); // input port d
   n1=0;
   n2=1;
   while(TRUE)
   {
      output_c(ma7doan[0]);
      output_d(ma7doan[0]);
      delay_ms(50);
      output_c(ma7doan[0]);
      output_d(ma7doan[1]);
      delay_ms(50);
      //for(dem1=0;dem1<100;dem1++)
      //   {
         
         for(dem=2;dem<100;dem++)
            {
               n3=n1+n2;
               n1=n2;
               n2=n3;
               output_c(ma7doan[n3/10]);
               output_d(ma7doan[n3%10]);
               delay_ms(50);
            
              
            }
      //TODO: User Code
   }

}
