#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the coverted number, or 0 if b is NULL, here is one or more chars in
 * the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base2;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += base2;
		}
	}

	return (i);
}
