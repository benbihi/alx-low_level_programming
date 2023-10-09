#include <stdlib.h>
/**
* array_range - create an array of integers and fills it with range
* @min: start of range (inclusive)
* @max: end of range (inclusive)
* Return: a pointer to the array
*/
int *array_range(int min, int max)
{
int *ptr;
int i;
/* total number of integers (inclusive) */
int total = max - min + 1;
if (min > max)
return (NULL);
ptr = malloc(total * sizeof(int));
if (ptr == NULL)
return (NULL);
/* fill memory with range [min, max] */
for (i = 0; i < total; i++)
ptr[i] = min + i;
return (ptr);
}
