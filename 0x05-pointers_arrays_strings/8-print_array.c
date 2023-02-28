#include "main.h"
#include "stdio.h"

/**
 * print_array - Entry point
 * @a: String of ints to be outputted
 * @n: Second
 *
 * Description: Prints numbers
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;
	
	for (b = 0; b < n - 1; b++)
	{
		printf("%d, ", a[b]);
	}
	printf("%d\n", a[b]);
}
