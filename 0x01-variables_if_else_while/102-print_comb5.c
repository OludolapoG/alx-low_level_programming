#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int t, g;

	for (t = 0; t <= 98; t++)
	{
		for (g = t + 1; g <= 99; g++)
		{
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');
			putchar(' ');
			putchar((g / 10) + '0');
			putchar((g % 10) + '0');

			if (t == 98 && g == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
