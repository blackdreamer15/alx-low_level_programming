#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			;
	}

	str = malloc(sizeof(char) * (k + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
	}

	str[k] = '\0';

	return (str);
}
