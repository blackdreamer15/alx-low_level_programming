#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or
 *         more chars in the string b that is not 0 or 1
 *         b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i, len;

	if (b == NULL)
		return (1);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' || b != '1')
			return (0);

		b <<= 1;
		num += b[i] - '0';
	}

	return (num);
}
