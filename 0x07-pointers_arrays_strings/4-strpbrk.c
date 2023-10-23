#include "main.h"

/**
 * _strpbrk - Searches a string for bytes
 * @s: String to search
 * @accept: Set of char to search for
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int pos;

	while (*s)
	{
		for (pos = 0; accept[pos]; pos++)
		{
			if (*s == accept[pos])
				return (s);
		}
		s++;
	}

	return ('\0');
}
