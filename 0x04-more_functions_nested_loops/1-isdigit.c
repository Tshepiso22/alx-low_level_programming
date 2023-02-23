#include "main.h"

/**
 * _isdigit - Entry point
 * @c: Accepts c as argument
 *
 * Description: Checks if is a digit
 *
 * Return: 1 if is a digit and zero if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
