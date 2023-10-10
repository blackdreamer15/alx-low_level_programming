#include "main.h"

/**
 * Description - Print all letters of the alphabet in lowercase
 * 10 times each followed by a new line
 */

int print_alphabet(void)
{
	int letter, count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 97; letter < 123; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
