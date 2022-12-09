#include <stdio.h>
/**
 * main - main function
 * Description: prints all single
 * digit numbers of base 10 starting
 * from 0, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num <= 10; num++)
{
printf("%i", num);
}
printf('\n');
return (0);
}
