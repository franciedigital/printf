#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Print last digit of random number
 *
 * Decription: The program assigns random number to n each time
 * it is executed and print last digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n);
	else if (n < 6 && != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	return (0);
}
