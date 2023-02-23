#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Finds and print out the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	double num1 = 1, n = 0, num2 = 2;
	int a;

	printf("%f, %f, ", num1, num2);
	for (a = 1; a < 98; a++)
	{
		n = num2;
		num2 = num1 + num2;
		num1 = n;

		printf("%f, ", num2);
	}
	printf("%f\n", num2);

	return (0);
}
