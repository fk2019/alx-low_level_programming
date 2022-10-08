#include "main.h"
/**
* _isdigit - check if input is digit
* @c: input to check
*
* Return: 1 otherwise 0
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
