/*
 * ports.c
 *
 * Created: 2/27/2024 6:34:52 PM
 *  Author: josel
 */ 
#include <avr/io.h>

void init_ports(void)
{
//LCD 4bit definition
/*
PORTB|	LCD
----+--------
PB0	|	RS
PB1	|	RW
PB2	|	E
PB3	|	D4
PB4	|	D5
PD2	|	D6
PD3	|	D7
*/	
	DDRB = 0xFF;
	DDRD |= (1 << PD2) | (1 << PD3);
}