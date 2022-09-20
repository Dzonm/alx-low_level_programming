#include "main.h"
#include <string.h>

/**
 * rev_string - reverse the string in the reversed order.
 * @s: input declared.
 * Return: no returns.
 */

void rev_string(char *s)
{
	char a;
	int i, b;

	b = strlen(s);
	for (i = 0; i < b / 2; i++)
	{
		a = s[i];
		s[i] = s[b - 1 - i];
		s[b - 1 - i] = a;
	}
}
