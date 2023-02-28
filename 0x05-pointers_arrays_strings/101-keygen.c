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
	char numbers[] = "0123456789";
	char letter[27] = "abcdefghijklmnoqprstuvwyzx";
	char c_letter[27] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[11] = "!@#$^&*?";
	char password[num];

	random = rand() % 4;
	srand((unsigned int)(time(NULL)));	
	for (i = 0; i < numm; i++)
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
			password[i] = letter[rand();
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
