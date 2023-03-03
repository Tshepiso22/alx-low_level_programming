#include "main.h"

/**
 * cap_string - Function starts here
 * @str: Receives as argument
 *
 * Description: Capitalises a string
 *
 * Return: Updated string
 */
char *cap_string(char *)
{
	int a = 0, g, d = 26, c = 10;
	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[27] = "abcdefghijklmnopqrstuvwxyz";
	char sep[11] = ".!?;(){}, ";

	while (str[a] != '\0')
	{
		for (b = 0; b < c; b++)
		{
			if (str[a] == sep[b])
			{
				for (g = 0; g < d; g++)
				{
					if (str[a + 1] == lower[g])
						str[a + 1] = upper[g];
				}
			}
		}
	}
	return (str);
}


