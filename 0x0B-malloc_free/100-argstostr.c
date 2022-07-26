#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all program arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string / NULL on failure, NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *output;
	int ctr, a, b, arr;

	if (ac == 0)
		return (NULL);

	for (ctr = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (b = 0; av[a][b] != '\0'; b++)
			ctr++;
		ctr++;
	}

	output = malloc((ctr + 1) * sizeof(char));

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (a = b = arr = 0; arr < ctr; b++, arr++)
	{
		if (av[a][b] == '\0')
		{
			output[arr] = '\n';
			a++;
			arr++;
			b = 0;
		}
		if (arr < ctr - 1)
			output[arr] = av[a][b];
	}
	output[arr] = '\0';

	return (output);
}
