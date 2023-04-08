#include "main.h"

/**
  * _prime_true - functions calculates if it is a prime number using recursion
  * @n: number to be checked
  * @i: summarize function
  * Return: 1 if n is prime number, 0 if otherwise
  */
int _prime_true(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (_prime_true(n, i - 1));
	}
}

/**
  * is_prime_number -  function that returns 1 if the input integer
  * is a prime number, otherwise return 0
  * @n: number to be checked
  * Return: return 1 if n is prime number, 0 if otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_true(n, n - 1));
	}
}
