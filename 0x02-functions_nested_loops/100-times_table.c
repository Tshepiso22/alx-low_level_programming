#include "main.h"

/**
 * print_times_table - Entry point
 * @n : Receives parameter n
 *
 * Description: Prints the n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b;
	
	for( a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if ((a * b) < 10)
			{
				_putchar((a * b) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');	
			}
			else if ((a * b) < 100 && (a * b) > 9)
			{
				_putchar((a * b) + '0')
				_putchar(',');
				_putchar(' ');
				_putchar(' ');	
			}
			else if ((a * b) < 1000 && (a *b) >= 100)
			{
				_putchar((a * b) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	return (0);
	
}d
