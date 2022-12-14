#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: arguments counter
 * @argv: pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		return (99);
	}
	p = get_op_func(argv[2]);
	if (p ==  NULL)
	{
		printf("Error\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", p(a, b));
	return (0);
}
