#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints without puts or printf'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *b = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		fputs(b, stdout);
		return (0);
}
