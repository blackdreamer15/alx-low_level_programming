#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
}
