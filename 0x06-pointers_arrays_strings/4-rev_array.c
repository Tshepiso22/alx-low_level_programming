#include "main.h"

/**
 * reverse_array - Function starts here
 * @a: First operand
 * @n: Secind operand
 *
 * Description: Reverses a string
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i = 0, b = 0, c = 0;

	while (i < n)
	{
		c = a[b];
		a[b] = a[n - 1];
		a[n - 1] = c;

		n--;
		b++;
	}
}

