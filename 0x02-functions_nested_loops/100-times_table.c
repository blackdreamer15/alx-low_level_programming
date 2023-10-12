#include "main.h"

/**
 * print_result - Function to prrint to the stdout
 *
 * @result: Value after multiplying
 * @j: Current iteration value
 */
void print_result(int result, int j);

/*
 * print_times_table - A function that prints the n times table,
 * starting with 0
 * @n: Value needed to find its multiples
 */
void print_times_table(int n)
{
	int i;
	int j;
	int total;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				total = i * j;

				print_result(total, j);

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}


/**
 * print_result - A function to print out to stdout
 *
 * @result: Value after multiplying
 * @j: Current loop iteration value
 */

void print_result(int result, int j)
{
	int first_digit, second_digit, third_digit;

	first_digit = result / 100;
	second_digit = (result % 100) / 10;
	third_digit = result % 10;

	if (j == 0)
		_putchar('0');

	else if (result < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + third_digit);
	}
	else if (result < 100)
	{
		_putchar(' ');
		_putchar('0' + second_digit);
		_putchar('0' + third_digit);
	}
	else
	{
		_putchar('0' + first_digit);
		_putchar('0' + second_digit);
		_putchar('0' + third_digit);
	}
}
