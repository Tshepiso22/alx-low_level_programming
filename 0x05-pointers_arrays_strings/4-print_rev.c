#include "main.h"

/*
 * print_rev - Entry point
 * @s: Receives a pointer as argument
 *
 * Description: Prints a string in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{

	int n = strlen(s) - 1;
	int a = 0;

	for ( ; n >= a; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
