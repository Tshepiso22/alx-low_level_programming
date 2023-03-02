#include "main.h"

/**
 * print_number - Starts here
 * @n: Receives at operand
 *
 * Description: Print a number
 *
 * Return: void
 */
void print_number(int n)
{
	int tenth = 10, ten = 10;

	while (n > tenth)
	{
		tenth = tenth * 10;
	}
	while (n > ten)
	{
		_putchar((n / tenth) + '0');
		n = n % tenth;
		tenth = tenth / 10;
	}
	_putchar(n + '0');
}
