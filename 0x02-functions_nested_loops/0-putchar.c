#include <stdio.h>

/**
 *main - prints to string
 *
 *description: Prints
 */

int main(void)
{
char prin[] = "_putchar";
int i = 0;

while (prin[i] != '\0')
{
putchar(prin[i]);
i++;
}
putchar('\n');

return (0);
}
