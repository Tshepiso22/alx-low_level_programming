#include "main.h"

/**
 * puts2 - Entry point
 * @str: Accepts a string as argument
 *
 * Description: Prints a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int n, a = strlen(str);

	for (n = 0; n < a; n += 2)
	{
		if (str[n] >= 48 && str[n] <= 57)
		{
			_putchar(str[n] + n);
		}
		else
			_putchar(str[n]);
	}
	_putchar('\n');

}
