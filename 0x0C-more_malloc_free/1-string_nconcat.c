#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first byres of s2
 *
 * Return: pointer to new space in memory, NULL on failrure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, lenp, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;

	while (s1[len1] != '\0')
		len1++;
	len2 = 0;

	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	lenp = len1 + n;
	p = malloc(lenp + 1);
	if (p == NULL)
		return (NULL);
	i = 0;

	while (i < lenp)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
		i++;
	}
	p[i] = '\0';
	return (p);
}
