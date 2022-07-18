#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: a pointer to the pointer to a string
 * @to: pointer to the value being set
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
