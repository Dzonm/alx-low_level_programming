#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the resulting string @dest
 *
 */

char *_strcat(char *dest, char *src)
{
	char *s;
	int a, b, c, d;

	if (dest == 0)
		dest = "";
	if (src == 0)
		src = "";
	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
		;
	s = malloc(a * sizeof(*dest) + b * sizeof(*src));
	if (s == 0)
		return (NULL);
	for (c = 0, d = 0; c < a + b; c++)
	{
		if (c < a)
			dest[c] = dest[c];
		else
			dest[c] = src[d++];
	}
	return (dest);
}
