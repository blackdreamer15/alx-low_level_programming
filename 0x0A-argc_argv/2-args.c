#include "main.h"

/**
 * main - prints all arguments received by `main`.
 *        All arguments should be printed, including
 *        the first one. Only print one argument per
 *        line, ending with a new line.
 *
 * @argc: argument count
 * @argv: 1-D argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
