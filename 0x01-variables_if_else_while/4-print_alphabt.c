#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - It prints all letters of the alphabet
 * except q and e using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		if (letter != 101 && letter != 113)
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
