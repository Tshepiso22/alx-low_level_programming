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
	int a;

	for (a = 0; a < size; a++)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
		_putchar('/n');
	}
}
