#include "main.h"

/**
* leet - encodes string to leet
* @s: string to encode
*
* Return: pointer to resulting encoded string
*/
char *leet(char *s)
{
	char leetc[] = "aAeEoOtTlL";
	char leetd[] = "43071";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (leetc[j] == s[i])
			{
				s[i] = leetd[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
