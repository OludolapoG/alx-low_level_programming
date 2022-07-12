#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0)
 * @dest: pointer to destination string
 * @src: pont to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int pointer = 0;

	while (pointer >= 0)
	{
		*(dest + pointer) = *(src + pointer);
		if (*(src + pointer) == '\0')
			break;
		pointer++;
	}
	return (dest);
}
