#include <stdio.h>

/**
 * _atoi - converts string to integers
 * @s: input string
 * Return: integer after conversion
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	char word = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;

		if (*s >= '0' && *s <= '9')
		{
			word = 1;
			num = num * 10 + *s - '0';
		}

		else if (word)
			break;
		s++;
	}

	if (sign < 0)
		num = (-num);

	return (num);
}
