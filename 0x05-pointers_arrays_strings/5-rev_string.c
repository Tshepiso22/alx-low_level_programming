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
	char b[_strlen(s) + 1];
	int n = _strlen(s), a = 0;

	while (a < _strlen(s))
	{
		b[a] = s[n];
	
		a++;
		n--;
	}
	s = b;
}
