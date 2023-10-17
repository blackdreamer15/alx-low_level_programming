#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with
 * the first character, followed by a new line.
 *
 * @str: pointer to a char
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		if (i % 2 == 0 && str[i] != '\0')
			_putchar(str[i]);
	}
	_putchar('\n');
}
