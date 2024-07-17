#include "search_algos.h"
/**
 * linear_search - do a linear search
 * @array: the array
 * @size: the array size
 * @value: the search value
 * Return: the number if found -1 else
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i=0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %i at index: %li", value, i);
			return (i);
		}
	}
	return (-1);
}
