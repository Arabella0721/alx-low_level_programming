#include "main.h"

/**
  * _strlen - functions that returns the length of a string
  * @s: represents the string to get the length
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
