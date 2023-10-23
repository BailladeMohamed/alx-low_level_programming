#include "main.h"
/**
 * print_chessboard - Prints a chessboard
 * @a: Array representing the chessboard
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int chess;
	int board;

	for (chess = 0; chess < 8; chess++)
	{
		for (board = 0; board < 8; board++)
			_putchar(a[chess][board]);
		_putchar('\n');
	}
}
