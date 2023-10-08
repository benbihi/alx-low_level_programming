#include <stdio.h>

/**
* main - a program that prints its name, followed by a new line.
* @argc: arguments count
* @argv: arguments vector
* Return: Always 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	/*
	* we add `__attribute__((unused))` before the argc parameter
	* as we will not use it in this program
	* telling the compiler to ignore it
	*/

	/* program's name is the first element in the arguments array */
	printf("%s\n", argv[0]);

	/* return success */
	return (0);
}

