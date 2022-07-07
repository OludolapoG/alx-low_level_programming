#include "main.h"

/**
 * print_square - prints a square, then a new line
 * @size: is the size of the square
 * Return: nothing
 */
void print_square(int size)
{
	int hyt, bret;

	if (size > 0)
	{
		for (hyt = 0; hyt < size; hyt++)
		{
			for (bret = 0; bret < size; bret++)
				_putchar('#');

			if (hyt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
