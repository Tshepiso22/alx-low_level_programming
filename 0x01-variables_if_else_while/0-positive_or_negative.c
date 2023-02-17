#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'Checks if a random number is positive or negative'
 *
 * Return: Always zero (Success)
 */
int main(void)
{
	int n, n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is greater than zero", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);

	return (0);
}
