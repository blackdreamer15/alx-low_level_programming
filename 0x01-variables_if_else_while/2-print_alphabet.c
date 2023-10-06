#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all letters of the alphabet
 * using putchar and ASCII.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
