#include "main.h"

/**
 * _memset - fills the first n bytes of memory pointed to by s
 * with the byte b constant
 * @b: byte cosntant
 * @s: pointer to memory area b
 * @n: number of bytes filled
 * Return: pointer to dest s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;/*counter variable*/

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
