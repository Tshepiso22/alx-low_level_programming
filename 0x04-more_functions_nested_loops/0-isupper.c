#include "main.h"

/**
 * _isupper - Entry point
 * @c: Accepts c aa argument
 *
 * Description: checks if char is upper
 *
 * Return: 1 if is upper and 0 if not
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
