#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Find and add the some od multiples of 5 and 3
 *
 * Return: Always 0
 */
int main(void)
{
	int a3 = 0, a5 = 0, sum3 = 0, sum5 = 0;

	while (a3 < 1024)
	{
		a3 = a3 + 3;
		if ((a3 % 5) != 0)
			sum3 = sum3 + a3;
	}

	while (a5 < 1024)
	{
		a5 = a5 + 5;
		sum5 = sum5 + a5;
	}
	printf("%d\n", (sum5 + sum3));

	return (0);
}
