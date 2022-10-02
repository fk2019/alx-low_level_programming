#include "main.h"
#include <stdio.h>

/**
* main - entry point
* @argc: counter for argv
* @argv: array of pointers to arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (count < argc)
	{
		printf("%s\n", *argv++);
		count++;
	}
	return (0);
}
