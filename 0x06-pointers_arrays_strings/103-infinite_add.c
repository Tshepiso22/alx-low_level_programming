#include "main.h"

/**
 * infinite_add - Starts here
 * @n1: 1st
 * @n2: 2nd
 * @r: 3rd
 * @size_r: 4th
 *
 * Description: Adds numbers
 *
 * Return: String
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0;

	while (n1[a] != '\0' || n2[a] != '\0')
	{
		a++;
	}
	if (a > size_r)
		return (0);
	for ( ; a > b; b++)
	{
		r[b] = n1[b] + n2[b];
	}
	return (r);
}
