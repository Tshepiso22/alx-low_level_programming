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

	strcpy(b, s);
	while (a < strlen(s))
	{
		s[a] = b[n];
	
		a++;
		n--
	}
}
