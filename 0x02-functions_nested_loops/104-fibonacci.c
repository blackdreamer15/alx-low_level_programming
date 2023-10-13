#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Return 0 if success
 */

int main(void)
{
	unsigned long int i;
	unsigned long int first_term = 1;
	unsigned long int second_term = 2;
	unsigned long int next_term;

	printf("%lu, ", first_term);
	printf("%lu, ", second_term);

	for (i = 3; i < 99; i++)
	{
		next_term = first_term + second_term;
		if (i == 98)
		{
			printf("%lu", next_term);
			continue;
		}
		printf("%lu, ", next_term);

		first_term = second_term;
		second_term = next_term;
	}
	printf("\n");

	return (0);
}
