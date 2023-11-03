#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, len;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	len = len1 + len2;
	result = calloc(sizeof(*result), len);
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			free(result);
			exit(98);
		}
		for (j = len2 - 1; j >= 0; j--)
		{
			if (!isdigit(argv[2][j]))
			{
				printf("Error\n");
				free(result);
				exit(98);
			}
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
			if (result[i + j + 1] > 9)
			{
				result[i + j] += result[i + j + 1] / 10;
				result[i + j + 1] %= 10;
			}
		}
	}
	if (*result == 0)
		i = 1;
	else
		i = 0;
	for (; i < len; i++)
		printf("%i", result[i]);
	printf("\n");
	free(result);
	return (0);
}
