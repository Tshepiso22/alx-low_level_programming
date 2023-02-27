#include "main.h"

/*
 * print_rev - Entry point
 * @*s: Receives a pointer as argument
 * 
 * Description: Prints a string in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{

	int n = strlen(s) - 1;

	for (n = 0; n >= 0; n--)
	{
		putchar(s[n]);
	}
}
