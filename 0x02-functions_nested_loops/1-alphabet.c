#include <stdio.h>
/**
 *main - print lowercase alphabet
 *
 *Return: Always (Sucess)
 */

void print_alphabet(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
putchar('\n');
} 
