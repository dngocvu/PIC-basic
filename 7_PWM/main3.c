#include <main3.h>
#define S1 PIN_B0
#define S2 PIN_B1
#define S3 PIN_B2
#define MOTOR_EN PIN_C0


char S1_state=1;
char S2_state=1;
char S3_state=1;

unsigned int16 VALUE=0;



//*******   PART A ***************************************
/*
void check_S1()            //duty = 0%
{
   if(input(S1)==0)
   {
      SET_PWM2_DUTY(0);
   }
}
void check_S2()            //duty = 50% 
{
   if(input(S2)==0)
   {
      SET_PWM2_DUTY((int16)250);
   }
}
void check_S3()            //duty = 100%
{
   if(input(S3)==0)
   {
      SET_PWM2_DUTY((int16)500);
   }
}

void main()
{
  set_tris_b(0x07);
  setup_ccp2(ccp_PWM);
  setup_timer_2(T2_DIV_BY_16,124,1);
  SET_PWM2_DUTY(0);        //define duty = 0% 
   while(TRUE)
   {
      check_S1();
      check_S2();
      check_S3();
      //TODO: User Code
   }

}
*/
//  ********* PART B ***************************************
/*
void check_S1()            //start/stop
{
   if(input(S1)==0)
   {  
      S1_state=0;
      SET_PWM2_DUTY((INT16)50);
   }
   if((input(S1)==0)&(S1_state==0))
   {  
      S1_state=1;
      SET_PWM2_DUTY(0);
   }
}
void check_S2()            //PWM UP 10%
{
   if(!input(S2))
   {
      delay_ms(20);
      if(!input(S2))
      {
         if(VALUE<500)
         {
            VALUE=VALUE+50;
            SET_PWM2_DUTY(VALUE);
            while(!input(S2));
         }
      }
   }
}
void check_S3()            //PWM DOWN 10%
{
   if(!input(S3))
   {
      delay_ms(20);
      if(!input(S3))
      {
         if(VALUE>50)
         {
            VALUE=VALUE-50;
            SET_PWM2_DUTY(VALUE);
            while(!input(S3));
         }
      }
   }
}
void main()
{  
   
      set_tris_b(0x07);
      setup_ccp2(ccp_PWM);
      setup_timer_2(T2_DIV_BY_16,124,1);
      SET_PWM2_DUTY((INT16)250);        //define duty = 50%
   while(TRUE)
   {
      check_S1();
      check_S2();
      check_S3();
         //TODO: User Code
   }

}
*/
//  ********* PART C  ***************************************

void check_S1()            //start/stop
{
   if(input(S1)==0)
   {  
      S1_state=0;
      SET_PWM2_DUTY(0);
      SET_PWM1_DUTY((INT16)500);
   }
   if((input(S1)==0)&(S1_state==0))
   {  
      S1_state=1;
      SET_PWM1_DUTY(0);
   }
}
void check_S2()            //SWAP DC
{
   if(!input(S2))
   {
      delay_ms(20);
      S2_state=0;
      SET_PWM2_DUTY(125);
      SET_PWM1_DUTY(0);
      
   }
   if((!input(S2))&(S2_state==0))
   {
      delay_ms(20);
      S2_state=1;
      SET_PWM2_DUTY(0);
      SET_PWM1_DUTY(125);
   }
}
void check_S3()         //PWM CHANGE
{
      if((!input(S3))&(S2_state==0))
      {
      
         if(VALUE<500)
         {
            VALUE=VALUE+125;
            SET_PWM2_DUTY(VALUE);
            SET_PWM1_DUTY(0);
         }
            else 
            {
               if(VALUE==500)
               {
               VALUE=VALUE-125;
               SET_PWM2_DUTY(VALUE);
               SET_PWM1_DUTY(0);
               }
            }
      }
      if((!input(S3))&(S2_state==1))
         {
            if(VALUE<500)
            {
               VALUE=VALUE+125;
               SET_PWM1_DUTY(VALUE);
               SET_PWM2_DUTY(0);
            }
            else 
            {
               if(VALUE==500)
                  {
                  VALUE=VALUE-125;
                  SET_PWM1_DUTY(VALUE);
                  SET_PWM2_DUTY(0);
                  }
             }
          }
 }
void main()
{  
   
      set_tris_b(0x07);
      setup_ccp1(ccp_PWM);
      setup_ccp2(ccp_PWM);
      setup_timer_2(T2_DIV_BY_16,124,1);
      SET_PWM1_DUTY(0);//define duty = 50%
      SET_PWM2_DUTY((INT16)250);//define duty = 50%
      OUTPUT_HIGH(MOTOR_EN);
   while(TRUE)
   {
      check_S1();
      check_S2();
      check_S3();
         //TODO: User Code
   }

}
