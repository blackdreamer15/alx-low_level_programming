#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the duplicated string, or NULL if insufficient
 *         memory was available.
 */
char *_strdup(char *str)
{
	return (strdup(str));
}
