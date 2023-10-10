#include "main.h"

/**
 * print_sign - A function to print the sign of a number
 *
 * @n: A parameter to capture an integer value
 *
 * Return: Returns 1 if number is positive, returns 0 if number equals 0,
 * and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
