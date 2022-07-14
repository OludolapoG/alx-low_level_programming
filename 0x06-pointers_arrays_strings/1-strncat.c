#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: a given source string
 * @dest: a given destination string
 * @n: a given integer
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}
	if (n > srclen)
	{
		n = srclen;
	}
	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
