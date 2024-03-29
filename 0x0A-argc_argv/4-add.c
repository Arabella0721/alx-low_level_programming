#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - prints program that adds positive numbers
  * @argc: the argument count
  * @argv: the argument vector
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int j;
	unsigned int k, sum = 0;
	char *i;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			i = argv[j];

			for (k = 0; k < strlen(i); k++)
			{
				if (i[k] < 48 || i[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(i);
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
