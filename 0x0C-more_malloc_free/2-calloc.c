#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmeb: number of array elements
 * @size: size bytes of array
 *
 * Return: pointer yo allocated memory, NULL on failrure
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmeb == 0 || size == 0)
		return (NULL);
	p = malloc(nmeb * size);
	if (p == NULL)
		return (NULL);
	i = 0;

	while (i < nmeb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
