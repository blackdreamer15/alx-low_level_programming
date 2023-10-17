#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * The function should print the second half of the string.
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 *
 * @str: pointer to a char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > (len - 1) / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
