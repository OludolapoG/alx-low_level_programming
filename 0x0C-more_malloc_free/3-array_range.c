#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to new array, NULL on failure or if min > max
 */
int *array_range(int min, int max)
{
	int *arr, n;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (n = 0; min <= max; n++, min++)
		arr[n] = min;

	return (arr);
}
