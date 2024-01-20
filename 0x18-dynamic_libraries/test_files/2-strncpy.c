#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: pointer to string to copied to
 * @src: pointer to string to be copied
 * @n: number of bytes to use from `src`
 *
 * Return: pointer to the resulting string `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
