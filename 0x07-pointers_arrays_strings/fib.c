#include <stdio.h>

/**
* main - entry point, print fib
*
* Return: 0
*/
int main(void)
{
	int a, b, c, i, n;

	a = b = 1;
	n = 4;

	printf("%d%d", a, b);
	i = 1;

	while (i <= n - 2)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
		i++;
	}
	return (0);
}
