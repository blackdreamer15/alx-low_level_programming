#include "main.h"
#include <string.h>

/**
 * rev_string - It reverses a string.
 *
 * @s: Pointer to string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int temp;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
