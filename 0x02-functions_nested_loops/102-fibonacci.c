#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Return 0 if successful
 */

int main(void)
{
	long int i;
	long int first_term = 1;
	long int second_term = 2;
	long int next_term;

	printf("%ld, ", first_term);
	printf("%ld, ", second_term);

	for (i = 3; i < 51; i++)
	{
		next_term = first_term + second_term;

		if (i == 50)
		{
			printf("%ld", next_term);
			continue;
		}
		printf("%ld, ", next_term);

		first_term = second_term;
		second_term = next_term;
	}
	printf("\n");

	return (0);
}
