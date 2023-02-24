#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Receives one argument
 *
 * Description: Prints a diagonal line
 *
 * Return:Void
 */
void print_diagonal(int n)
{
	int a, b = 1;

	for (a = 1; a <= n; a++)
	{
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\');
		b = 1;
		_putchar('\n);
	}
}
