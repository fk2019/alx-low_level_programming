#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	size_t c;
	int d, bits;
	c = 0;
	bits = BIT_SIZE - 1;
	while (bits >= 0)
	{
		d = n >> bits;
		if (d & 1)
		{
			_putchar('1');
			c++;
		}
		else if(c)
			_putchar('0');
		bits--;
	}
	if(!c)
		_putchar('0');

}
