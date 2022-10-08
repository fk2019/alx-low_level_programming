#include <stdio.h>

/**
* main - entry point
*
* Return: 0
*/
int print(int b)
{
	printf("input b: %d\n", b);
	if (b < 0)
		return (0);
	printf("b-1: %d\n", print(b - 1));
	printf("%d\n", b + print(b - 1));
	b--;
	printf("b after increment: %d\n", b);
	return (b);
}
int main(void)
{
	print(4);
	return (0);
}
