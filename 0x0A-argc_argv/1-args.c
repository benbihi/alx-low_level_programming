#include <stdio.h>
/**
* main - a program that prints the number of arguments passed into it.
* @argc: arguments count
* @argv: arguments vector
* Return: Always 0.
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	/* we tell the compiler that argv will be unused here */

	/* argc contains the length of argv or number of argument passed */
	printf("%d\n", argc);

	return (0);
}

