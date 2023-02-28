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
	int i = 0, random = 0;
	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char c_letter[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N];
	random = rand() % 4;
	
	for (i = 0; i < N; i++)
	{
		if (random == 1);
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
