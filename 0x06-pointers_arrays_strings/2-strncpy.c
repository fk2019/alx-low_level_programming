#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies two strings
* @dest: destination string
* @src: source string
* @n: n bytes from @src
*
* Return: pointer to resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n != 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
