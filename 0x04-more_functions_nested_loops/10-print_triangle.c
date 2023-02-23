#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Receives as argument
 *
 * Description: Prints a triangle of #
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b = size - 1, c = 0;

	for (a = 1, a <= size; a++)
	{
		while (b != 0)
		{
			_putchar(' ');
			b--;	
		}

		while (c != size)
		{
			_putchar('#');
			c++;	
		}
		c = a;
		b = size - a - 1;
		_putchar('\n');
	}
}
