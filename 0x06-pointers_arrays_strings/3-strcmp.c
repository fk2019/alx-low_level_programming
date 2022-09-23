#include "main.h"

/**
* _strcmp - compares two strings
* @s2: first pointer operand
* @s1: second pointer operand
*
* Return: 0 if same else non-zero value if different
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
