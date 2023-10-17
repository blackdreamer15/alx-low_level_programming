#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line.
 * n is the number of elements of the array to be printed.
 * Numbers must be separated by comma, followed by a space.
 * The numbers should be displayed in the same order as they are
 * stored in the array. You are allowed to use printf.
 *
 * @b: second pointer to an int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
