#include "main.h"

/**
 * _islower - Check for character with lowercase
 * @c: The character to be checked
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
