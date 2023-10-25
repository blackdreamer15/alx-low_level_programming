#include "main.h"

/**
 * factorial - Computes the factorial of a given number
 * @n: number to be computed
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n > 0)
		return (n * factorial(n - 1));

	else
		return (-1);
}
