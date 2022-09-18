#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Descriptio: print from 1-100 and replace multiples of 3
 * with Fizz and 5 with Buzz instead of their numbers. For bother, print Fizz
 * Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
