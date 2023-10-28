#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @character: This parameter takes in a value and converts it to an integer
 *
 * Return: Returns 1 if lowercase otherwise 0
 */

int _islower(int character)
{
	if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}
