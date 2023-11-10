#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 * Return: index of first element for which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, return_val;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		return_val = (*cmp)(array[i]);

		if (return_val == 1)
			return (i);
	}

	return (-1);
}
