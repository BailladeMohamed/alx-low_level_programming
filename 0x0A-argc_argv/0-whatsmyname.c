#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: arg count
 * @argv: arg array
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
