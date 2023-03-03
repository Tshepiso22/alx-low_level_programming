#include "main.h"

/**
 * _strncat - Where it all begins
 * @dest: Firts operand
 * @src: Secon
 * @n: Third
 *
 * Description: Appends one sting on another by n contents
 *
 * Return: The appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0' && n > b)
	{
		dest[a] = src[b];

		a++;
		b++;
	}
	return (dest);
}
