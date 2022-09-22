#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	while (*(++dest))
	{}

	while ((*(dest++) = *(src++)))
	{}

	return (dest);
}
