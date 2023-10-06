#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all letters of the alphabet
 * in reverse order using putchar and ASCII.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 122; letter > 96; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
