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


	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	l = i + j + 1;
	s3 = malloc(l * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0, l = 0; s1[i] != '\0'; i++, l++)
		s3[l] = s1[i];

	for (l = l, j = 0; s2[j] != '\0'; l++, j++)
		s3[l] = s2[j];
	s3[l] = '\0';

	return (s3);
}
