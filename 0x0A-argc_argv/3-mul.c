#include "main.h"

/**
 * main - print the result of the multiplication of
 *        two numbers, followed by a new line.
 * @argc: argument count
 * @argv: 1-D argument vector
 * Return: 0 if Success, otherwise 1.
 */
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
