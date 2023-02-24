#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: Prints numbers from 1 to 14 10 times
 *
 * Return: Void
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}	
				_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
