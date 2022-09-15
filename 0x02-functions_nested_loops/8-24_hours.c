#include "main.h"

/**
* jack_bauer - print 24 hours
*
* Return: void
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(58);
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			if (h / 10 != 3 || h % 10 != 3)
				_putchar(10);
		}
	}
}
