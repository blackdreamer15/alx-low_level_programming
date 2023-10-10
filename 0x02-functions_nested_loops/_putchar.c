#include <unistd.h>

/**
 * _putchar - A function that prints the value of argument to stdout
 *
 * @letter: A parameter that captures the character to print
 *
 * Return: Return 1 if SUCCESS else -1 and errno is set appropriately
 */

int _putchar(char letter)
{
	return (write(1, &letter, 1));
}
