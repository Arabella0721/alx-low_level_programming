#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 but multiples of 3,
 * Fizz is printed in place of the number, Buzz in place of
 * multiples, of 5 and FizzBuzz for both 5 and 3.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf('\n');

	return (0);
}
