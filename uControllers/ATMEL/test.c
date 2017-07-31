/*
 * testapplication.c
 *
 * Created: 7/31/2017 12:47:25 AM
 * Author : akhil
 */ 


#include "sam.h"



#define LED1_PIO  PIOC
#define LED1_PIN  PIO_PC10

/*
 * LED2 definitions
 */
#define LED2_PIO  PIOC
#define LED2_PIN  PIO_PC17

/**
 * \brief Application entry point.
 *
 * \return Unused (ANSI-C compatibility).
 */
int main(void)
{
	volatile int i=0;
  // Assign the LED1 pin as OUTPUT
  LED1_PIO->PIO_OER=LED1_PIN ;
  // Clear the LED1 pin level, ie put to 0V -> the pin is connected to the LED cathode, anode is connected to +3.3V.

  
  // Assign the LED2 pin as OUTPUT
  LED2_PIO->PIO_OER=LED2_PIN ;
  // Clear the LED2 pin level, ie put to 0V -> the pin is connected to the LED cathode, anode is connected to +3.3V.
  
  while(1){
  
  LED1_PIO->PIO_SODR=LED1_PIN ;
  LED2_PIO->PIO_SODR=LED2_PIN ;
  
    for(i=0;i<20000;i++){
	    ;
    }
	LED1_PIO->PIO_CODR=LED1_PIN ;
	 
	 for(i=0;i<20000;i++){
		 ;
	 }
  }
	
}


