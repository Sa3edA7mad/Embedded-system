/*
 * GccApplication1.c
 *
 * Created: 9/22/2020 1:43:56 AM
 * Author : Saeed
 */ 

#include <avr/io.h>
#include "BitMath.h"
#include "STD_types.h"
#include "interrupts.h"

int main(void)
{
	CLR_BIT(DDRD,1);
	CLR_BIT(DDRD,2);
	
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
	
	while (1)
	{
		if (GET_BIT(PIND,1) == 1)
		{
			if (GET_BIT(PIND,1) == 1)
			{
				TOGGLE_BIT(PORTD,5);
				TOGGLE_BIT(PORTD,6);
				TOGGLE_BIT(PORTD,7);
			}
		}
		_delay_ms(200);

		
}
