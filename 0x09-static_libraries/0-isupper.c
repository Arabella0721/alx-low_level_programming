#include "main.h"

/**
 * _isupper - Check for function that check uppercase characters
 * @c: The character to be checked
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
