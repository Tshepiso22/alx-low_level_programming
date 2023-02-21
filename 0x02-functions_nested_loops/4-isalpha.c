/**
 * _isalpha - Entry point
 * @c: Receives c as argument
 *
 * Description: 'Checks if input is a character'
 *
 * Return: 1 if c is a character and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
