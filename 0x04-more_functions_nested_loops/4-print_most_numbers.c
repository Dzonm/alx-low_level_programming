#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9. execept 2 and 4
 * Return: no return.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');
}

