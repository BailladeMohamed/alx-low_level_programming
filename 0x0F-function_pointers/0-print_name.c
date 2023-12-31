#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -it prints a name using a function pointer
 * @name: string to print a name
 * @f: pointer to the function that prints the namee
 * Return: nothing or NULL
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
