#include "main.h"
/**
 * print_chessboard - print chessboard.
 * @a: matrix
 *
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 7; b++)
		{
			_putchar(a[a][b]);
		}
		_putchar('\n');
	}
}
