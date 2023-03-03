#include "main.h"


/**
 * rot13 - Start here
 * @str: Receives as argument
 *
 * Description: Encodes a string
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int a = 0, b = 0, value = 13;
	char upper1[14] = "ABCDEFGHIJKLM";
	char upper2[14] = "NOPQRSTUVWXYZ";
	char lower1[14] = "abcdefghijklm";
	char lower2[14] = "nopqrstuvwxyz";

	while (str[a] != '\0')
	{
		for ( ; b < value; b++)
		{
			if (str[a] == upper1[b] || str[a] == lower1[b])
				str[a] = lower2[b];
		}
		a++;	
	}
	return (str);
}
