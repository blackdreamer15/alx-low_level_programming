#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of
 *         `s` which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
