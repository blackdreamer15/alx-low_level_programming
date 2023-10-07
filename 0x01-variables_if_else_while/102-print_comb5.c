#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all possible combinations of two two-digit numbers.
 * The numbers ranges from 0 to 99 and are separated by a space.
 * All numbers are printed with two digits. 1 should be printed as 01.
 * The combination of numbers is separated by comma, followed by a space and
 * printed in ascending order. 00 01 and 01 00 are considered as the same
 * combination of the numbers 0 and 1.
 * This is performed using putchar only for a maximum of 8 times.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 100; num_1++)
	{
		for (num_2 = num_1 + 1 ; num_2 < 100; num_2++)
		{
			if (num_1 != num_2)
			{
				putchar((num_1 / 10) + '0');
				putchar((num_1 % 10) + '0');
				putchar(32);
				putchar((num_2 / 10) + '0');
				putchar((num_2 % 10) + '0');

				if (num_1 == 98 && num_2 == 99)
					break;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
