#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of allocated bytes
 * Return: pointer to allocated memory, exit status 98 on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int a, b, out, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	out = a + n;

	output = malloc(out + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < out; i++)
		if (i < a)
			output[i] = s1[i];
		else
			output[i] = s2[i - a];

	output[i] = '\0';

	return (output);
}
