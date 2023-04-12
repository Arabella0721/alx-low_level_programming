#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: number of array element
  * @c: char
  * Return: return pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		array[j] = c;
	}
	return (array);
}
