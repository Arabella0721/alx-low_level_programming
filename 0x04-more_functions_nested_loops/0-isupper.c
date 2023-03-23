#include "main.h"

/**
 * _isupper - Check for function that check uppercase characters
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
