#include "3-calc.h"

/**
 * op_add - adds two numbers and returns the result
 * @a: first operand
 * @b: second operand
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers and returns the result
 * @a: first operand
 * @b: second operand
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers and returns the result
 * @a: first operand
 * @b: second operand
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers and returns the result
 * @a: first operand
 * @b: second operand
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers and returns the remainder
 * @a: first operand
 * @b: second operand
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
