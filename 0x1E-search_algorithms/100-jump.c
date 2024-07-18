#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t curr = 0;

    if (!array)
        return (-1);

    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    curr = curr >= size ? size - 1 : curr;

    while (prev <= curr)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
        prev++;
    }

    return (-1);
}

