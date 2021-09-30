
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function to be called
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
