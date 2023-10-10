#include "main.h"

/**
 * main - Entry point
 *
 * Description - Print all letters of the alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}
