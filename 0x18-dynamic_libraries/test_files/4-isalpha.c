#include "main.h"

/**
 * _isalpha - A function that checks if param is an alphabetic character
 * @character: This parameter takes in a value and converts it to an integer
 *
 * Return: Returns 1 if params is an alphabetic character, 0 otherwise
 */

int _isalpha(int character)
{
	if (character >= 97 && character <= 122)
		return (1);
	else if (character >= 65 && character <= 90)
		return (1);
	else
		return (0);
}
