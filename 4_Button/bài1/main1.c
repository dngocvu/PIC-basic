#define S1     PIN_D0
#define LED1   PIN_D3
#include <main1.h>

CHAR S1_state=0;

void main()
{
   set_tris_d(0b111110111);
   output_bit(LED1,0);
   while(TRUE)
   {
      if(input(S1)==1) 
         {
            S1_state=1;
            output_bit(LED1,1);
         }
      if((input(S1)==0)&(S1_state==1))
         {
            output_bit(LED1,0);
            S1_state=0;
            
         }

      //TODO: User Code
   }

}
