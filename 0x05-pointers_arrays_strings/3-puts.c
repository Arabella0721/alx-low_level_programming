#include "main.h"

/**
  * _puts - function that prints a string
  * @str - the string to print
  * Return: void
  */
void _puts(char *str)
{
	int *str = 0;

	for (; *str != '\0'; str++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
