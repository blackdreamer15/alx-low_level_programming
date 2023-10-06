#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all letters of the alphabet
 * in lowercase then in uppercase followed by a new line
 * and using putchar to a maximum of 3 times
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
		putchar(letter);
	for (letter = 65; letter < 91; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
