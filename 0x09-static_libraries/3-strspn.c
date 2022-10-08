#include "main.h"

/**
* _strspn - gets length of a prefix substring
* @s: pointer to string
* @accept: pointer to string to locate
*
* Return: number of bytes in initial segment of s which
* consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, j, ch;

	for (len = 0; *(s + 1) != '\0'; len++)
	{
		ch = 1;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + len) == *(accept + j))
			{
				ch = 0;
				break;
			}
		}
		if (ch == 1)
			break;
	}
	return (len);
}
