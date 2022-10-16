#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%i is positive\", n);
}
	if (n == 0)
{
	printf("%d is zero\", n);
}
	if (n < 0)
{
	printf("%i is negative\", n);
}
	return (0);
}
