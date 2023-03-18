#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	while (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar("\n");
	return (0);
}
