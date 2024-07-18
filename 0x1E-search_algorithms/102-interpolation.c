#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t pos, low = 0, high = size - 1;

    if (!array || size == 0)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (array[high] == array[low])
        {
            if (array[low] == value)
                return (low);
            break;
        }

        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos >= size)
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            break;
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return (-1);
}

