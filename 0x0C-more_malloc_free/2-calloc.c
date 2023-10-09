#include <stdlib.h>
/**
* _calloc - allocates memory for an array and sets it to 0
* @nmemb: number of members or elements
* @size: number of bytes for each element
* Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
/* create resulting pointer as char * so we can work with it */
char *ptr;
int total = nmemb * size, i;
/* we first make sure nothing equals 0 */
if (total == 0)
return (NULL);
/* allocating the total space needed (nmem * size) */
ptr = malloc(total);
if (ptr == NULL)
return (NULL);
/* fill memory with 0s */
for (i = 0; i < total; i++)
ptr[i] = 0;
/* return the pointer as a void pointer */
return ((void *) ptr);
}
