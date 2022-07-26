#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a given string
 * @str: given string pointer
 * Return: pointer to duplicate string - newly allocated space in memory or
 * NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int s, t;

	if (str == NULL)
		return (NULL);

	for (s = 0; str[s] != '\0'; s++)
		;/*do nothing*/

	dup_str = (char *)malloc(sizeof(char) * (s + 1));

	if (dup_str == NULL)
		return (NULL);

	for (t = 0; t <= s; t++)
		dup_str[t] = str[t];

	return (dup_str);
}
