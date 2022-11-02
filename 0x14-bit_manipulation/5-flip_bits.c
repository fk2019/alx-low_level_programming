#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t current, temp;
	int i, c;

	c = 0;
	temp = n ^ m;
	i = BIT_SIZE - 1;
	while (i >= 0)
	{
		current = temp >> i;
		if (current & 1)
			c++;
		i--;
	}
	return (c);
}
