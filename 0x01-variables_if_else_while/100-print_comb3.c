#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all possible different
 * combinations of two-digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 48; digit_1 < 57; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 < 58; digit_2++)
		{
			if (digit_1 != digit_2)
			{
				putchar(digit_1);
				putchar(digit_2);

				if (digit_1 == 56 && digit_2 == 57)
					break;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
