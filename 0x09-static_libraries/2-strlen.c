#include "main.h"
/**
* _strlen - checks length of string
* @s: string to check
*
* Return: length of string
*/
int _strlen(char *s)
{
	int l = 0;
	char *p = s;

	while (*p != '\0')
	{
		l++;
		p++;
	}
	return (l);
}
