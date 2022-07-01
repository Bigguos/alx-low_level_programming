#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print if the number is greater, equal or lesser
 *
 * Return: (Success)
 */
int main(void)
{
int n;

srand(time(0))
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
}
if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
if (lastd < 6 && != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0);
}
return (0);
}
