#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: operand to allocate
 *
 * Return: pointer to allocated memory, 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
