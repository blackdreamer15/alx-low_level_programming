#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all single digit numbers
 * of base 16, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexDigit;
	int i;

	for (i = 0; i < 16; i++)
	{
		hexDigit = (i < 10) ? ('0' + i) : ('a' + i - 10);
		putchar(hexDigit);
	}
	putchar('\n');

	return (0);
}
