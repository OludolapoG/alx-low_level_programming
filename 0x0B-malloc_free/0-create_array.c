#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @c: character constant
 * @size: size of the array
 * Return: pointer to the array, or NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int s;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		p[s] = c;

	return (p);
}
