#include "main.h"
#include <stdio.h>
/**
 * _power - returns power of a number
 * @base: base
 * @exp: exponent
 *
 * Return: power
 */
unsigned int _power(unsigned int base, int exp)
{
	unsigned int power;

	if (exp > 0)
	{
		power = 1;
		while (exp != 0)
		{
			power = base * power;
			exp--;
		}
	}
	else if (exp == 0)
		return (1);
	return (power);
}

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: binary number
*
* Return: converted number or 0 if b is NULL or not binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, base;
	int idx, i;
	const char *p;

	p = b;
	base = 2;

	if (b == NULL)
		return (0);
	i = 0;
	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		i++;
		p++;

	}
	idx = i - 1;
	result = 0;
	while (*b != '\0' && idx >= 0)
	{
		if (*b == '1')
			result = result + (1 * _power(base, idx));
		idx--;
		b++;
	}
	return (result);
}
