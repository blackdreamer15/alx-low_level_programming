#include "main.h"

/**
 * main - prints the number of arguments passed
 *        into `main`, followed by a new line.
 * @argc: argument count
 * @argv: 1-D argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char const *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
