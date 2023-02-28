#include "main.h"

/**
 * _atoi - Converts a string to an int
 * @s: A string operand
 *
 * Description: A function that converts a string of numbers to type int
 *
 * Return: The converted string or 0 if none found
 */
int _atoi(char *s)
{
	int num = 0, sign = 1, a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
			num = num * -1;

		if (s[a] >= 48 && s[a] <= 57)
		{
			num = num * 10 - 48 + s[a];
		}
		a++;	
	}
	return (num * sign);
}
