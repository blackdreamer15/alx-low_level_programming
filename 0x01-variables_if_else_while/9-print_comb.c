#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all possible combinations of
 * single-digit numbers of base 10.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);

		if (num == 57)
			break;

		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
