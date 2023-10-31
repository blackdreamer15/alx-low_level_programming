#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid_ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_ptr = (int **)malloc(sizeof(int *) * height);

	if (grid_ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid_ptr + i) = (int *)malloc(sizeof(int) * width);

		if (*(grid_ptr + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(grid_ptr + j));
			free(grid_ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			*(*(grid_ptr + i) + j) = 0;
	}

	return (grid_ptr);
}
