#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: The allocated memory
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
