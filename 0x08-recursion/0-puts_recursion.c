#include "main.h"

/**
  * _puts_recursion - functions prints a string
  * @s: string to be used
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
