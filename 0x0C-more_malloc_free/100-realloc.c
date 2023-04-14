#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function reallocates a memory block using malloc
 * @ptr: pointer to the memory formerly allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: Pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *j;
	unsigned int i, n = new_size;
	char *oldj = ptr;

	if (ptr == NULL)
	{
		j = malloc(new_size);
		return (j);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	j = malloc(new_size);
	if (j == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		j[i] = oldj[i];
	free(ptr);
	return (j);
}
