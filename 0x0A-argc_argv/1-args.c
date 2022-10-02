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

	(void)*argv;
	if (argc > 1)
	{
		count = 0;
		while (count < argc - 1)
			count++;
	}
	else
		count = 0;
	printf("%d\n", count);
	return (0);
}
