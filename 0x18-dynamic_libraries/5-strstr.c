#include "main.h"

/**
 * _strstr -  locates a substring. It finds the first occurrence
 *            of the substring `needle` in the string `haystack`.
 *            The terminating null bytes (\0) are not compared.
 *
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
