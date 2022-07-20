#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: given string
 * Return: string legth
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_chars - compares each character in the a given string
 * @s: given string
 * @a: forward loop
 * @b: backward loop
 * Return: 0
 */
int compare_chars(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare_chars(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a sstring is a palindrome
 * @s: given string
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_chars(s, 0, _strlen_recursion(s) - 1));
}
