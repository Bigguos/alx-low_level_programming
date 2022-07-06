#include <stdio.h>

/**
 * print_to_98(int n)
 * @n: The integer to be checked
 *
 * Return: no return
 * */

void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
printf("%d\n", n);
}
