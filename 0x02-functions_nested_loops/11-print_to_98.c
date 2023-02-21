#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: Receivs this as argument
 *
 * Description: 'Prints numbers from n to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a = 98;

	if (n > a)
	{
		for ( ; n > 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	else if (n < a)
	{
		for ( ; n < a; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}

	printf("%d\n", a);
}
