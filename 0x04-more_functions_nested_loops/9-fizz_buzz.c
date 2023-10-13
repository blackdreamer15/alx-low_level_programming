#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers from 1 to 100, but replace multiples
 * of 3 with Fizz, multiples of 5 with Buzz, and multiples of both
 * with FizzBuzz.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");

		else if (i % 5 == 0)
			printf("Buzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
