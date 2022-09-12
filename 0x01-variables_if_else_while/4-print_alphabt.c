#include <stdio.h>
/**
 * main - prints the stdout
 *
 * Return: 0 if successful
 */
int main(void)
{
	char lowerCase, not_e, not_q;

	not_e = 'e';
	not_q = 'q';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
	if (lowerCase != not_e && lowerCase != not_q)
	putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
