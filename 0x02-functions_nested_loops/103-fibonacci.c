#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Sum of fibo nums under 4 million
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long n = 0, num1 = 1, num2 = 2, sum = 0;

	while (num2 < 4000000)
	{
		if ((num2 % 2) == 0)
			sum = sum + num2;
		n = num2;
		num2 = num1 + num2;
		num1 = n;
	}

	printf("%lu\n", sum);

	return (0);
}
