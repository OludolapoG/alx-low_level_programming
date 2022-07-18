#include "main.h"

/**
 * _strpbrk - searches string s for the first occurence of any bytes f
 * in string accept
 * @s: strign to be searched
 * @accept: the sring containing target bytes
 * Return: pointer to the byte f in s matching the target byte t in accept
 * or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int f, t;

	for (f = 0; *(s + f) != '\0'; f++)
	{
		for (t = 0; *(accept + t) != '\0'; t++)
		{
			if (*(s + f) == *(accept + t))
				return (s + f);
		}
	}
	return ('\0');
}
