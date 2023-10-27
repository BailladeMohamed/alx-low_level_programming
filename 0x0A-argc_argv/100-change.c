#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the fewest coins needed to make change for a given amount
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int num, money, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (money = 0; money < 5 && num >= 0; money++)
	{
		while (num >= coins[money])
		{
			result++;
			num -= coins[money];
		}
	}

	printf("%d\n", result);
	return (0);
}
