#include "main.h"

/**
 * main - adds positive numbers and prints the result followed by a new line.
 *		  If no number is passed to the program, print 0 followed by a newline.
 *		  If one of the number contains symbols that are not digits, print Error
 *		  followed by a new line, and return 1.
 * @argc: argument count
 * @argv: 1-D argument vector
 * Return: Exit with 0 if success. 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int i, j, len;
	int sum = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (isdigit(ptr[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
