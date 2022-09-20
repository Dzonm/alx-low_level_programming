#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal in n times
 * @n: should be printed
 * Return: no returns .
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i > n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
