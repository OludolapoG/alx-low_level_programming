#include "main.h"

/**
 * *rot13 - econdes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int word = 0, w;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] =  "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + word) != '\0')
	{
		for (w = 0; w < 52; w++)
		{
			if (*(s + word) == alpha[w])
			{
				*(s + word) = rot13[w];
				break;
			}
		}
		word++;
	}
	return (s);
}
