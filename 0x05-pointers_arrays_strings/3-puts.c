#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string to be printed
 * Return: no return
 */

void _puts(char *str)
{
	int i = 0;
	while (i => 1)
	{
		if (*(str + i) == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
