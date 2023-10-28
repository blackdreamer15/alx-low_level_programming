#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *           It locates the first occurrence in the string
 *           `s` of any of the bytes in the string `accept`.
 *
 * @s: string to be searched
 * @accept: string containing the bytes to be searched
 *
 * Return: pointer to the byte in `s` that matches one of the
 *         bytes in `accept`, or `NULL` if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
