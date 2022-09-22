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
	int destl = 0;
	int srcl = 0;
	int i, j = 0;

	while (*dest != 0)
	{
		dest++;
		destl++;
	}
	while (*src != 0)
	{
		src++;
		srcl++;
	}
	for (i = destl; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	src[i] = '\0';
	return (dest);
}
