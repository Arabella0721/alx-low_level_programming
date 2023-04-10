#include "main.h"
#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: the argument count
  * @argv: the argument vector
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
