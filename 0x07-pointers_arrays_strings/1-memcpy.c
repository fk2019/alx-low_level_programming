#include "main.h"

/**
* _memcpy - copies memory area
* @dest: destination memory area
* @src: source memory area
* @n: bytes from source
*
* Return: pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *s = src;

	while (*p != '\0' && *s != '\0')
	{
		*p++ = *s++;
		--n;
	}
	return (dest);
}
