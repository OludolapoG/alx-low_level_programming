#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: any input number
 * Return: 1, if n > 0, 0, if n is 0, and -1, if n < 0
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	else
	{
		r = 0;
		_putchar('0');
	}
	return (r);
}
