/**
 * _islower - Entry point
 *
 * Description: 'Checks if is lower case'
 *
 * Return: 1 if lower caae ans 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
