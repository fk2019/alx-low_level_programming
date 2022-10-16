#include "function_pointers.h"

/**
 * int_index - searches for an int
 * on each array element
 * @array: array
 * @size: size of array
 * @cmp: function to be executed
 *
 * Return: index of first elem
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (i);
}
