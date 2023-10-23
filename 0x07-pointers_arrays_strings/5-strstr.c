#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to locate
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hey = haystack;
		char *kne = needle;

		while (*hey == *kne && *kne != '\0')
		{
			hey++;
			kne++;
		}

		if (*kne == '\0')
			return (haystack);
	}

	return (0);
}
