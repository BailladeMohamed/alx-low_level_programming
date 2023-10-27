#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts str to int
 * @s: string to be converted
 *
 * Return: the int converted from str
 */
int _atoi(char *s)
{
	int index = 0;
	int digit_count = 0;
	int number = 0;
	int string_length = 0;
	int flag = 0;
	int current_digit = 0;

	while (s[string_length] != '\0')
		string_length++;

	while (index < string_length && flag == 0)
	{
		if (s[index] == '-')
			++digit_count;

		if (s[index] >= '0' && s[index] <= '9')
		{
			current_digit = s[index] - '0';
			if (digit_count % 2)
				current_digit = -current_digit;
			number = number * 10 + current_digit;
			flag = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			flag = 0;
		}
		index++;
	}

	if (flag == 0)
		return (0);

	return (number);
}

/**
 * main - multiplies two numbers
 * @argc: arg count
 * @argv: arg array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
