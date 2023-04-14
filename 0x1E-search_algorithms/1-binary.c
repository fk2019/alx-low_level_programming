#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of
  * integers using binary search algorith
  * @array: pointer to the first element in array
  * @size: size of array
  * @value: value to search
  * Return: index of value otherwise -1 if array is NULL or
  * value is absent
  */

int binary_search(int *array, size_t size, int value)
{
	int l, mid, h, i;

	l = 0;
	h = (int)size - 1;
	if (array == NULL)
		return (-1);
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i < h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (l + h) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);

}
