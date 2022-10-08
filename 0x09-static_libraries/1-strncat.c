#include "main.h"

/**
* _strncat - concatenate two strings
* @dest: destination string
* @src: source string
* @n: n bytes from @src
*
* Return: pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (n != 0 && *src != '\0')
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
