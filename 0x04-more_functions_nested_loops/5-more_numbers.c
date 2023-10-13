#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, 10 times
 * followed by a new line using _putchar only three times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, first_digit, second_digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			first_digit = j / 10;
			second_digit = j % 10;
			if (first_digit != 0)
				_putchar(first_digit + '0');
			_putchar(second_digit + '0');
		}
		_putchar('\n');
	}
}
