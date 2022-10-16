#include <stdio.h>

/**
 * main - print different combination of three digits
 *
 * Description: Using for loop to print combination of numbers
 :*
 * Return: Always 0
 */
int main(void)
{
	int a, b, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (d = 0; d <= 9; d++)
			{		
				if ((a != b && a != d && b != d ) && (a < b && b < d))
				{

					putchar(a + '0');
					putchar(b + '0');
					putchar(d + '0');

					if (a != 7 || b != 8 || d != 9)
				
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
