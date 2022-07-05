#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the input number
 * Return: the value of the last digit of the given number
 */
int print_last_digit(int i)
{
	int ld;

	if (i < 0)
		ld = -i % 10;
	else
		ld = i % 10;
	_putchar(ld + '0');
	return (ld);
}
