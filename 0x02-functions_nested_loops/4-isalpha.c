#include "main.h"

/**
 * _isalpha - checks if c is a letter, lowercase  or uppercase
 * @c: any input charcater
 * Return: 1, if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	char upper, lower;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
