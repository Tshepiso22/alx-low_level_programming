#include "main.h"

/**
 * print_number - Entry point
 * @n: Function receives as argument
 *
 * Description: Prints out intergers
 *
 * Return: Void
 */
void print_number(int n)
{
	int c;
	
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	if (n < 10 && n >= 0)
		_putchar(n + '0');
	else if (n > 9 && n < 100)
	{
		_putchar((n % 10) + '0');
		_putchar((n / 10) + '0');
	}
	else if (n > 99 && n < 1000)
	{
		c = n % 10;
		n = n / 10;
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(c + '0');
	}	

}
