#include "main.h"

/**
* print_line - draw staright line
* @n: operand
*
* Return: Always 0
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
			_putchar(95);
		_putchar(10);
	}
}
