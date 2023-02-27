#include "main.h"

/**
 * swap_int - Entry point
 * @a: First operand
 * @b: Second operand
 *
 * Description: Swaps two values
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
