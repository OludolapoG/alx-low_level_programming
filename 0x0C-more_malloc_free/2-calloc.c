#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of memory elements
 * @size: byte size
 * Return: pointer to allocated memory, NULL on _calloc failure or if nmemb
 * / size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (m = 0; m < (nmemb * size); m++)
		p[m] = 0;

	return (p);
}
