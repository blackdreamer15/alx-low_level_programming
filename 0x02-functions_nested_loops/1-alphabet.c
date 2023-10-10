#include "main.h"

/**
 * Description - Print all letters of the alphabet in lowercase
 * followed by a new line
 */

int print_alphabet(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
		_putchar(letter);
	_putchar('\n');
}
