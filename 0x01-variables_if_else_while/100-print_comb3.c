#include <stdio.h>
/**
 * main - main entry of the code
 * Description:  prints all possible different
 * combinations of two digits.
 * Numbers must be separated by ,, followed by
 * a space
 * The two digits must be different 01 and 10 are
 * considered the same combination of the two
 * digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order,
 * with two digits
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in
 * your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
int num1;
int num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 1; num2 <= 9; num2++)
{
if (num2 != num1 && num1 < num2)
{
putchar('0' + num1);
putchar('0' + num2);
if (num1 + num2 != 17)
{
putchar(44);
putchar(32);
}
}

}
}
putchar('\n');
return (0);
}
