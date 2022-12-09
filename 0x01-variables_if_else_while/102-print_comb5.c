#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function entry
 * Description: prints all possible
 * combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
/*Initialization of counters*/
int counter1;
int counter2;
/*Initialization of first digits*/
int firstDigit_n1;
int firstDigit_n2;
/*Initialization of last digits*/
int lastDigit_n1;
int lastDigit_n2;
for (counter1 = 0; counter1 < 99; counter1++)
{
firstDigit_n1 = (counter1 / 10 + '0');
lastDigit_n1 = (counter1 % 10 + '0');
for (counter2 = 0; counter2 < 100; counter2++)
{
firstDigit_n2 = (counter2 / 10 + '0');
lastDigit_n2 = (counter2 % 10 + '0');
if (counter1 < counter 2)
{
putchar(firstDigit_n1);
putchar(lastDigit_n1);
putchar(' ');
putchar(firstDigit_n1);
putchar(lastDigit_n2);
if (counter1 != 98)
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
