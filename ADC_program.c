/*
 * ADC_program.c
 *
 *  Created on: 31 Jul 2023
 *      Author: george yaccoup
 */
#include "ADC_private.h"
#include <avr/io.h>
void ADC_voidIniti() {
	SETBIT(ADMUX, REFS0);//INTITALIZATION
	CLRBIT(ADMUX, REFS1);
	
	SETBIT(ADMUX,MUX0);  // PINS
	SETBIT(ADCSRA, ADEN);// INABLE 

	CLRBIT(ADCSRA, ADPS0);// MODE 
	CLRBIT(ADCSRA, ADPS1);
	SETBIT(ADCSRA, ADPS2);

}
int ADC_u8ADCRead(){
	SETBIT(ADCSRA, ADSC); // START 
	while (GETBIT(ADCSRA,ADIF) == 0) {;}
	return ((int)ADCL + (int)ADCH * 256);
}


