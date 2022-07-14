#include "main.h"

/**
 * *leet - econdes a string to 1337
 * @s: a given string
 * *(s + word) - word being pointed to
 * Return: pointer to dest
 */
char *leet(char *s)
{
	int word = 0, w, num[] = {52, 51, 48, 55, 49};
	int l_case[] = {97, 101, 111, 116, 108};
	int u_case[] = {65, 69, 79, 84, 76};

	while (*(s + word) != '\0')
	{
		for (w = 0; w < 5; w++)
		{
			if (*(s + word) == l_case[w] || *(s + word) == u_case[w])
			{
				*(s + word) = num[w];
				break;
			}
		}
		word++;
	}
	return (s);
}
