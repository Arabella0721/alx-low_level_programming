#include "main.h"

/**
  * factorial - function that returns the factorial of a given number
  * @n: number to be returned
  * Return: n factorial
  */
int factorial(int n)
{
	int j;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		j = n * factorial(n - 1);
	}
	return (j);
}
