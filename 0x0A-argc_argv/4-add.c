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
	int i, sum = 0;
	char *checkd;

	if (argc == 1)
		printf("0\n");
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			checkd = argv[i];
			while (*checkd != '\0')
			{
				if (*checkd < 48 || *checkd > 57)
				{
					printf("Error\n");
					return (1);
				}
				checkd++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
