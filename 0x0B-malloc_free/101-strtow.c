#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success), NULL (Error)
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, l, m, n;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			j++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				k++;
			}
		}
	}
	if (k == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (k + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0, l = 0; l < k && str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (m = i, j = 0; str[m] != '\0' && str[m] != ' '; m++)
				j++;
			array[l] = malloc(sizeof(char) * (j + 1));
			if (array[l] == NULL)
			{
				for (l--; l >= 0; l--)
					free(array[l]);
				free(array);
				return (NULL);
			}
			for (n = 0; n < j; n++, i++)
				array[l][n] = str[i];
			array[l++][n] = '\0';
		}
	}
	array[l] = NULL;
	return (array);
}
