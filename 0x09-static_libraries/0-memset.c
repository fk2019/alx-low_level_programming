#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: memory area pointed by s
* @b: constant byte
* @n: first n bytes
*
* Return: value of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
