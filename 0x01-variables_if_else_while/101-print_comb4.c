#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints
 * all possible different combinations of
 * two digits
 * Numbers must be separated by ,, followed
 * by a space
 * The two digits must be different 01 and 10
 * are considered the same combination of the
 * two digits 0 and 1
 * Print only the smallest combination of two
 * digits
 * Numbers should be printed in ascending order,
 * with two digits
 * You can only use the putchar function (every
 * other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum
 * in your code
 * You are not allowed to use any variable of
 * type char
 * All your code should be in the main function
 * Return: 0 (Success)
 */
int main(void)
{
int x;
int y;
int z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
for (z = 0; z <= 9; z++)
{
if (z != y && y != x && x < y && y < z)
{
putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
if ((x + y + z) != (9 + 8 + 7))
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
