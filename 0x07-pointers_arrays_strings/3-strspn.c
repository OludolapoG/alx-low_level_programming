#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted bytes b to be passed to s
 * Return: number of bytes n, in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, b, bool;

	for (n = 0; *(s + n) != '\0'; n++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + n) == *(accept + b))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (n);
}
