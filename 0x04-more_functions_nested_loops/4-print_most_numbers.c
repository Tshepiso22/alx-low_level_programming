#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: Prints numbers except 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	char a = '0';

	for ( ; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			a++;
		_putchar(a);
	}
	_putchar('\n');
}
