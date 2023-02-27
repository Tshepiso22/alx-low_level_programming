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
	char b[strlen(s) + 1];
	int n = strlen(s), a = 0;

	while (a < strlen(s))
	{
		b[a] = s[n];
	
		a++;
		n--;
	}
	s = b;
}
