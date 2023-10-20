#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte.
 *
 * @dest: pointer to string to be appended
 * @src: pointer to string to append
 *
 * Return: pointer to the resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	return (strncat(dest, src, strlen(src)));
}
