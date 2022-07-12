#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0)
 * @dest: pointer to destination string
 * @src: pont to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *word = dest;

	while (*src)
		*dest++ = *src++;
	return (word);
}
