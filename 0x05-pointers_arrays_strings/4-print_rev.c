#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: Pointer to use
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
