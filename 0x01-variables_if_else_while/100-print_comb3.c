#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints numbers separated by commausing putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		if (a == 8)
		{
			b = 10;
			a = 10;
		}

		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
		}
	putchar(8 + '0');
	putchar(9 + '0');
	putchar('\n');
	return (0);
}
