#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenate two strings
* @dest: destination string
* @src: source string
*
* Description: loop throigh to end of dest string then loop through
* src string to concat
* Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
		*ptr++ = *src++;

	*ptr = '\0';
	return (dest);
}
