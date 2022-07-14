#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first given string
 * @s2: second given string
 * Return: the difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
