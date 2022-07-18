#include "main.h"

/**
 * print_chessboard - prrints a chessboard
 * @a: given pointer
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int r, c = 0;/*row and column respectively*/

	for (r = 0; r < 64; r++)
	{
		if (r % 8 == 0 && r != 0)
		{
			c = r;
			_putchar('\n');
		}
		_putchar(a[r / 8][r - c]);
	}
	_putchar('\n');
}
