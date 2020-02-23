/*********************************************************
This application uses HC-05 Bluetooth Module to do serial
communication between PIC16F877A and an Android Phone.
*********************************************************/

#include<16f877A.h>        // Include our device's header file
/* Definining configuration for our application*/
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD 
#use delay(clock=4000000)  // Definition of oscilaator frequecy 
/* RS232 communication settings */
#use rs232(baud=9600, xmit=pin_c6,rcv=pin_c7,parity=N, stop=1)

#use fast_io(b)            // Port direction lines 

char veri;                 // We create a global char variable

#int_rda                   // Interrupt occurs when RX pin has a signal
void interrupt()
{
   disable_interrupts(int_rda);     // We disabled int_rda interrupt
   veri = getch();           
   
   /* Conditions for living room light */ 
   if(veri == 'a')
   {
      delay_ms(200);
      output_high(pin_b0);
      puts("\n\rLights of the living room is ON");   
   }
   if(veri == 'b')
   {
      delay_ms(200);
      output_low(pin_b0);
      puts("\n\rLights of the living room is OFF");
   }   
   
   /* Conditions for bedroom light */
   if(veri == 'c')
   {
      delay_ms(200);
      output_high(pin_b1);
      puts("\n\rLights of the bedroom is ON");
   }
   if(veri == 'd')
   {
      delay_ms(200);
      output_low(pin_b1);
      puts("\n\rLights of the bedroom is OFF");
   }
   
   /* Conditions for bathroom light */
   if(veri =='e')
   {
      delay_ms(200);
      output_high(pin_b2);
      puts("\n\rLights of the bathroom is ON");
   }
   if(veri == 'f')
   {
      delay_ms(200);
      output_low(pin_b2);
      puts("\n\rLights of the bathroom is OFF");
   }
   
   /* Conditions for kitchen light */
   if(veri =='g')
   {
      delay_ms(200);
      output_high(pin_b3);
      puts("\n\rLights of the kitchen is ON");   
   }
   if(veri == 'h')
   {
      delay_ms(200);
      output_low(pin_b3);
      puts("\n\rLights of the kitchen is OFF");

   }
   
   /* Conditions for Air Conditioner in the living room */
   if(veri == 'm')
   {
      delay_ms(200);
      output_high(pin_b4);
      puts("\n\rAir Conditioner in the living room is ON");
   }
   if(veri == 'n')
   {
      delay_ms(200);
      output_low(pin_b4);
      puts("\n\rAir Conditioner in the living room is OFF");
   }
   
   /* Conditions for Air Conditioner in the bedroom  */
   if(veri == 'z')
   {
      delay_ms(200);
      output_high(pin_b6);
      puts("\n\rAir Conditioner in the bedroom is ON");

   }
   if(veri == 'x')
   {
      delay_ms(200);
      output_low(pin_b6);
      puts("\n\rAir Conditioner in the bedroom room is OFF");
   }

} //end interrupt

void main()
{
   setup_psp(PSP_DISABLED);         // Disabled PSP Module
   setup_spi(SPI_SS_DISABLED);      // Disabled SPI Module
   setup_timer_1(T1_DISABLED);      // Disabled Timer1
   setup_timer_2(T2_DISABLED,0,1);  // Disabled Timer2
   setup_adc_ports(NO_ANALOGS);     // No analog input 
   setup_adc(ADC_OFF) ;             // Disabled ADC Module
   setup_CCP1(CCP_OFF) ;            // Disabled CCP1 Module
   setup_CCP2(CCP_OFF) ;            // Disabled CCP2 Module
   
   set_tris_b(0x00);                // Define PORTB as output
   output_b(0x00);                  // Clear all PORTB in beginning
  
   enable_interrupts(GLOBAL);       // Allow intrrepts which are enabled
   

      
   while(1)
   {
      enable_interrupts(int_rda);   // Enable int_rda interrupt
   }
   
} // end main

