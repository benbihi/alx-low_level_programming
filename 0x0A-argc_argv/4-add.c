#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that adds positive numbers.
* @argc: arguments count
* @argv: arguments vector
* Return: 0 if succeeded, 1 otherwise.
*/
int main(int argc, char *argv[])
{
	/* we'll initialize our final result with 0 to add on */
	int i, result = 0;

	/* start the loop at 1, remember that [0] is the program name */
	for (i = 1; i < argc; i++)
	{
		/* use atoi to convert the current number to a an int */
		int n = atoi(argv[i]);

		/* if atoi returned 0, that means we got an invalid characters */
		if (n == 0)
		{
			printf("Error\n");
			return (1);
		}

		/* update our result to have this number added */
		result += n;
	}

	/* print our final result and return success */
	printf("%d\n", result);
	return (0);
}

