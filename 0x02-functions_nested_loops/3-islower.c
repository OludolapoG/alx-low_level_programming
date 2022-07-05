#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: any input charcater
 * Return: 1, if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char alpha;
	int r = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha == c)
		r = 1;
	}

	return (r);

}
