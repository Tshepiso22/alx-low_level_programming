#include "main.h"

/**
 * _strcmp - Function starts here
 * @s1: First operand
 * @s2: Second operand
 *
 * Description: Compare strings
 *
 * Return: Return an int
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0, a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] > s2[a])
			n += 15;
		else if (s1[a] < s2[a])
			n -= 15;
	}
	return (0);
}
