#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * multiplier - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 * Return: the product big number string
 */
char *multiplier(char *s1, char *s2)
{
	char *result;
	int len1, len2, i, j, k, x;

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(i = x = len1 + len2);

	if (!result)
		printf("Error\n"), exit(98);
	while (i--)
		result[i] = 0;

	for (len1--; len1 >= 0; len1--)
	{
		if (!isdigit(s1[len1]))
		{
			free(result);
			printf("Error\n"), exit(98);
		}
		i = s1[len1] - '0';
		k = 0;

		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			if (!isdigit(s2[len2]))
			{
				free(result);
				printf("Error\n"), exit(98);
			}
			j = s2[len2] - '0';

			k += result[len1 + len2 + 1] + (i * j);
			result[len1 + len2 + 1] = k % 10;

			k /= 10;
		}
		if (k)
			result[len1 + len2 + 1] += k;
	}
	return (result);
}

/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *result;
	int i, j, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = strlen(argv[1]) + strlen(argv[2]);
	result = multiplier(argv[1], argv[2]);
	j = 0;
	i = 0;
	while (j < x)
	{
		if (result[j])
			i = 1;
		if (i)
			_putchar(result[j] + '0');
		j++;
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
