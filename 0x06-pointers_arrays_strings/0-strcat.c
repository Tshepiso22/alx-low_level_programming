#include "main.h"

/**
 * _strcat - Appends
 * @dest: First operand
 * @src: Second operand
 *
 * Description: Appends one string on the other
 *
 * Return: Tge appendes string
 */
char *_strcat(char *dest, char *src)
{
	int b = 0, a = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	while (src[a] != '\0')
	{
		dest[b] = src[a];
	b++;
	a++;
	}
	src[a] = '\0';

	return (dest);
}
