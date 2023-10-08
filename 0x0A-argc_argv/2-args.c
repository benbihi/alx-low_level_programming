#include <stdio.h>

/**
* main - a program that prints all arguments it receives.
* @argc: arguments count
* @argv: arguments vector
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	/* iterate through the argv array printing every element */
	int i;
	/* argc is the number of elements we have */
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

