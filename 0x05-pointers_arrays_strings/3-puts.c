#include "main.h"

/**
 * _puts - pritns a string, then a new line
 * @str: an input string
 * Return: nothing
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
