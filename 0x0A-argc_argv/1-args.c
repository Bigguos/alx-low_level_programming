#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - Success
 */

int main(int)
{
	printf("%d\n", argc - 1);
	return (0);
}
