#include "main.h"

/*
 * rev_string - Reverses a string
 * @s: Receives a string as argument
 *
 * Description: Reverses a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n = strlen(s) - 1, a = 0;
	int c = 0;
	char *b = s;

	while (c <= n)
	{
		s[a] = b[n];
		a++;
		n--;
	}
}
