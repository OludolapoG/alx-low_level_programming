#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a
 * square matrix of integers
 * @a: given pointer
 * @size: size of the matrix of integers
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int c, fsum = 0, ssum = 0;

	for (c = 0; c < (size * size); c++)
	{
		if (c % (size + 1) == 0)
			fsum += *(a + c);
		if (c % (size - 1) == 0 && c != 0 && c < size * size - 1)
			ssum += *(a + c);
	}
	printf("%d, %d\n", fsum, ssum);
}
