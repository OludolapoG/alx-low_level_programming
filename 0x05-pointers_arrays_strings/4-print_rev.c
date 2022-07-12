#include "main.h"

/**
 * print_rev - prints a string in reverse, thne a new line
 * @s: an inout string
 * Return: nothing
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
		rev++;

	while (rev)
		_putchar(s[--rev]);

	_putchar ('\n');
}
