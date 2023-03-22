#include "main.h"

/**
 * print_last_digit - Function that print last digit of a number
 * @n: Print last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
