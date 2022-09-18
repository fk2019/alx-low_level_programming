#include "main.h"

/**
* print_times_table - print n times table
* @n: operand
*
* Return: void
*/
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15 || n < 0))
	{

		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				if ((i * j) <= 9 && j != 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar((i * j) + '0');
				}
				else if ((i * j) > 9 && (i * j) > 99)
				{
					_putchar((i * j) / 100 + '0');
					_putchar(((i * j) % 100) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else if ((i * j) > 9 && (i * j) <= 99)
				{
					_putchar(32);
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
					_putchar((i * j) + '0');

			}
			_putchar(10);
		}
	}
}
