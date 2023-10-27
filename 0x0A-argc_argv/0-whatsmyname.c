#include "main.h"

/**
 * main - prints the program's name, followed by a new line.
 *        If you rename the program, it will print the new
 * 		  name, without having to compile it again.
 * @argc: argument count
 * @argv: 1-D argument vector
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char const *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
