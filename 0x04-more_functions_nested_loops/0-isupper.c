
/**
 * _isupper- checks if c is lowercase
 * @c: character
 *  Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
