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
	char num[6] = "43071";	
	int a = 0, c = 5, b;

	while (str[a] != '\0')
	{
		for (b = 0; b < c; b++)
		{
			if (str[a] == upper[b] || str[a] == lower[b])
				str[a] = num[b];
		}
		a++;	
	}
	return (leet);
}
