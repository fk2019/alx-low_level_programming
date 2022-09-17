#include "main.h"

/**
* times_table - print 9 times table
*
* Return: void
*/
void times_table(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (n != 0)
			{
				_putchar(44);
				_putchar(32);
			}
			if ((i * n) <= 9 && n != 0)
			{
				_putchar(32);
				_putchar((i * n) + '0');
			}
			else if ((i * n) > 9)
			{
				_putchar((i * n) / 10 + '0');
				_putchar((i * n) % 10 + '0');
			}
			else
				_putchar((i * n) + '0');

		}
		_putchar(10);
	}
}
