#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * using the character `#` followed by a new line.
 * If n <= 0, only a new line character is printed.
 *
 * @size: The size of the square to be printed
 *
 * Return: void.
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');

			if (row == size - 1)
				continue;

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
