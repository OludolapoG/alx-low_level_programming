#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to 2D integer array, NULL on failure or 0 / negative width
 * or height values
 */
int **alloc_grid(int width, int height)
{
	int **output, a, b;

	if (width < 1 || height < 1)
		return (NULL);

	output = malloc(height * sizeof(int *));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		output[a] = malloc(width * sizeof(int));
		if (output[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(output[a]);
			free(output);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			output[a][b] = 0;

	return (output);
}
