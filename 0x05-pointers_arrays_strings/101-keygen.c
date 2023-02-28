#include "main.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random password
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, num = 8, random = 0;
	char numbers[10] = "0123456789";
	char letter[26] = "abcdefghijklmnoqprstuvwyzx";
	char c_letter[26] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[10] = "!@#$^&*?";
	char password[8];

	random = rand() % 4;
	srand((unsigned int)(time(NULL)));	
	for (i = 0; i < num; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = c_letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	putchar('\n');
	return (0);
}
