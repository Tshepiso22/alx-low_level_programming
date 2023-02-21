/**
 * _abs - Entry point
 * @a: The int a is received as argument
 *
 * Description: 'Takes an int argument and calculates its absolute value'
 *
 * Return: Returns the absolute value of the input
 */
int _abs(int a)
{
	if (a < 1)
		return (a * -1);
	else
		return (a);

}
