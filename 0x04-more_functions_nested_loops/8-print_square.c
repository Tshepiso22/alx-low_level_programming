#include "main.h"

/**
 * print_square - Entry point
 * @size: Accepts 1 argument
 *
 * Description: Prints a square of #
 *
 * Return: Void
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; a < size; b++)
			_putchar('#');
		_putchar('\n');
	}
}
