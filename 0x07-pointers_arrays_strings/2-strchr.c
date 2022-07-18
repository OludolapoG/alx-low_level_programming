#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string in which to loacte character c
 * Return: pointer to the first occurence of c in string s,
 * or NULL, if character not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
