#include "main.h"
/**
 * print_sign - Entry point
 * @n: The int n is receive as argument
 *
 * Description: 'Checks if ia lower, zero or higher
 *
 * Return: 1 if higher, 0 if equal and -1 if lower
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');	
		return (-1);
	}
}
