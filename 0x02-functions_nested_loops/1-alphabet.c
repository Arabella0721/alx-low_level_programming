#include "main.h"

/**
 * print_alphabet - write alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
