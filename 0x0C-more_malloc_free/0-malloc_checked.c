#include <stdlib.h>
/**
* malloc_checked - Returns a pointer to the allocated memory
* @b: number of bytes to allocate
* Return: pointer to the allocated memory`
*/
void *malloc_checked(unsigned int b)
{
/* let's first create the pointer */
void *ptr;
/* now we try to allocate the required number of bytes */
ptr = malloc(b);
/* and we check that malloc succeeded. If notm exit with code 98 */
if (ptr == NULL)
	exit(98);
/* everything worked fine */
return (ptr);
}
