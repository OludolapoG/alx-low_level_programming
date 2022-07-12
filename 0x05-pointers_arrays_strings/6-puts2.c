#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, then a new line
 * @str: the input string
 * Return: nothing
 */
void puts2(char *str)
{
	int word = 0;

	while (word >= 0)
	{
		if (str[word] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (word % 2 == 0)
		{
			_putchar(str[word]);
		}
		word++;
	}
}
