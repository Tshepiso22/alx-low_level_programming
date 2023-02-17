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

	for(a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}	
	}

	return (0);
}
