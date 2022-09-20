#include "main.h"

/**
* puts_half - print second half of string 
* @s: pointer operand
*
* Return: void
*/
void puts_half(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	j = i / 2;
	while (j < i)
	{
		_putchar(s[j]);
		j++;
	}
	_putchar(10);
}
