#include "main.h"

/**
 * *string_toupper - changes a string's lowercase letters to uppercase
 * @s: a given string
 * Return: pointer to changed string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}
	return (start);
}
