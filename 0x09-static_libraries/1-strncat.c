#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and src
 * does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: pointer to string to be appended
 * @src: pointer to string to append
 * @n: number of bytes to use from `src`
 *
 * Return: pointer to the resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
