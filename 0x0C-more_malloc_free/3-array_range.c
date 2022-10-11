#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimun(included)
 * @max: maximum(included)
 *
 * Return: pointer to new array, NULL on error, if min>max
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
