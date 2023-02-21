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
	int a3 = 3, a5 = 5;

	while (a3 < 1024)
	{
		a3 = a3 + 3;
	}

	while (a5 < 1024)
	{
		a5 = a5 + 5;
	}
	printf("%d\n", (a5 + a3));

	return (0);
}
