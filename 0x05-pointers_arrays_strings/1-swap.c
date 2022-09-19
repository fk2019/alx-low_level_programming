#include "main.h"

/**
* swap_int - swaps values of two ints
* @a: first pointer operand
* @b: second pointer operand
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
