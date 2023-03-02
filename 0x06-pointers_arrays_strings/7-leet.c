#include "main.h"

/**
 * leet - Starts here
 * @str: Receives string
 *
 * Description: Encodes a string
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	char upper[6] = "AEOTL";
	char lower[6] = "aeotl";
	int num[5] = {4, 3, 0, 7, 1};
	int a = 0;

	while (str[a] != '\0')
	{
		for (b = 0; b < c; b++)
		{
			if (str[a] == upper[a] || str[a] == lower[a])
				str[a] = num[a];
		}
	}
	return (leet);
}
