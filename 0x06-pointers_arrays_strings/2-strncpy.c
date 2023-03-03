#include "main.h"

/**
 * _strncpy - Starts here
 * @dest: 1st
 * @src: 2nd
 * @n: 3rd
 *
 * Description: copies a string
 *
 * Return: A string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
