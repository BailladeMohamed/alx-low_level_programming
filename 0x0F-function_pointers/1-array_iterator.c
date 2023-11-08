#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - it maps an array through a function pointer
 * @array: the array to iterate through it
 * @size: the number of elemnts in the array.
 * @action: pointer to the function that performs an actionn on an elemnt.
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
