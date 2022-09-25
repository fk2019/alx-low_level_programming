#include "main.h"

/**
* cap_string - capitalize all words of string
* @s: string to capitalize
*
* Return: pointer to resulting string
*/
char *cap_string(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == 32 || *p == 9 || *p == 10 || *p == 44
				|| *p == 59 || *p == 46 || *p == 33
				|| *p == 63 || *p == 34 || *p == 40
				|| *p == 41 || *p == 123 || *p == 125)

		{
			if (*(p + 1) >= 97 && *(p + 1) <= 122)
				*(p + 1) -= 32;
		}
		p++;
	}
	return (s);

}
