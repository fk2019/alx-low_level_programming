#include "main.h"

/**
* print_diagonal - draw diagonal line
* @n: operand
*
* Return: Always 0
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(32);
			_putchar('\\');
			_putchar(10);
		}
	}
}
