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
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if(a == 7 && b == 8)
			{
				a = 10;	
				b = 10;	
				c = 10;	
			}
			
			for (c = b +1; c < 10; c++)	
			{	
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');	
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar(7 + '0');
	putchar(8 + '0');
	putchar(9 + '0');
	putchar('\n');
	return (0);
}
