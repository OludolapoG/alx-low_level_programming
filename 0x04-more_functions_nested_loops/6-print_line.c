#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
