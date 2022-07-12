#include "main.h"

/**
 * rev_string - reverse a string
 * @s: an input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int str = 0, p = 0;
	char rev;

	while (s[str] != '\0')
		str++;

	while (p < str--)
	{
		rev = s[p];
		s[p++] = s[str];
		s[str] = rev;
	}
}
