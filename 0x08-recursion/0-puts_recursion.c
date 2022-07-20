#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line.
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
