#include "main.h"

/**
 * print_triangle - draws a triangle then a new line
 * @size: is the triangle size
 * Return: nothing
 */
void print_triangle(int size)
{
	int hyt, base;

	if (size > 0)
	{
		for (hyt = 1; hyt <= size; hyt++)
		{
			for (base = size - hyt; base > 0; base--)
				_putchar(' ');

			for (base = 0; base < hyt; base++)
				_putchar('#');

			if (hyt == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
