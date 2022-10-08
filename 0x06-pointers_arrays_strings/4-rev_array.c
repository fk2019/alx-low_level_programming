#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverses array
* @a: array of integers
* n: number of elements to swap
*
* Return: 0 if same else non-zero value if different
*/
void reverse_array(int *a, int n)
{
	int *p;
	p = a;

	while (*p < n)
		p++;
	while (a < p)
	{
		int tmp;
		tmp = *a;
		*a = *p;
		*p = tmp;
		a++;
		p--;
	}
}
