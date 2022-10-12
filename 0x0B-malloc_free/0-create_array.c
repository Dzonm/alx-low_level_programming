#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints the size of an array of chars.
 * @size: size of the array.
 * @c: character variable
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (a);
}
