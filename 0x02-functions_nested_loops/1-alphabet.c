#include "main.h"

/**
 * print_alphabet - A function that prints all letters
 * of the alphabet in lowercase followed by a new line
 *
 * Return - void
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
		_putchar(letter);
	_putchar('\n');
}
