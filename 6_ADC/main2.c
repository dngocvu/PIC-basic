#include <main2.h>
#define POT pin_e2
const unsigned int8 led7seg[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned int16 cnt;          // count
unsigned int16 VALUE_ADC; 
#use delay(crystal=20M)
#use rs232(uart1, baud = 9600)

void Display_LED_TIME()
{
   output_a(led7seg[VALUE_ADC%10]);
   output_b(led7seg[VALUE_ADC/10%10]);  
}
void Display_LED_REMAIN()
{
   
}

void main()
{
   set_tris_a(0x00);
   set_tris_b(0x00);// input port d
   set_tris_c(0xff);
   set_tris_d(0xff);
   set_tris_e(0xff);
   setup_adc(adc_clock_div_8);
   setup_adc_ports(san7);
   set_adc_channel(3);
   while(TRUE)
   {  
      VALUE_ADC=0;
      cnt++;
      if(cnt>300)
      {
          VALUE_ADC=VALUE_ADC+read_adc();
          cnt=0;
      }
      delay_ms(1);
      printf("adc value= %04ld\r\n",VALUE_ADC);
      VALUE_ADC=VALUE_ADC*99/1023;
      Display_LED_TIME();
      //TODO: User Code
   }
}


