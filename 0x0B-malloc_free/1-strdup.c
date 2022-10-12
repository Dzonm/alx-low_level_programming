#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prints the pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *strn;
	unsigned int i;

	strn = malloc(sizeof(*str));

	for (i = 0; str[i] != '\0'; i++)
		strn[i] = str[i];

	if (str == NULL)
		return (NULL);
	else
		return (strn);

	return (NULL);
}
