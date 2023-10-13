#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Description: prints a triangle using `#` and spaces to align the
 * triangle to the right side of the screen and followed by a new line
 * If size is 0 or less, the function should print only a new line
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');

		for (k = 1; k <= i; k++)
			_putchar('#');

		_putchar('\n');
	}
}
