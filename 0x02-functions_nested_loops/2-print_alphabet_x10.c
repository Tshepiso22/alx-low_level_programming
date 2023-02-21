#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: A void function thaf prints out lowercaae characters 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	}
	_putchar('\n');

}
