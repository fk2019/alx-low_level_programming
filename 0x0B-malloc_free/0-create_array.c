#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * create_array - creates array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: pointer to array or NULL if it fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);

}
