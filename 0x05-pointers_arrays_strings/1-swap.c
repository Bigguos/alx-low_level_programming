#include "main.h"

/**
 * swap - swap value of two integers
 * @a: the first integer
 * @b: the second intege
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
