/*
 * main.c
 *
 *  Created on: 31 Jul 2023
 *      Author: george yaccoup
 */
#include "DIO/DIO_int.h"
#include "HAL/ADC/ADC_private.h"
int main() {
	DIO_vidSetPinDirection(DIO_GROUP_C, DIO_PIN_0, DIO_OUTPUT);
	DIO_vidSetPinDirection(DIO_GROUP_A, DIO_PIN_1, DIO_INPUT);
	DIO_vidSetPinDirection(DIO_GROUP_C, DIO_PIN_1, DIO_OUTPUT);
	DIO_vidSetPinValue(DIO_GROUP_C, DIO_PIN_0, DIO_LOW);
	DIO_vidSetPinValue(DIO_GROUP_C, DIO_PIN_1, DIO_LOW);

	ADC_voidIniti();
	while (1) {
		int ADC_read = ADC_u8ADCRead();
		if (ADC_read >= 61) {
			DIO_vidSetPinValue(DIO_GROUP_C, DIO_PIN_0, DIO_HIGH);
			DIO_vidSetPinValue(DIO_GROUP_C, DIO_PIN_1, DIO_HIGH);
		}
		else{
			DIO_vidSetPinValue(DIO_GROUP_C, DIO_PIN_0, DIO_LOW);
			DIO_vidSetPinValue(DIO_GROUP_C, DIO_PIN_1, DIO_LOW);
	}



}
}
