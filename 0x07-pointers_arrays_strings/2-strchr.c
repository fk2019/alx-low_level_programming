#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: pointer to null-terminated byte string
* @c: character to locate
*
* Return: pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{
	char *p = NULL;

	if (s != NULL)
	{
		do

		{
			if (*s == c)
			{
				p = s;
				break;
			}
		} while (*s++);
	}
	return (p);
}
