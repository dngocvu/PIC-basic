#include <main1.h>

#define S1     PIN_A0
#define S2     PIN_A1
#define S3     PIN_A2
#define S4     PIN_A3
#use    rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7, uart1)
//#use rs232(baud=9600,uart1)

CHAR S1_state=0;
CHAR S2_state=0;
CHAR S3_state=0;
CHAR S4_state=0;
CHAR c[20]="MCU READY";

void main()
{
   set_tris_d(0x00);
   output_d(0xff);
   set_tris_b(0x00);
   output_b(0xff);
   delay_ms(10);
   puts(c);
   while(TRUE)
   {  
      if(kbhit())
      {     
            c[20]=getch();
            printf("PC READY\r");
            output_b(0xc0);
            output_d(0xc0);
      }
      // input button
     if ((S1_state==0)&(input(S1)==1)) S1_state=1;
     if ((S1_state==1)&(input(S1)==0)) S1_state=2;
     if ((S2_state==0)&(input(S2)==1)) S2_state=1;
     if ((S2_state==1)&(input(S2)==0)) S2_state=2;
     if ((S3_state==0)&(input(S3)==1)) S3_state=1;
     if ((S3_state==1)&(input(S3)==0)) S3_state=2;
     if ((S4_state==0)&(input(S4)==1)) S4_state=1;
     if ((S4_state==1)&(input(S4)==0)) S4_state=2;
     //process
     if (S1_state==1) printf("ON1\r");
     delay_ms(100);
     if (S1_state==2) 
     {
         printf("OFF1\r");
         S1_state=0;
     }
     if (S2_state==1) printf("ON2\r");
     delay_ms(100);
     if (S2_state==2) 
     {
         printf("OFF2\r");
         S2_state=0;
     }
     if (S3_state==1) printf("ON3\r");
     delay_ms(100);
     if (S3_state==2) 
     {
         printf("OFF3\r");
         S3_state=0;
     }
     if (S4_state==1) printf("ON4\r");
     delay_ms(100);
     if (S4_state==2) 
     {
         printf("OFF4\r");
         S4_state=0;
     }
      //TODO: User Code

   }
}
