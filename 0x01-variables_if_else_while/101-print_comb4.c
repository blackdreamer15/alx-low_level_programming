#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all possible different
 * combinations of three-digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1, digit_2, digit_3;

	for (digit_1 = 48; digit_1 < 56; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 < 57; digit_2++)
		{
			for (digit_3 = digit_2 + 1; digit_3 < 58; digit_3++)
			{
				if (digit_1 != digit_2 && digit_1 != digit_3 && digit_2 != digit_3)
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar(digit_3);

					if (digit_1 == 55 && digit_2 == 56 && digit_3 == 57)
						break;

					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
