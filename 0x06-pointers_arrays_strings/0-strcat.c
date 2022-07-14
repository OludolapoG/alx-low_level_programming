#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a given destination string
 * @src: a given source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
