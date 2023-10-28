#include "main.h"

/**
 * _strchr - locates a character in a string. It finds the first
 *		     occurrence of the character `c` in the string `s`.
 *		     The terminating null byte (\0) is considered to be
 *		     part of the string.
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of
 *         the character `c` in the string `s`,
 *         or `NULL` if the character is not found.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
