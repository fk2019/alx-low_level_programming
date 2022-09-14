#include "main.h"
/**
* 2-print_alphabet_x10 - prints 10 times the alphabet
*
* Description: func prints the alphabet 10 times
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

