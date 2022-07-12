#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, then a new line
 * @a:the input array
 * @n:the number of elements of the array to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int num = 0;

	for (; num < n; num++)
	{
		printf("%d", *(a + num));
		if (num != (n - 1))
			printf(", ");
	}
	printf("\n");
}
