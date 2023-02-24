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
	int a, b = 1, c = 0;

	for (a = 1, a <= size; a++)
	{
		while (b <= (size - a))
		{
			_putchar(' ');
			b++;
		}

		while (c < a)
		{
			_putchar('#');
			c++;
		}
		c = 0;
		b = 1;
		_putchar('\n');
	}
}
