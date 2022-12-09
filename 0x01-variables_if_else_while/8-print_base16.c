#include <stdio.h>
/**
 * main - main block
 * Description:  prints all the numbers
 * of base 16 in lowercase, followed by
 * a new line.
 * Return: 0
 */
int main(void)
{
char hexNum;
for (hexNum = '0'; hexNum <= '9'; hexNum++)
{
putchar(hexNum);
}
for (hexNum = 'a'; hexNum <= 'f'; hexNum++)
{
putchar(hexNum);
}
putchar('\n');
return (0);
}
