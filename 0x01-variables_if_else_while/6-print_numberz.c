#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all single digit numbers of
 * base 10 starting from 0, followed by a new line using
 * putchar and ASCII.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
