/**
 * _islower - Entry point
 *
 * Description: 'Checks if is lower case'
 *
 * Return: Always zero (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
