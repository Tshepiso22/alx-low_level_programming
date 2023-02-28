#include "main.h"

/**
 * _strcpy - Entry point
 * dest: First operand
 * src: second operand
 *
 * Description: Pointer to a pointer
 *
 * Return: Pointer to dest
 * /
char *_strcpy(char *dest, char *src)
{
	dest = src;
	strcat(dest, "\0");
	return (dest);
}
