#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwaays 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
