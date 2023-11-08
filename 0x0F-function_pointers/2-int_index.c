#include "function_pointers.h"
/**
 * int_index - looks for integer
 * or -1 if no match is found.
 * @array: The array to search or the int array
 * @size: The size of the array
 * @cmp: it compare the function
 * Return: index of matching elemnt, or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
