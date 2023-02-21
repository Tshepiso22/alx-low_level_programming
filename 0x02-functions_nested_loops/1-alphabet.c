#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: 'Prints alphabets in lower case'
 *
 * Return: Always zero (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
