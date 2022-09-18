#include "main.h"

/**
* print_square - draw square
* @size: operand
*
* Return: Always 0
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 2; j <= size; j++)
				_putchar(35);
			_putchar(10);
		}
	}
}
