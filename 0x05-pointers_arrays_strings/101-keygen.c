#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r = 0, counter = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (counter < 2772)
	{
		r = rand() % 128;
		if ((counter + r) > 2772)
			break;
		counter = counter + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - counter));
	return (0);
}
