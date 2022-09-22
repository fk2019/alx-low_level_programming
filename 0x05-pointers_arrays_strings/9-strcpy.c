#include "main.h"

/**
* _strcpy - copy string
* @dest: first operand
* @src: second operand
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; *(dest + len) != *(src + len); len++)
		*(dest + len) = *(src + len);
	for ( ; len < *(dest + len); len++)
		*(dest + len) = '\0';
	return (dest);
}
