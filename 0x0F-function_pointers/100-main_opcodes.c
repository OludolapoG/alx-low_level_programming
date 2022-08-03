#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes for its main function
 * @argc: argument count - the number of arguments in the program
 * @argv: argument vector - the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *opcds = (char *) main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcds[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
