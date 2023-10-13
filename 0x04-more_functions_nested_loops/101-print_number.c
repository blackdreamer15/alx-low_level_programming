#include "main.h"

/**
 * print_number - Write a function that prints an integer
 *
 * @n: Where n is the integer
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}

	if (a > 9)
	{

		print_number(a / 10);
	}

	_putchar('0' + (a % 10));
}
