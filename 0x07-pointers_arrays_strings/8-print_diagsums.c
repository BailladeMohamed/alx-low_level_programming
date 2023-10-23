#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the diagonals
 * @a: input array
 * @size: size of the array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum_a, sum_b, y;

	sum_a = 0;
	sum_b = 0;

	for (y = 0; y < size; y++)
	{
		sum_a += a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum_b += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum_a, sum_b);
}
