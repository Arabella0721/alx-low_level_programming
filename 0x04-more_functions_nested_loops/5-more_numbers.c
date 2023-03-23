#include "main.h"

/**
 * more_numbers - Prints the number 0-14 ten times
 */

void more_numbers(void)
{
	int n, count;

	for (count = 0; count <= 0; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
