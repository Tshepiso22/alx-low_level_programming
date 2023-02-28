#include "main.h"

/*
 * rev_string - Entry point
 * @s: Receives a string as argument
 *
 * Description: Reverses a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n = strlen(s), a = 0;
	int c = strlen(s) + 1;
	char b[c];

	while (a < n)
	{
		b[a] = s[n];
	
		a++;
		n--;
	}
	s = b;
}
