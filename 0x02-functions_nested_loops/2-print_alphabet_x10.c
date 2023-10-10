#include "main.h"

/**
 * print_alphabet_x10 - A function that prints all letters
 * of the alphabet in lowercase 10 times each followed by a new line
 *
 * Return - void
 */

void print_alphabet_x10(void)
{
	int letter, count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 97; letter < 123; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
