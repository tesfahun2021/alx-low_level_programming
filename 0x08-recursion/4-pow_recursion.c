/**
 * _pow_recursion - finds power of x to y
 * @x: base
 * @y: exponenent
 * Return: x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
