#include "main.h"
#include <stdio.h>

/**
* print_natural - print sum of multiples of 3 and 5
*
* Return: Always 0
*/
void print_natural(void)
{
	int a = 3;
	int b = 5;
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % a) == 0 || (i % b) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}

