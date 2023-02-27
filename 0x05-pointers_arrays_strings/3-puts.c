#include "main.h"

/**
 * _puts - Entry point
 * @str: Receives as operand
 *
 * Description: Prints out a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int a;

	for (a = 0; a < _strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
