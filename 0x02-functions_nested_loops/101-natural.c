#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: WHen all natural numbers below 10 are listed
 * and are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 * Write a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded), followed
 * by a new line
 *
 * Return: Always return 0 (Successful exit)
 */

int main(void)
{
	int num1 = 3;
	int num2 = 5;
	int sum = 0;
	int i;
	int j;

	for (i = 0; (i * num1) < 1024; i++)
	{
		sum = sum + (i * num1);
	}

	for (j = 0; (j * num2) < 1024; j++);
	{
		if ((j * num2) % 3 != 0)
			sum = sum + (j * num2);
	}

	printf("%d\n", sum);

	return (0);
}
