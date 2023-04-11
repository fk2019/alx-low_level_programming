#include "search_algos.h"

/**
 * linear_search - search value using linear search algorithm
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index of value or NULL if array is NULL or
 * if value is absent
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
