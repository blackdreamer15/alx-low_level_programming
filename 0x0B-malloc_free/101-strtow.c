#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success), NULL (Error)
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, l, m;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			k++;
	}
	if (k == 0)
		return (NULL);
	array = malloc((k + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0' && j < k; i++)
	{
		if (str[i] != ' ')
		{
			for (l = 0; str[i + l] != '\0'; l++)
			{
				if (str[i + l] == ' ')
					break;
			}
			array[j] = malloc((l + 1) * sizeof(char));
			if (array[j] == NULL)
			{
				for (j--; j >= 0; j--)
					free(array[j]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < l; m++)
				array[j][m] = str[i + m];
			array[j][m] = '\0', j++, i += l;
		}
	}
	array[j] = NULL;
	return (array);
}
