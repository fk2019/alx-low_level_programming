#include "main.h"

/**
* pow_recursion - find power of number
* @x: base value
* @y: exponent
*
* Return: power of x
*/
int pow_recursion(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		return (-1);
	}
	return (0 + pow_recursion(x, y + 1));
}
/**
* _sqrt_recursion - returns natural square root of a number
* @n: number yo check
*
* Return: square root of n, -1 if no natural square root found
*/
i
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_recursion(n, 2));
}
