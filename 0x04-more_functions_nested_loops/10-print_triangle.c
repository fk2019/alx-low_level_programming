#include "main.h"

/**
 * print_triangle - draw a triangle
 * @size: size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
				_putchar(32);
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar(10);
		}
	}
}
