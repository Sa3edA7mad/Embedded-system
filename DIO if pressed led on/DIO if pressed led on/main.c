/*
 * GccApplication1.c
 *
 * Created: 9/22/2020 1:43:56 AM
 * Author : Saeed
 */ 

#include <avr/io.h>
#define		F_CPU	 16000000ul
#include <util/delay.h>

#define SET_BIT(Var,BitNo)		    Var |= (1<<BitNo)
#define CLR_BIT(Var,BitNo)		    Var &= ~(1<<BitNo)
#define TOGGLE_BIT(Var,BitNo)		Var ^= (1<<BitNo)

int main(void)
{
	CLR_BIT(DDRD,2);
	CLR_BIT(DDRD,1);
	
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
	
    while (1) 
    {
		if (PIND & (0b00000010) != 0)
		{
			SET_BIT(PORTD,5);
		}
		else
		{
			CLR_BIT(PORTD,5);
		}
		if (PIND & (0b00000100) != 0)
		{
			SET_BIT(PORTD,6);
		}
		else
		{
			CLR_BIT(PORTD,6);
		}
		
    }
}

