#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: an inout string
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
