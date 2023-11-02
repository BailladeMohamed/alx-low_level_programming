#include <stdlib.h>
#include "main.h"

/**
 * mc - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
void (*exit_ptr)(int) = exit;
{
	(*exit_ptr)(98);
}
}

return (ptr);
}
