#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as parameter
 * on each array element
 * @array: array
 * @size: size of array
 * @action: function to be executed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array || size || action)
	{
		unsigned int i;

		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
