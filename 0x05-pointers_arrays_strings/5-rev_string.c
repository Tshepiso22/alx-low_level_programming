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
	char b[n + 1];
	while (a < n)
	{
		b[a] = s[n];
	
		a++;
		n--;
	}
	s = b;
}
