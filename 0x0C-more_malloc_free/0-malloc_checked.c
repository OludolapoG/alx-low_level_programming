#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: bytes allocated
 * Return: pointer to allocated memory, exit with status value 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
