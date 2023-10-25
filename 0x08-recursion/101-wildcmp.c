#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if the strings can be considered identical,
 *		   otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* if both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* if the characters are the same */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* if the character is a wildcard */
	if (*s2 == '*')
	{
		/* if the next character is a wildcard */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* if the next character is not a wildcard */
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
