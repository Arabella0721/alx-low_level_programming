#include "main.h"

/**
  * _strstr - function that locates a substring
  * @haystack: the string to be found
  * @needle: substring to be located
  * Return: if substring is located, there will be a pointer at the beginning
  */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		j = 0;
		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
					return (haystack);
				j++;
			} while (haystack[j] == needle[j]);
		}
		haystack++;
	}
	return ('\0');
}
