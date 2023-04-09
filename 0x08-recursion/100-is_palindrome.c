#include "main.h"

/**
 * _strlen_recursion - This function prints the length of a string.
 *
 * @s: String parameter to be printed
 *
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * palindrome_check - checks function if string is palindrome
 * @s: string value
 * @i: left index
 * @j: right index
 * Return: return 1 if s is palindrome,0 if otherwise
 */
int palindrome_check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (palindrome_check(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks function if string is palindrome
 * @s: string value
 * Return: if n is prime, return 1, 0 if otherwise
 */
int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, _strlen_recursion(s) - 1));
}
