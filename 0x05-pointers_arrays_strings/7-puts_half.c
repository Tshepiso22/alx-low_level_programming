#include "main.h"

/**
 * puts_half - Entry point
 * @str: Receives a string to be outputted
 *
 * Description: Prints half if a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, a = strlen(str);

	if (strlen(str) % 2 == 0)
		n = strlen(str) / 2;
	else
		n = (strlen(str) / 2) + 1;
	for ( ; n < a; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
