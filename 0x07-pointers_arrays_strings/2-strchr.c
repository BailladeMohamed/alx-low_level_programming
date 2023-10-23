#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @st: string to search
 * @character: char to locate
 *
 * Return: Pointer to the first occurrence of @character in @st,
 *         or NULL if not found
 */
char *_strchr(char *st, char character)
{
	int i = 0;

	while (st[i] != '\0')
	{
		if (st[i] == character)
			return (&st[i]);
		i++;
	}

	return (0);
}
