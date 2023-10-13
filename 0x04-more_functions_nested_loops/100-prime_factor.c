#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Find and print the largest prime factor of the
 * number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long i, largest_factor;

	float square_root = sqrt(number);

	for (i = 1; i <= square_root; i++)
	{
		if (number % i == 0)
			largest_factor = number / i;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
