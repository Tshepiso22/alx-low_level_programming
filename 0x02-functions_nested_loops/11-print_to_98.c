#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: 'Prints numbers from n to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a = 98;
	if (n > a)
	{
		for( ; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');	
		}
	}
	else if (n < a)
	{
		for ( ;n < a; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	
	_putchar(a);
}	
