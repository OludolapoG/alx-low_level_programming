#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2D grid previously created by the alloc_grid function
 * @grid: 2D integer array
 * @height: grid height
 * Return: nothing
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into two words
 * @str: given string
 * Return: pointer to an array of strings or NULL on failure, NULL if
 * str == NULL / ""
 */
char **strtow(char *str)
{
	char **output;
	unsigned int ctr, height, a, b, arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (ctr = height = 0; str[ctr] != '\0'; ctr++)
		if (str[ctr] != ' ' && (str[ctr + 1] == ' ' || str[ctr + 1] == '\0'))
			height++;
	output = malloc((height + 1) * sizeof(char *));
	if (output == NULL || height == 0)
	{
		free(output);
		return (NULL);
	}
	for (a = arr = 0; a < height; a++)
	{
		for (ctr = arr; str[ctr] != '\0'; ctr++)
		{
			if (str[ctr] == ' ')
			arr++;
			if (str[ctr] != ' ' && (str[ctr + 1] == ' ' || str[ctr + 1] == '\0'))
			{
				output[a] = malloc((ctr - arr + 2) * sizeof(char));
				if (output[a] == NULL)
				{
					ch_free_grid(output, a);
					return (NULL);
				}
				break;

			}
		}
		for (b = 0; arr <= ctr; arr++, b++)
			output[a][b] = str[arr];
		output[a][b] = '\0';
	}
	output[a] = NULL;
	return (output);
}
