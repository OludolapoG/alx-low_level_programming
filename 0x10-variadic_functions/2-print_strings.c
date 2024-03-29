#include "variadic_functions.h"

/**
 * print_strings - prints strings, then a new line
 * @separator: string to be printed betwenn strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

	if (i < n - 1)
		if (separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}

