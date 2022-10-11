#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatentaes arguments of a program
 * @ac: argument counter
 * @av: arguments
 *
 * Return: pointer to new string, NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int n, i, j, k;


	if (ac == 0)
		return (NULL);

	for (n = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}

	p = malloc(sizeof(char) * n + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = j = k = 0; k < n; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			p[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < n - 1)
			p[k] = av[i][j];
	}
	p[k] = '\0';
	return (p);
}
