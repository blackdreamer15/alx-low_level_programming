#include "main.h"

/**
 * void swap_int - swaps the values of two integers.
 *
 * @a: first pointer to an int
 * @b: second pointer to an int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
