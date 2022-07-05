#include <stdio.h>

/**
 *main - print lowercase alphabet
 *
 *Return: Always (Sucess)
 */
#include "main.h"
void print_alphabet(void)

{
char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
putchar('\n');

return;
}
