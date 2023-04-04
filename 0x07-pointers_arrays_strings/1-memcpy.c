#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: destination of the memories being copied
  * @src: bytes from the memory area
  * @n: number of functions copied
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
