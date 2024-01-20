#include <unistd.h>

/**
 * _putchar - display the value of variable letter in stdout
 *
 * @letter: The character to print
 *
 * Return: Exit with 1 as SUCCESS
 *
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char letter)
{
	return (write(1, &letter, 1));
}
