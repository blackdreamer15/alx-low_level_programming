#include "main.h"

/**
 * main - entry ponint of program
 *
 * Description: A program that prints "_putchar", followed by a new line
 *
 * Return: Always exit code 0 as success
 */

int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
