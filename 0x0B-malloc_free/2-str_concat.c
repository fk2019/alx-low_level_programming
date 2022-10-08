#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing
 * concatenated string and null byte
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, k, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;

	while (s1[i] != '\0')
		i++;
	j = 0;

	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	k = 0;
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	z = j;
	j = 0;

	while (j < z)
	{
		p[k] = s2[j];
		j++;
		k++;
	}
	return (p);
}
