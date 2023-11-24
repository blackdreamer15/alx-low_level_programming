#include "main.h"
#include "main.h"

/**
 * _pow - calculates (base raised to power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base rasied to power)
 */
unsigned long int power_calc(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int i;

	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in its binary notation
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag = 0;

	divisor = power_calc(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;

		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}

		else if (flag == 1 || divisor == 1)
			_putchar('0');

		divisor >>= 1;
	}
}
