#include "main.h"

/**
  * swap_int - functions that swaps the value of two integers
  * @a: The first integer to be swapped
  * @b: The second integer to be swapped
  * Return: void
  */
void swap_int(int *a, int *b)
	/* the functions that swaps the values of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
