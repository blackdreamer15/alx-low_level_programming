#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer
 *
 * @s: String variable to be converted to integer
 *
 * Return: Exit with integer
 */

int _atoi(char *s)
{
	int val = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			val = -val;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

		s++;
	}

	return (val * num);
}
