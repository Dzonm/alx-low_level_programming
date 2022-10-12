#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: pointer char variable
 * @s2: pointer char variable
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s3;

	s3 = malloc(*s1 + *s2);

	for (i = 0, l = 0; s1[i] != '\0'; i++, l++)
	{
		if (s1[i] == NULL)
			s3[l] = " ";
		s3[l] = s1[i];
	}
	for (l = l, j = 0; s2[j] != '\0'; l++, j++)
	{
		if (s1[j] == NULL)
			s3[l] = " ";
		s3[l] = s2[j];
	}
	if (s3 != NULL)
		return (s3);
	else
		return (NULL);
}
