#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *str = (char *)malloc(sizeof(char) * ac);

	if (str == NULL)
		return (NULL);

	for (int i = 0; i < ac; i++)
	{
		str[i] = av[i];
	}

	return (str);
}
