#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter<= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
