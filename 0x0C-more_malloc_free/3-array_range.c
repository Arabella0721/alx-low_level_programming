#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Function creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: Pointer to the new array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
