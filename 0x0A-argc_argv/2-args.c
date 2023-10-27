#include <stdio.h>
#include "main.h"

/**
 * main - prints all given arguments
 * @argc: the number of given arguments
 * @argv: an array of given arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int int_i;

	for (int_i = 0; int_i < argc; int_i++)
	{
		printf("%s\n", argv[int_i]);
	}

	return (0);
}
