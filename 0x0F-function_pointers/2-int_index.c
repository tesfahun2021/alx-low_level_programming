/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && cmp))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
