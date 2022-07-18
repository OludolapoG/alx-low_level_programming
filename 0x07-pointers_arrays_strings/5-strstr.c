#include "main.h"

/**
 * _strstr - finds the first occurence f of the substring needle
 * in string haystack
 * @haystack: the string to be searched
 * @needle: substring  to be found
 * Return: pointer to beginning of located substring needle
 * or NULL if no substring found
 */
char *_strstr(char *haystack, char *needle)
{
	char *f, *t;

	while (*haystack != '\0')
	{
		f = haystack;
		t = needle;

		while (*haystack != '\0' && *t != '\0' && *haystack == *t)
		{
			haystack++;
			t++;
		}
		if (!*t)
			return (f);
		haystack = f + 1;
	}
	return (0);
}
