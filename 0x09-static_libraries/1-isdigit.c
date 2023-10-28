#include "main.h"

/**
 * _isdigit - checks if parameter is a digit
 * @c: integer parameter for digit to check
 * Return: 1 if c is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
