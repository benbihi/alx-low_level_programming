#include "search_algos.h"
/**
 * binary_search - do bin search
 * @array: the search field
 * @size: the size of the array
 * @value: the search value
 * Return: int the index or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, l, mid, h;

	if (array == NULL)
		return (-1);
	l = 0;
	h = (int)size;
	while (l <= h)
	{
		mid = l + (h - l) / 2;
		for (i = l; i < h; i++)
		{
			if (i == l)
				printf("Searching in array: %d", array[i]);
			else
				printf(" ,%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
