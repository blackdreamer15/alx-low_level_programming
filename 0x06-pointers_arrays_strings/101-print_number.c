#include "main.h"

/**
 * print_number - A function that prints an integer
 *
 * @n: Integer variable
 *
 * Return - void
 */

void print_number(int n)
{
	char negative_sign = '-';

	if (n < 0)
	{
		_putchar(negative_sign);
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
