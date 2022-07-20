#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line, to stdout
 * _putchar: function
 * @s: pointer to a string variable
 * Return: void
 */

void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
