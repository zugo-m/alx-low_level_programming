#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @(*a)[8]: two dimensional array
 *
 */
void print_chessboard(char (*a)[8]);
{
	int n, m;

	for (n = 0, n < 8, n++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}



