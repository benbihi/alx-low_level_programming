#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that multiplies two numbers.
* @argc: arguments count
* @argv: arguments vector
* Return: 0 if succeeded, 1 otherwise.
*/
int main(int argc, char *argv[])
{
	/* declaring the 2 numbers we need */
	int n1, n2;

	/* if we haven't got our 2 numbers (+ program name) */
	if (argc != 3)
	{
		printf("Error\n");
		/* return failure code 1 */
		return (1);
	}

	/*
	* convert the 2 numbers from strings to integers
	* as they are coming in the argv string array as strings
	* We can easily do so by calling the atoi() function from stdlib.h
	*/
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	/* print out their multiplication */
	printf("%d\n", n1 * n2);

	/* return success */
	return (0);
}

