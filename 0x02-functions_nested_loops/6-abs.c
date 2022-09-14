#include "main.h"

/**
* _abs - computes absolute values
* @n: number parameter to be checked
*
* Return: absolute number
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	return (-n);
}
