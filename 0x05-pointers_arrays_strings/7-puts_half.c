#include "main.h"

/**
 * puts_half - Entry point
 * *str: Receives as argument
 *
 * Description: Prints half if a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	for (n = strlen(str) / 2; n <= (strlen(str)); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}	
