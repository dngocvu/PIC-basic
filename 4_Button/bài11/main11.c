#define S1     PIN_D0
#define LED1   PIN_D3

#include <main11.h>

char click=0;
int16 i=0;
   
void main()
{  
   set_tris_d(0b11110111);
   output_bit(LED1,0);     
   while(TRUE)
   {
      if(input(S1)==1)
         {
            while(input(S1)==1); //firstclick
               click=1;      
            for(i=0;i<2000;i++)   //time for doubleclick
            {
               if(input(S1)==1)  //secondclick
                   {
                     while(input(S1)==1)
                     {
                        output_bit(LED1,0);//output2
                        click=2;  //doubleclick
                     }
                     //break;
                  }
            }
         }
      if(click==1)
         {
            output_bit(LED1,1);//output1
            delay_ms(10);
            output_bit(LED1,0);
            delay_ms(10);
         }
         
         
      //TODO: User Code
   }
}
