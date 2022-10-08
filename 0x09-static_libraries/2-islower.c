#include "main.h"

/**
* _islower - check if c is lower
* @c: character to check
*
* Return: 1 otherwise 0
*/
int _isupper(int c)
{
	if (c>= 97 && c <= 122)
		return (1);
	else
		return (0);
}
