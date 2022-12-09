#include <stdio.h>
/**
 * main - main block
 * Description:  prints alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char letter;
for(letter='a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for(letter='A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
