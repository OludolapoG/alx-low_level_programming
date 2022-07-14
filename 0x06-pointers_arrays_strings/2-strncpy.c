#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: a given destination string
 * @src: a given soure string
 * @n: a given integer
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
	{
		n = srclen;
	}
	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (temp);
}
