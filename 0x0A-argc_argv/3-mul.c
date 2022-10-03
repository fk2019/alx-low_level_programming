#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: counter for argv
* @argv: array of pointers to arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}

	return (0);
}
