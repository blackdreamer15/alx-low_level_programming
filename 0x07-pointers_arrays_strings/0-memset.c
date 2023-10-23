#include "main.h"

/**
 * _memset - A function that fills the first `n` bytes
 *			 of the memory area pointed to by `s` with
 *			 the constant byte `b`.
 * @s: pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
