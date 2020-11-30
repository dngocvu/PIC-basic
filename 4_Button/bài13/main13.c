#include <main13.h> // ****CODE THAM KHAO**** 

int1 doubleclick()
{
   int16 count=0;
   int8 t=0;
   if(t==0 & (input(PIN_D0)==1))
      {
         while(count<20)
         {
            delay_ms(1);
            count++;
            if(t==0 & (input(PIN_D0)==0)) t=1;
            if(t==1 & (input(PIN_D0)==1)) return 1;
         }
      }
   return 0;
}

void main()
{
  set_tris_d(0xf3);
  output_bit(PIN_D3,0);

  int8 state=0;
  int16 dem=0;
  int1 nhan=0,dat_time=0;
   while(TRUE)
   { 
      // int16 dem=0;
       if(state==0 & (input(PIN_D0)==1)) state=1;
       if(state==1 & (input(PIN_D0)==0)) state=2;
       if(state==2 & (doubleclick()==1)) state=3;
       if(state==3 & (input(PIN_D0)==0)) state=4;    
       if(state==0||state==1) output_low(PIN_D3);
       if(state==2) output_high(PIN_D3);
       if(state==4)
         {
            for(int16 i=0;i<40;i++)
            {
               output_bit(PIN_D3,(i)<20);
               delay_ms(1);
               if(input(PIN_D0))
               {
                  nhan=1;// kiemtranhan=1;               
               }
               if(nhan==1) dem++;
               if(dem>100) 
               {  
                  dat_time=1;
                  dem=0;
               }
            if(nhan==1 && (input(PIN_D0)==0))
               {
                  nhan=0;
             //  kiemtranhan=0;
                  dem=0;
                  if(dat_time)
                  {
                     state=0;
                     dat_time=0;
                     break;
                  }
               }
            }
       }       
   }
}


//****CODE BUG****
/*
#define S1     PIN_D0
#define LED1   PIN_D3

#include <main13.h>

char click=0;
int16 i=0;
int16 n=0;                        //coutertime500   
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
                     //while(input(S1)==1);
                     while(true)
                        {
                        output_bit(LED1,1);//output2
                        delay_ms(10);
                        output_bit(LED1,0);
                        delay_ms(10);                    
                        }
                        click=2;  //doubleclick
                        break;
                  }
            }
         }
      if(click==1)
         output_bit(LED1,1); //output1
      if(click==2 && (input(S1)==1))
         {
         while(input(S1)==1)
         {     
         
               output_bit(LED1,0);
               click=0;
               break;
         }
        // break;
         }
      //TODO: User Code
   }
}
*/
