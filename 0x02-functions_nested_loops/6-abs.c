#include "main.h"

/**
 * _abs - A function to find the absolute value of an integer
 * @num: A parameter capturing integer value
 *
 * Return: the absolute value
 */

int _abs(int num)
{
	if (num < 0)
		return(-num);
	else
		return(num);
}
