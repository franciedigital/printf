#include "main.h"

/**
x
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int c = 1;
	char l;

	while (c <= 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		c++;
	}
}

