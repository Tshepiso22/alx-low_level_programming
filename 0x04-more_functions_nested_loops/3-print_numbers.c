#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Prints numbers from 0 to 9
 *
 * Return: Void
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
