#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers
* @width: width of array
* @height: height of array
* Return: pointer to the 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
		int **array, j, k;
		int arr = width * height;

		if (arr <= 0)
			return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	return (NULL);
	for (j = 0; j < height; j++)
	{
		array[j] = (int *)malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			array[j][k] = 0;
	return (array);
}

