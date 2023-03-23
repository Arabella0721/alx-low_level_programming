#include <stdio.h>

/**
 * main - This program finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int count;
	unsigned long fib_1 = 0, fib_2 = 1, sum;
	unsigned long fib_1_half1, fib_1_half2, fib_2_half1, fib_2_half2;
	unsigned long half_1, half_2;

	for (count = 0; count < 92; count++)
	{
		sum = fib_1 + fib_2;
		printf("%lu, ", sum);

		fib_1 = fib_2;
		fib_2 = sum;
	}

	fib_1_half1 = fib_1 / 10000000000;
	fib_2_half1 = fib_2 / 10000000000;
	fib_1_half2 = fib_1 % 10000000000;
	fib_2_half2 = fib_2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half_1 = fib_1_half1 + fib_2_half1;
		half_2 = fib_1_half2 + fib_2_half2;
		if (fib_1_half2 + fib_2_half2 > 9999999999)
		{
			half_1 += 1;
			half_2 %= 10000000000;
		}

		printf("%lu%lu", half_1, half_2);
		if (count != 98)
			printf(",");

		fib_1_half1 = fib_2_half1;
		fib_1_half2 = fib_2_half2;
		fib_2_half1 = half_1;
		fib_2_half2 = half_2;
	}
	printf("\n");
	return (0);
}
