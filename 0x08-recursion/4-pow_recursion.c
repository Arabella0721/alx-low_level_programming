#include "main.h"

/**
  * _pow_recursion - function that returns the value of x
  * raised to the power of y
  * @x: value to be raised
  * @y: value to be powered
  * Return: return the result obtained
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
