#include "main.h"
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * Return: pointer should point to a newly allocated space in memory
  * which contains the contents of s1,
  * followed by the contents of s2, null if terminated
  */
char *str_concat(char *s1, char *s2)
{
	int j, k, str1, str2, str;
	char *answer;

	str1 = str2 = 0;
	if (s1 != NULL)
	{
		j = 0;
		while (s1[j++] != '\0')
			str1++;
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j++] != '\0')
			str2++;
	}
	str = str1 + str2;
	answer = (char *)malloc(sizeof(char) * (str + 1));
	if (answer == NULL)
		return (NULL);
	for (j = 0; j < str1; j++)
		answer[j] = s1[j];
	for (k = 0; k < str2; k++, j++)
		answer[j] = s2[k];
	answer[str] = '\0';
	return (answer);
}
