#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar followed by a new line.
 *
 * description: the _putchar
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
