#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the first 50 fibo numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int n = 0, num1 = 1, num2 = 2;
	int a;

	for (a = 1; a < 50; a++)
	{
		n = num2;
		num2 = num2 + num1;
		num1 = n;

		printf("%u, ", num2);
	}
	printf("%u\n", num2);
	
	return (0);
}
