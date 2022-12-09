#include <stdio.h>
/**
 * main - main entry of the code
 * Description:  prints all
 * possible combinations of
 * single-digit numbers.
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + 48);
if (num != 9)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
