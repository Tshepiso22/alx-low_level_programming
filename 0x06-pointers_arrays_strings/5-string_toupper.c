#include "main.h"

/**
 * string_toupper - Function starts here
 * @str: Receives as operand
 *
 * Description: Changes all lower caaes to upper cases
 *
 * Return: The changes string
 */
char *string_toupper(char *str)
{
	int a = 0, c = 26, b = 0;
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";

	while (str[b] != '\0')
	{
		for ( ; a < c; a++)
		{
			if (str[b] == lower[a])
				str[b] = uper[a];
		}
	}
	return (str);
}
