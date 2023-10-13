#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * using the character `_` followed by a new line.
 * If n <= 0, only a new line character is printed.
 *
 * @n: Number of times the character _ should be printed.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
