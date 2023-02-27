#include "main.h"

/**
 * _strlen - Entry point
 *@s: Receives a string argument
 * Description: Finds out the size of a string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
