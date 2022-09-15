#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, mpl;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			mpl = a * b;
			_putchar(',');
			_putchar(' ');
			if (mpl <= 9)
			{
				_putchar(' ');
				_putchar(mpl + '0');
			}
			else
			{
				_putchar((mpl / 10) + 48);
				_putchar((mpl % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
