#include "main.h"
#include <stdio.h>

/**
* rev_string- reverse string
* @s: pointer operand
*
* Return: void
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	char rev = s[0];

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		j--;
		rev = s[j];
		printf("%d",rev);
		s[j] = s[i];
		s[i] = rev;
	}

}
