#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(32);
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (a / 10 != 9 || a % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}

	}
	putchar(10);
	return (0);

}
