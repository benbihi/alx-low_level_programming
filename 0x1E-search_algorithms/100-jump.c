#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i = 0, j, step;

    if (!array || size == 0)
        return (-1);

    step = sqrt(size);

    while (i < size && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i += step;
    }

    j = i - step;
    printf("Value found between indexes [%lu] and [%lu]\n", j, i);

    i = i >= size ? size - 1 : i;

    while (j <= i && j < size)
    {
        printf("Value checked array[%lu] = [%d]\n", j, array[j]);
        if (array[j] == value)
            return (j);
        j++;
    }
    return (-1);
}

