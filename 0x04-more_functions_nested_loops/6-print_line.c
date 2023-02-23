#include "main.h"

/**
 * print_line - Entry point
 * @n: Accepts 1 argument
 *
 * Description: Prints a line
 *
 * Return: Void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');

	_putchar('\n');

}
