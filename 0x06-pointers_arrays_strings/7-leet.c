#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @str: Pointer variable
 *
 * Return: Exit with result
 */

char *leet(char *str)
{
	int i, j;
	char words[] = {'o', 'l', '+', 'e', 'a', '+', '+', 't'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; words[j] != '\0'; j++)
		{
			if ((str[i] == words[j]) || (str[i] == words[j] - 32))
			{
				str[i] = '0' + j;
			}
		}
	}

	return (str);
}
