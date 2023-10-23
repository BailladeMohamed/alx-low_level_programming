#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @st: string to search
 * @character: char to locate
 * Return: Always 0 (Success)
 */
char *_strchr(char *st, char character)
{
	int i = 0;

	for (; st[i] >= '\0'; i++)
	{
		if (st[i] == character)
			return (&st[i]);
	}

	return (0);
}
