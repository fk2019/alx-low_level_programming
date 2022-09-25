#include "main.h"

/**
* string_toupper - changes lowercase letters to uppercase
* @c: pointer to char
*
* Return: pointer to resulting string
*/
char *string_toupper(char *c)
{
	char *p = c;

	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
			*p -= 32;
		p++;
	}
	return (c);
}
