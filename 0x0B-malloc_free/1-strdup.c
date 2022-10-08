#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a newlyallocated space in memory
 * containing copy of string str
 * @str: string to copy to new memory
 *
 * Return: pointer to duplicated string or NULL if str = NULL or
 * insuffiecient memeory available
 */
char *_strdup(char *str)
{
	char *strc;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strc = malloc(sizeof(char) * (i + 1));
	if (strc == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		strc[j] = str[j];
	return (strc);
}
