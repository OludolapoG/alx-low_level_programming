#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long div, n = 612852475143;

	while (div < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}

		for (div = 3; div < (n / 2); div = div + 2)
		{
			if ((n % div) == 0)
				n /= div;
		}
	}

	printf("%ld\n", n);

	return (0);
}
