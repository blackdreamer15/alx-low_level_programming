#include "main.h"
#include <stdio.h>

/*
 * print_times_table - Prints the n times table starting with 0
 * @n: Value needed to find its multiples
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
				{
					printf("%d, ", result);
				else
				{
					printf("%3d", result);

					if (j != n)
						printf(", ");
				}
			}
			printf("\n");
		}
	}
}
