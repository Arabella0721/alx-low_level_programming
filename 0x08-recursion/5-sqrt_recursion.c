#include "main.h"

/**
  * sqrt_recursion_check - functions that checks the true recursion
  * @n: number needed to calculate the square root
  * @i: factor needed to summarize
  * Return: result of the square root
  */
int sqrt_recursion_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_recursion_check(n, i + 1));
	}
}

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
		return (sqrt_recursion_check(n, 0));
	}
}
