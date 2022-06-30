#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(char c));
	printf("Size of an int: %zu byte(s)\n", sizeof(int i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(float f));
	return (0);
}
