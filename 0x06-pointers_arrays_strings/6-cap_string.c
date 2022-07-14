#include "main.h"

/**
 * *cap_string - capitalizes a string
 * @s: a given string
 * Return: pointer to dest
 */
char *cap_string(char *s)
{
	int word = 0, w;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + word) >= 97 && *(s + word) <= 122)
		*(s + word) -= 32;
	word++;
	while (*(s + word) != '\0')
	{
		for (w = 0; w < 13; w++)
		{
			if (*(s + word) == separators[w])
			{
				if ((*(s + (word + 1)) >= 97) && (*(s + (word + 1)) <= 122))
					*(s + (word + 1)) = *(s + (word + 1)) - 32;
				break;
			}
		}
		word++;
	}
	return (s);
}
