#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * using the character `_` followed by a new line.
 * If n <= 0, only a new line character is printed.
 *
 * @n: Number of times the character `\` should be printed;
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
