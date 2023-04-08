#include "main.h"

/**
  * _sqrt_recursion - function that returns
  * the natural square root of a number
  * @n: number of value
  * Return: return square root result
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n, 0));
	}
}
