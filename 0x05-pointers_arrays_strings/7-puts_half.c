#include "main.h"

/**
 * puts_half - prints half a string, then a new line
 * @str: the input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int word = 0, half = 0;

	while (half >= 0)
	{
		if (str[word] == '\0')
			break;
		word++;
	}

	if (word % 2 == 1)
	{
		half = word / 2;
	}
	else
	{
		half = (word - 1) / 2;
	}

	for (half++; half < word; half++)
		_putchar(str[half]);
	_putchar('\n');
}
