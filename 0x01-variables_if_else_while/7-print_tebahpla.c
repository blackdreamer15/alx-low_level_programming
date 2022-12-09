#include <stdio.h>
/**
 * main - main block
 * Description:  prints the lowercase
 * letters of th ealphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
