#include "main.h"

/**
 * times_table -  Prints times table.
 * Return: number
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{
			int p = i * j;

			if (p < 10)
				_putchar(' ');
			else if (p > 9)
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
}
}
