#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string to be found
  * @accept: set bytes to be found
  * Return: pointer matches byte if  set is matched
  * null if no set is matched
  */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
