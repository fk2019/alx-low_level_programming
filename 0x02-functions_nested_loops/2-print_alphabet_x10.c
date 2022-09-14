#include "main.h"
/**
* 2-print_alphabet_x10 - prints 10 times the alphabet
*
* Description: print_alphabet_x10 function prints the alphabet 10 times. It
* uses two loops with the inside loop printing the alphabet and main loop
* printing output 10 times.
* Return: void
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar (j);
		_putchar (10);
	}
}

